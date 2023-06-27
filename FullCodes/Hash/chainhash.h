#ifndef CHAINHASH_H
#define CHAINHASH_H

#include <forward_list>
#include <vector>
#include <algorithm>

template<typename KeyType, typename ValueType, typename HashFunc = std::hash<KeyType>>
class ChainHash
{
public:
    using KeyValuePair = std::pair<KeyType, ValueType>;
    using BucketType = std::forward_list<KeyValuePair>;

    explicit ChainHash(std::size_t bucketCount = DefaultBucketCount)
            : m_Buckets(bucketCount)
    {
    }

    void insert(const KeyValuePair& pair)
    {
        auto& bucket = getBucket(pair.first);
        auto it = std::find_if(bucket.begin(), bucket.end(), [&](const KeyValuePair& p) { return p.first == pair.first; });

        if (it == bucket.end())
        {
            bucket.push_front(pair);
        }
        else
        {
            it->second = pair.second;
        }
    }

    std::size_t bucket_count() const noexcept
    {
        return m_Buckets.size();
    }

    std::size_t bucket_size(std::size_t bucketIndex) const
    {
        if (bucketIndex >= bucket_count())
        {
            return 0;
        }

        return std::distance(m_Buckets[bucketIndex].begin(), m_Buckets[bucketIndex].end());
    }

    typename BucketType::iterator begin(std::size_t bucketIndex)
    {
        if (bucketIndex >= bucket_count())
        {
            return typename BucketType::iterator();
        }

        return m_Buckets[bucketIndex].begin();
    }

    typename BucketType::const_iterator begin(std::size_t bucketIndex) const
    {
        if (bucketIndex >= bucket_count())
        {
            return typename BucketType::const_iterator();
        }

        return m_Buckets[bucketIndex].cbegin();
    }

    typename BucketType::iterator end(std::size_t bucketIndex)
    {
        if (bucketIndex >= bucket_count())
        {
            return typename BucketType::iterator();
        }

        return m_Buckets[bucketIndex].end();
    }

    typename BucketType::const_iterator end(std::size_t bucketIndex) const
    {
        if (bucketIndex >= bucket_count())
        {
            return typename BucketType::const_iterator();
        }

        return m_Buckets[bucketIndex].cend();
    }

private:
    static constexpr std::size_t DefaultBucketCount = 16;

    std::vector<BucketType> m_Buckets;
    HashFunc m_HashFunc;

    BucketType& getBucket(const KeyType& key)
    {
        auto hashValue = m_HashFunc(key);
        auto bucketIndex = hashValue % bucket_count();
        return m_Buckets[bucketIndex];
    }

    const BucketType& getBucket(const KeyType& key) const
    {
        auto hashValue = m_HashFunc(key);
        auto bucketIndex = hashValue % bucket_count();
        return m_Buckets[bucketIndex];
    }
};

#endif // CHAINHASH_H
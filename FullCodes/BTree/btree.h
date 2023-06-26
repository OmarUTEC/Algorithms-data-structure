    #ifndef BTREE_H
#define BTREE_H

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename T> 
class Node {
public:
    vector<T> keys;  
    vector<Node<T>*> children;  

    Node(vector<T> keys) : keys(keys) {}  


    void link_child(int index, vector<T> keys) {
        Node<T>* child = new Node<T>(keys);
        children.insert(children.begin() + index, child);
    }


    string to_string() {
        string result = "";
        for(size_t i=0; i<keys.size(); i++){
            result += std::to_string(keys[i]) + ",";
            if(i<children.size() && children[i]){
                result += children[i]->to_string() + ",";
            }
        }
        if(!children.empty() && children.back()){
            result += children.back()->to_string() + ",";
        }
        return result.substr(0, result.size()-1);
    }


    bool search(T key) {
        if(find(keys.begin(), keys.end(), key) != keys.end()) return true;
        for(auto& child: children){
            if(child && child->search(key)) return true;
        }
        return false;
    }

 
    vector<T> range_search(T start, T end) {
        vector<T> range_values;
        for(auto key: keys){
            if(key >= start && key <= end){
                range_values.push_back(key);
            }
        }
        for(auto& child: children){
            if(child){
                vector<T> child_values = child->range_search(start, end);
                range_values.insert(range_values.end(), child_values.begin(), child_values.end());
            }
        }
        sort(range_values.begin(), range_values.end());  
        return range_values;
    }
};
#endif //BTREE_H
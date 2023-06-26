
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> buildPositions(const string& pattern) {
    vector<int> positions(256, -1);
    int m = pattern.size();

    for (int i = 0; i < m; ++i) {
        positions[pattern[i]] = i;
    }

    return positions;
}

int string_matching_Boyer_Moore(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> positions = buildPositions(pattern);
    int count = 0;

    int i = 0;
    while (i <= n - m) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[i + j]) {
            j--;
        }

        if (j > 0) {
            i = i + (j - positions[text[i + j]]);
        } else {
            count++;
            i = i + m;
        }
    }

    return count;
}
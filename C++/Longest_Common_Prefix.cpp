#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); ++i) {
            size_t j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                ++j;
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) return "";
        }
        return prefix;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;
    return 0;
}
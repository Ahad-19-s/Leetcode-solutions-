#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string ans = "";

        // Merge characters alternately
        while (i < word1.size() && j < word2.size()) {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }

        // If word1 has remaining characters
        while (i < word1.size()) {
            ans += word1[i];
            i++;
        }

        // If word2 has remaining characters
        while (j < word2.size()) {
            ans += word2[j];
            j++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string word1, word2;
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2; 

    string result = obj.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;

    return 0;
}

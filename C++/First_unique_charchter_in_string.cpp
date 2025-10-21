#include<bits/stdc++.h>
using namespace std;

 int firstUniqChar(string s) {
    vector<int> freq(26, 0);
    queue<int> q;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        freq[ch - 'a']++;
        q.push(i);

        // Remove characters from front if they are repeated
        while (!q.empty() && freq[s[q.front()] - 'a'] > 1) {
            q.pop();
        }
    }

    if (!q.empty()) {
        return q.front(); // Index of first non-repeating character
    }

    return -1;
}

int main(){
    string s;
    cin>>s;
    int index= firstUniqChar(s);
    if(index!= -1){
        cout<<index;

    }else{
        cout<<"-1";
    }
}
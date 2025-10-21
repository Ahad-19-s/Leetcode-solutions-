#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& student, vector<int>& food) {
    queue<int> q;
    for (int i : student) {
        q.push(i);
    }
    int index = 0;
    int count = 0;
    while (!q.empty() && count < q.size()) {
        if (q.front() == food[index]) {
            q.pop();
            index++;
            count = 0; // Reset count when a student eats
        } else {
            int temp = q.front();
            q.pop();
            q.push(temp);
            count++;
        }
    }
    return q.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> students;
    vector<int> food;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        students.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        food.push_back(x);
    }
    int result = countStudents(students, food);
    cout << result;
    return 0;
}
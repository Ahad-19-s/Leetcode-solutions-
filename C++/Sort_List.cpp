#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int left, int mid, int right) {
    vector<int> temp = a;  // Copy of the array
    int i = left, j = mid + 1, k = left;

    // Merging two halves
    while (i <= mid && j <= right) {
        if (temp[i] < temp[j]) {
            a[k++] = temp[i++];
        } else {
            a[k++] = temp[j++];
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        a[k++] = temp[i++];
    }

    // Copy remaining elements from right half
    while (j <= right) {
        a[k++] = temp[j++];
    }
}

void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);  // Sort left half
        merge_sort(arr, mid + 1, right);  // Sort right half
        merge(arr, left, mid, right);  // Merge the two halves
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);  // Resize the vector to hold 'n' elements

    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Perform merge sort
    merge_sort(a, 0, n - 1);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

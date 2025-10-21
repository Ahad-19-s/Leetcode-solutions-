#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&num,int st,int end){
    int pivot =num[end];
    int j=st-1;
    for(int i=st;i<end;i++){
        if(num[i]<pivot){
            j++;
            swap(num[i],num[j]);
        }
    }
    j++;
    swap(num[j],num[end]);
    return j;
}
void quick_sort(vector<int>& a,int st,int end){
    if(st<end){
        int partition_index=partition(a,st,end);
        quick_sort(a,st,partition_index-1);
        quick_sort(a,partition_index+1,end);

    }

}
int main(){
   vector<int>num={-1,3,7,-4,5,6,2,1};
    int n=num.size();
    cout<<"Before sorting: ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    quick_sort(num,0,n-1);
   for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}
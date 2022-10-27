#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=10;

    // Insertion Sort

    for(int i=1;i<n;i++){
        int j=i-1;
        int data=arr[i];
        
        while(j>-1 && arr[j]>data){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=data;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

// Time Complexity-->O(n^2);
// Space Complexity-->O(1);
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int lastDuplicate=0;

    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]&& a[i]!=lastDuplicate){
            cout<<"Duplicate number is "<<a[i]<<endl;
            lastDuplicate=a[i];
        }
    }

    return 0;
}
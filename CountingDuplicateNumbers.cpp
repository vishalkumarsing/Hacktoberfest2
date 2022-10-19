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

    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            int j=i;
            while(a[j]==a[i]) j++;
            cout<<a[i]<<" Occurs time is "<<j-i<<endl;
            i=j-1;
        }
    }

    return 0;
}
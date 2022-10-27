#include<bits/stdc++.h>
using namespace std;

int LCM(int a,int b){

    int large=max(a,b);
    int small=min(a,b);

    for(int i=large;;i+=large){
        if(i%small==0)
            return i;
    }
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<LCM(a,b);
    return 0;
}
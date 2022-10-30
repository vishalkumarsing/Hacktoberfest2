#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1) {cout<<"YES"<<endl; continue;}
        if(n==k){
            sort(s.begin(),s.end());
            if(s.begin()==s.end()){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
            
            }
       
       
       int count1=0;
       int count0=0;
        for(auto itr=s.begin();itr!=s.end();itr++)
        {
          if(*itr=='1') {count1++;}
        }

        

        if(k%2==0)
        {
            if(count1%2==0) {cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            
            if(count1%2==0 || count0%2==0){ cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
        
    }
    return 0;
}
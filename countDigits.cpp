#include<iostream>
using namespace std;

int countDigit(long num,int digit){
    int count=0;
    while(num>0){
        int r=num%10;
        if(r==digit)
            count++;
        num/=10;
    }
    return count;
}

int main(){
    long num;
    int digit;
    cin>>num>>digit;

    cout<<countDigit(num,digit);
}
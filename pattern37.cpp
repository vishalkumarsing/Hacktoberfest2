#include<iostream>
using namespace std;
/*
5
44
333
2222
11111
*/

int main(){
    int n=5;
    for( int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<n;
        }
        printf("\n");
        n--;
    }
}
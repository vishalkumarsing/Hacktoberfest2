#include<bits/stdc++.h>
using namespace std;

class Array{
    private: 
        int *arr;
        int size;
    public:
        Array(){
            arr=new int[10];
            this->size=10;
            for(int i=0;i<size;i++) 
                arr[i]=0;
        }
        Array(int size){
            this->arr=new int[size];
            this->size=size;
            for(int i=0;i<size;i++){
                arr[i]=0;
            }
        }
        void display(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
        int length(){
            return size;
        }

        void addOnIndex(int index,int element){

            if(index<0 && index >=size){
                cout<<"You cannot add at"<<index<<"index"<<endl;
                return;
            }
            else if(index==size-1){
                arr[index]=element;
                return;
            }
            for(int i=size-2;i>=index;i--){
                arr[i+1]=arr[i];
            }
            arr[index]=element;
        }
};

int main(){

    Array a;
    a.addOnIndex(0,1);
    a.addOnIndex(0,2);
    a.addOnIndex(0,3);
    a.addOnIndex(6,989);
    a.addOnIndex(151,989);
    a.display();

    return 0;
}
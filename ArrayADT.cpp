#include<iostream>
using namespace std;

template<class T>
class Array{
    private:
        T *A;
        int size;
        int length;

    public:
        Array(){
            size=10;
            length=0;
            A=new T[size];
        }
        Array(int size){
            this->size=size;
            length=0;
            A=new T[size];
        }
        ~Array(){
            delete []A;
        }

        void display (){
            for(int i=0;i<length;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }

        void add(T ele){
            if(length<size){
                A[length++]=ele;
            }
        }
        void insert(T x,int index){
            if(index>=0 && index<=length){
                for(int i=length;i>index;i--){
                    A[i]=A[i-1];
                }
                A[index]=x;
                length++;
            }
        }
        int deleteIndex(int index){
            int x=0;
            int i;

            if(index>=0 && index<length)
            {
                x=A[index];
                for(i=index;i<length-1;i++)
                    A[i]=A[i+1];
                length--;
                return x;
            }
            return 0;
        }
        void deleteElement(T x){
            for(int i=0;i<length;i++){
                    if(x==A[i]){
                        for(;i<length;i++){
                            A[i]=A[i+1];
                        }
                        length--;
                        break;
                    }
                }
        }
        bool linearSearch(int key){
            for(int i=0;i<length;i++){
                    if(key==A[i]){
                        return true;
                    }
            }
            return false;
        }
        void sort(){
            for(int i=0;i<length;i++){
                for(int j=0;j<length-i;j++){
                    if(A[j]>A[j+1]){
                        int temp=A[j];
                        A[j]=A[j+1];
                        A[j+1]=temp;
                    }
                }
            }
        }

        bool binarySearch(T key){
            int lb=0,ub=length;
            while(lb<ub){
                int mid=(lb+ub)/2;
                if(key==A[mid]){
                    return true;
                }
                else if(key>A[lb]){
                    lb=mid+1;
                }
                else{
                    ub=mid-1;
                }
            }
            return false;

        }
        T get(int index){
            if(index>=0 && index<length){
                return A[index];
            }
            return -1;
        }
        void set(int index,T key){
            if(index>=0 && index<length){
                A[index]=key;
            }
        }
        int max(){
            int maxNum=A[0];
            for(int i=1;i<length;i++){
                if(A[i]>maxNum){
                    maxNum=A[i];
                }
            }
            return maxNum;
        }
        int min(){
            int minNum=A[0];
            for(int i=1;i<length;i++){
                if(A[i]<minNum){
                    minNum=A[i];
                }
            }
            return minNum;
        }
        int sum(){
            int sum=0;
            for(int i=0;i<length;i++){
                sum+=A[i];
            }
            return sum;
            
        }
        float average(){
            int sum=0;
            for(int i=0;i<length;i++){
                sum+=A[i];
            }
            return sum/float(length);
        }
        void reverse(){
            for(int i=0,j=length-1;i<j;i++,j--){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
        bool isSorted(){
            for(int i=0;i<length-1;i++){
                if(A[i]>A[i+1]){
                    return false;
                }
            }
            return true;
        }
        void insertInSorted(T ele){
            if(length<=(size-1)){
                int i=length-1;
            for(;i>=0;i--){
                if(A[i]>=ele){
                    A[i+1]=A[i];
                }
                else{
                    A[i+1]=ele;
                    break;
                }

            }
            
            length++;
            }
        }
        void swap(T &a,T &b){
            int temp=a;
            a=b;
            b=temp;
        }
        void negativeOnLeft(){
            for(int i=0, j=length-1;i<j; ){
                if(A[i]<0 && A[j]>=0){
                    i++;
                    j--;
                }
                else if(A[i]>=0&&A[j]<0){
                    swap(A[i],A[j]);
                    i++;
                    j--;
                }
                else if(A[i]>=0&& A[j]>=0){
                    j--;
                }
                else if(A[i]<0&& A[j]<0){
                    i++;
                }
                
            }
        }
        void unionArray(Array<int> arr[],int arr2[]){
            int arr3length=length+sizeof(arr2)/sizeof(int);
            int arr3[arr3length];
            for(int i=0,j=0,k=0;k<arr3length;k++){

                if(i<length){
                    arr3[k]=arr[i];
                    i++;
                }
                else{
                    arr3[k]=arr2[j];
                    j++;
                }
            }
            for(int j=0;j<arr3length;j++){
                cout<<arr3[j]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    Array<int> arr(5);
    arr.add(1);
    arr.add(2);
    arr.deleteIndex(0);
    arr.add(4);
    arr.add(5);
    arr.insert(1,0);
    arr.insert(3,2);
    arr.deleteElement(4);
    cout<<arr.linearSearch(5)<<endl;
    arr.add(4);
    arr.sort();
    cout<<arr.binarySearch(5)<<endl;
    cout<<arr.get(3)<<endl;
    arr.display();
    arr.set(1,11);
    arr.set(2,21);
    arr.set(0,81);
    arr.sort();
    arr.deleteElement(5);
    arr.deleteElement(11);
    arr.display();
    arr.insertInSorted(6);
    arr.insertInSorted(5);
    arr.display();
    arr.deleteIndex(0);
    arr.deleteIndex(2);
    arr.deleteIndex(1);
    arr.add(-20);
    arr.add(0);
    arr.add(-600);
    arr.display();
    arr.negativeOnLeft();
    arr.display();
    int arr1[]={1,2,3};

    
    return 0;
}

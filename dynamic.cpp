// Last updated: 2026-02-19T21:41:45+05:00
#include<iostream>
using namespace std;
class DynamicArray{
    int size;
    int* arr;
    public:
    DynamicArray(int s): size(s){
        arr=new int[s];
        for(int i=0;i<s;i++){
            arr[i]=0;
        }
    }
    void add(int val){
        int* newArr=new int[size+1];
        for(int i=0;i<size;i++){
            newArr[i]=arr[i];
        }
        newArr[size+1]=val;
        delete[] arr;
        size++;
        }
    int getSize(){
        return size;
    }
};
int main(){
    DynamicArray a1(5);
    cout<<"SIZE BEFORE ADDING VALUE: "<<a1.getSize()<<endl;
    a1.add(50);
    cout<<"SIZE AFTER ADDING VALUE: "<<a1.getSize()<<endl;
}

// Last updated: 2026-03-03T21:40:58+05:00
#include<iostream>
using namespace std;
class Calculator{
    int num1, num2,num3;
    public:
    int add(int n1, int n2){
        return n1+n2;
    }
    int add(int n1,int n2, int n3){
        return n1+n2+n3;
    }
    int multiply(int a, int b){
        return a*b;
    }
    int multiply(int a, int b, int c){
        return a*b*c;
    }
};
int main(){
    Calculator a1, a2;
    Calculator m1, m2;
cout<<"2 parameter add: "<<a1.add(10,20)<<endl;
cout<<"3 parameter add: "<<a1.add(10,20, 30)<<endl;
cout<<"2 parameter multiply: "<<m1.multiply(2,5)<<endl;
cout<<"3 parameter multiply:"<<m2.multiply(2,3,4)<<endl;
}
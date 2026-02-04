#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int *p1, *p2, *p3;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    p1 =&a;
    p2=&b;
    p3=&c;
    a=*p1^*p2^*p3;
    b=*p1^*p2^*p3;
    c=*p1^*p2^*p3;
    a=*p1^*p2^*p3;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}
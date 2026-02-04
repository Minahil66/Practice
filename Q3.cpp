#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter temperature in farenheit: ";
    cin>>f;
    c=(f-32)/1.8;
    cout<<"Temprature in Celsius is: "<<c;
}
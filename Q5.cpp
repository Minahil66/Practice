#include<iostream>
using namespace std;
float sphere_area(float r){
    float sarea;
    sarea=4*(3.141)*(r*r);
    return sarea;
}
float sphere_volume(float r){
    float vol;
    vol=(1.34)*(3.141)*(r*r*r);
    return vol;
}
int main(){
    float radius, v,a;
    cout<<"Enter radius of sphere: ";
    cin>>radius;
    a=sphere_area(radius);
    cout<<"Surface Area: "<<a<<endl;
    v=sphere_volume(radius);
    cout<<"Volume: "<<v;
}
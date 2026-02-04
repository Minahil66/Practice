#include<iostream>
using namespace std;
int main(){
    int roll, marks=0;
    float percent, sum=0.0;
    cout<<"Enter your roll number: ";
    cin>>roll;
    for(int i=1;i<=5;i++){
        cout<<"Enter marks of subject "<<i<<": ";
        cin>>marks;
        sum+=marks;
    }
    percent=(sum/500.0)*100.0;
    cout<<"Total marks: "<<sum<<endl;
    cout<<"Percentage: "<<percent;

}
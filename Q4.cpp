#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 int main(){
    int myteam, number1, number2, count=0, ecount=0;
    srand(time(0));
    myteam=(rand() % 6)+1;
    cout<<"Total No. of players in your team: "<<myteam<<endl;
    for(int i=1;i<=myteam;i++){
        number1=rand() % 11;
        number2=rand() % 11;
        cout<<"Pair of numbers: "<<endl;
        cout<<"Number 1: "<<number1<<endl;
        cout<<"Number 2: "<<number2<<endl;
        if(number1==number2){
            cout<<"Enemy got hit by your team!"<<endl;
            count++;
        }else{
            cout<<"You got hit by enemy team!"<<endl;
            ecount++;
        }}
    cout<<endl;
    if(count>ecount){
        cout<<"Game Over! You won."<<endl;
    }
    else{
        cout<<"Game Over! You lost."<<endl;
    }
 }
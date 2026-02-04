#include<iostream>
using namespace std;
int main(){
    char acc_type;
    int acc_num;
    int money=200000;
    float withdraw=0.0;
    float tax;
    float final_m;

    cout<<"Enter account type (S for saving, C for current): ";
    cin>>acc_type;
    cout<<"Enter account number: ";
    cin>>acc_num;
    cout<<"Enter the money you want to withdraw: ";
    cin>>withdraw;
    if(withdraw>100000){
        cout<<"Error! Cannot withdraw more than 100,000";
    return 1;
    }
    switch(acc_type){
        case 's':
        case 'S':{
        if(withdraw>50000){
            tax=(0.05)*(withdraw);
        }
        else{
            tax=(0.02)*(withdraw);
        }
        break;
    }
        case 'c':
        case 'C':{
            if(withdraw>50000){
                tax=(0.05)*(withdraw);
            }
            else{
                cout<<"Pay Rs 100 as withdrawal fee"<<endl;
                tax=100;
            }
            break;
        }
        default:{
            cout<<"Error! invalid input";
        }
    }
    final_m=money-tax-withdraw;
    cout<<"You selected "<<acc_type<<endl;
    cout<<"Withdrawal amount was: "<<withdraw<<endl;
    cout<<"Remaining amount is: "<<final_m;
}
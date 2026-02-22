#include<iostream>
using namespace std;
class Bank{
    private:
    float balance=200000;
    int transactions=0;
    float interest=0;

    public:
    void display(){
        cout<<"Current balance: "<<balance<<endl;
    }
    void disp_transaction(){
        cout<<"Number of transactions: "<<transactions<<endl;
    }
    void disp_interest(float rate, int time){
        rate=rate/100.0;
        interest=balance*(rate)*time;
        cout<<"Interest earned:Rs "<<interest<<endl;
    }
    void deposit(float dep){
        if(dep<=0){
            cout<<"Error";
            return;
        }
        cout<<"You are depositing: Rs "<<dep<<endl;
        balance+=dep;
        transactions++;
        cout<<"Deposit successful! Your balance is now Rs "<<balance<<endl;
    }
    void withdraw(float wd){
        if(wd<=0){
            cout<<"Error";
            return;
        }
        cout<<"You are withdrawing: Rs "<<wd<<endl;
        if(wd>balance){
            cout<<"Error! ";
            return;
        }
        balance-=wd;
        transactions++;
        cout<<"Withdrawal successful! Your balance is now Rs "<<balance<<endl;
    }};
int main(){
    Bank account;
    int select=0;
    float d, with_draw;
    float r,t;
    cout<<"ABC BANK DIGITAL SYSTEM\n";
    do{
    cout<<"1. Display the account balance\n2. Display number of transactions\n3. Display interest earned for this period\n4. Make a deposit\n5. Make a withdrawal\n6. Exit"<<endl;
    cout<<"Select: ";
    cin>>select;
        switch(select){
            case 1:
                cout<<"\n";
                account.display();
                break;
            case 2:
                cout<<"\n";
                account.disp_transaction();
                break;
            case 3:
                cout<<"\n";
                cout<<"Enter rate: ";
                cin>>r;
                cout<<"Enter time: ";
                cin>>t;
                account.disp_interest(r,t);
                cout<<"\n";
                break;
            case 4: 
                cout<<"\n";
                cout<<"Enter amount to deposit: ";
                cin>>d;
                account.deposit(d);
                cout<<"\n";
                break;
            case 5: 
                cout<<"\n";
                cout<<"Enter the amount to withdraw: ";
                cin>>with_draw;
                account.withdraw(with_draw);
                cout<<"\n";
                break;
            default:
                cout<<"Exiting.....";
        }} 
    while(select!=6);
return 0;
}
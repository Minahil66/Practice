// Last updated: 2026-02-18T21:42:48+05:00
#include<iostream>
using namespace std;
class Account{
    private:
    int account_no;
    float account_bal;
    int security_no;
    static int track;
    public:
    Account(int no, float b, int s){
        account_no=no;
        account_bal=b;
        security_no=s;
        track++;
    }
    void display(){
        cout<<"Account number: "<<account_no<<endl;
        cout<<"Account balance: "<<account_bal<<endl;
        cout<<"Security number: "<<security_no<<endl;
    }
    int getCount(){
        return track;
    }
};
int Account::track=0;
int main(){
    Account a1(1, 10000, 1001);
    Account a2(2, 50000, 2002);
    Account a3(3, 20000, 3003);
    cout<<"Total objects: "<<a3.getCount();
}
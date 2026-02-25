// Last updated: 2026-02-25T21:39:32+05:00
#include<iostream>
#include<cstring>
using namespace std;
class Employee{
    char *EmployeeName;
    const int EmployeeId;
    public:
    Employee(const char* name, int id): EmployeeId(id){
        EmployeeName=new char[strlen(name)+1];
        strcpy(EmployeeName,name);
    }
    void setName(const char* n){
        delete[] EmployeeName;
        EmployeeName=new char[strlen(n)+1];
        strcpy(EmployeeName, n);
    }
    int getID(){
        return EmployeeId;
    }
    char* getName(){
        return EmployeeName;
    }
};
int main(){
    Employee e1("abc", 10);
    cout<<"NAME: "<<e1.getName()<<endl<<"ID: "<<e1.getID()<<endl;
    e1.setName("xyz");
    cout<<"NAME: "<<e1.getName()<<endl<<"ID: "<<e1.getID()<<endl;
}
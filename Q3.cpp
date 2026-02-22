#include<iostream>
#include<cstring>
using namespace std;
class Employee{
    private:
    char* firstname;
    string lastname;
    int salary=0;
    public:
    void setFirstname(const char* name){
        int len=strlen(name);
        firstname=new char[len+1];
        strcpy(firstname,name);
    }
    void setlastname(string lastname){
        this->lastname=lastname;
    }
    void setSalary(int s){
        if(s<0){
            salary=0;
        }else{
        salary=s;
        }
    }
    const char* getFirstname(){
        return firstname;
    }
    string getlastname(){
        return lastname;
    }
    int getSalary(){
        return salary;
    }
    int getyearlysalary(){
        int yearly;
        yearly=salary*12;
        return yearly;
    }
    float raise(){
        float r;
        r=0.1*getyearlysalary();
        return getyearlysalary()+r;
    }
};
int main(){
    Employee e[2];
    e[0].setFirstname("ABC");
    e[0].setlastname("abc");
    e[0].setSalary(20000);

    e[1].setFirstname("XYZ");
    e[1].setlastname("xyz");
    e[1].setSalary(-10000);

    cout<<"Yearly salaries: "<<endl;
    cout<<e[0].getFirstname()<<endl;
    cout<<e[0].getyearlysalary()<<endl;
    cout<<e[1].getFirstname()<<endl;
    cout<<e[1].getyearlysalary()<<endl;

    cout<<"After 10% raise: "<<endl;
    cout<<e[0].getFirstname()<<endl;
    cout<<e[0].raise()<<endl;
    cout<<e[1].getFirstname()<<endl;
    cout<<e[1].raise()<<endl;
}
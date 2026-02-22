#include<iostream>
using namespace std;
class Student{
    public:
    char name[20];
    int roll_no;
    int semester;
    char section;
    public:
    void display(){
        cout<<name<<"\nRoll number: "<<roll_no<<"\nSemester: "<<semester<<"\nSection: "<<section<<endl;
    }
    void sectionsearch(Student s[], int total, char sec){
        cout<<"Students in section "<<sec<<endl;
        for(int i=0;i<total;i++){
            if(s[i].section==sec){
                s[i].display();
            }}}};
int main(){
    Student students[4];
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Name: "; cin>>students[i].name;
        cout<<"Roll number: "; cin>>students[i].roll_no;
        cout<<"Section: "; cin>>students[i].section;
        cout<<"Semester: "; cin>>students[i].semester;
        cout<<endl;
    }
    cout<<endl;
    students[0].sectionsearch(students, 4, 'A');
}
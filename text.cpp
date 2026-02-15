// Last updated: 2026-02-15T21:55:47+05:00
#include<iostream>
#include<string>
#include <cstring>
using namespace std;
class Text {
    char* buffer;

public:
    Text(const char* s) {
        buffer = new char[strlen(s) + 1];
        strcpy(buffer, s);
    }
    
    Text(const Text& obj) {
        buffer = new char[strlen(obj.buffer) + 1];
        strcpy(buffer, obj.buffer);
    }
    
    void print(){ 
        cout << buffer << endl; 
    }
    ~Text() {
         delete[] buffer; 
        }
};
int main(){
    Text t1("Hello");
    Text t2=t1;
    t1.print();
    t2.print();
}
//before implementing a deep copy, the destructor was freeing 
//the same memory twice, causing the program to crash.
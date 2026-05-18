// #include<iostream>
// #include<stdexcept>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){
//     string name;
//     string pass;
//     cout<<"LOGIN PAGE:"<<endl;
//     cout<<"Enter username: ";
//     cin>>name;
    
//     try{
//         bool flag=false;
//         cout<<"Enter Password: "<<endl;
//         cin>>pass;
//         if(pass.size()<6) throw "Password length is should be greater than 6";
//         for(char ch:pass){
//             if(isdigit(ch)){ flag=true;} 
//     }
//     if(flag==false) throw "No digit in password";
//     cout<<"password saved:";
// }
// catch(const char* msg){
//     cout<<msg;
// }
// }
// #include<iostream>
// #include<vector>
// #include <algorithm>

// using namespace std;
// class DynamicStack{
// vector<char> stack;
// public:
// void push(char val){
//     stack.push_back(val);
// }
// void pop(){
//     if(stack.empty()){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     stack.pop_back();
// }
// char peek(){
//     if(stack.empty()){
//         cout<<"stack is empty"<<endl;
//         return'\0';
//     }
//     return stack.back();
// }
// void reverse(){
//     std::reverse(stack.begin(), stack.end());
// }
// void display(){
//     for(char ch:stack){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }
// };
// int main(){
//     DynamicStack s1;
//     s1.push('h');
//     s1.push('e');
//     s1.push('l');
//     s1.push('l');
//     s1.push('o');
//     s1.display();
//     s1.pop();
//     s1.display();
//     cout<<"peek: "<<s1.peek()<<endl;
//     s1.display();
//     s1.reverse();
//     s1.display();
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<ctime>

// using namespace std;

// void sort_vector(vector<int>& arr){
//     int size=arr.size();
//     for(int i=1;i<size;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// int main(){
//     vector<int> array1, array2;
//     for(int i = 10000; i > 0; i--) {
//         array1.push_back(i);
//         array2.push_back(i);
//     }

//     clock_t start1=clock();
//     sort_vector(array1);
//     clock_t end1 =clock();
//     cout << "User defined: " << (double)(end1 - start1) / CLOCKS_PER_SEC * 1000000 << " microseconds" << endl;

//     clock_t start2 = clock();
//     sort(array2.begin(), array2.end());
//     clock_t end2 = clock();
    
//     cout << "Built in: " << (double)(end2 - start2) / CLOCKS_PER_SEC * 1000000 << " microseconds" << endl;

// }
//  #include<iostream>
//  #include<map>
//  #include<vector>
 
//  using namespace std;
//  class grades{
//     map<string,char> students;
//     public:
//     void addStudents(int n){
//         for(int i=0;i<n;i++){
//             string name;
//             char g;
//             cout<<"Enter name: ";
//             cin>>name;
//             cout<<"Enter grade: ";
//             cin>>g;
//             students[name]=g;
//         }
//     }
//     void retrieve( string name){
//         auto it=students.find(name);
//         if(it!=students.end()){
//         cout<<"Name: "<<name<<endl;
//         cout<<students[name];
//         }
//         else{
//             cout<<"student not found!"<<endl;
//         }
//     }
//     void update(string name, char g){
//         students[name]=g;
//         cout<<"Updated";
//     }
//     void remove(string name){
//         auto it=students.find(name);
//         if(it!=students.end()){
//             students.erase(it);
//         }
//     }
//     void display(){
//         for(auto& pair : students) {
//     cout << pair.first << ": " << pair.second << endl;
// }
//     }
//  };
//  int main() {
//     grades g;
//     int choice;
//     string name;
//     char grade;
    
//     do {
//         cout << "\n===== GRADE SYSTEM =====" << endl;
//         cout << "1. Add students" << endl;
//         cout << "2. Retrieve grade" << endl;
//         cout << "3. Update grade" << endl;
//         cout << "4. Remove student" << endl;
//         cout << "5. Display all" << endl;
//         cout << "6. Exit" << endl;
//         cout << "Choice: ";
//         cin >> choice;
        
//         switch(choice) {
//             case 1:
//                 int n;
//                 cout << "How many students? ";
//                 cin >> n;
//                 g.addStudents(n);
//                 break;
                
//             case 2:
//                 cout << "Enter name: ";
//                 cin >> name;
//                 g.retrieve(name);
//                 break;
                
//             case 3:
//                 cout << "Enter name: ";
//                 cin >> name;
//                 cout << "Enter new grade: ";
//                 cin >> grade;
//                 g.update(name, grade);
//                 break;
                
//             case 4:
//                 cout << "Enter name: ";
//                 cin >> name;
//                 g.remove(name);
//                 break;
                
//             case 5:
//                 g.display();
//                 break;
                
//             case 6:
//                 cout << "Goodbye!" << endl;
//                 break;
                
//             default:
//                 cout << "Invalid choice!" << endl;
//         }
//     } while(choice != 6);
    
//     return 0;
// }
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> guests;
    string name;
    char choice;
    cout << "PARTY GUEST LIST" << endl;
    do {
        cout << "Enter guest name: ";
        cin >> name;
        guests.insert(name);
        cout << "Add another? (y/n): ";
        cin >> choice;  
    } while(choice == 'y' || choice == 'Y');
    cout << "\nUNIQUE GUESTS" << endl;
    for(string n : guests) {
        cout << n << endl;
    }
    cout << "\nTotal unique guests: " << guests.size() << endl;
}
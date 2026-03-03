// Last updated: 2026-03-03T21:40:47+05:00
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    int numofsides;
    protected:
    float area;
    public:
    Shape(int n):numofsides(n){};
    int getNumOfSides()const{return numofsides;}
    void setNumOfSides(int s){numofsides=s;}
    virtual double GenerateArea() = 0;
    virtual ~Shape(){}
};
class Rectangle:public Shape{
    protected:
    float length;
    float width;
    public:
    Rectangle(float l, float w):Shape(4){
        length=l;
        width=w;
    }
    double GenerateArea(){
        area=length*width; return area;
    }};
class Circle:public Shape{
    float radius;
    public:
    Circle(int r):Shape(0){
        radius=r;
    }
    double GenerateArea()override{
        area=radius*radius*(3.14);
        return area;
    }};
class Triangle:public Shape{
    float height;
    float base;
    public:
    Triangle(float h, float b):Shape(3){
        height=h; base=b;
    }
    double GenerateArea(){
        area=height*base/2; return area;
    }};
class Square:public Rectangle{
    float side;
    public:
    Square(float s):Rectangle(s,s){
        side=s;}
    bool checkSides(){
        return (width==length); }
    double GenerateArea(){
        area=side*side; return area;
    }};
int main(){
    string check;
Rectangle r(5, 3);
    cout << "Rectangle area:"<<r.GenerateArea()<<endl;
    Circle c(2.5);
    cout << "Circle area:"<< c.GenerateArea()<<endl;
    Triangle t(4, 6);
    cout << "Triangle area: " << t.GenerateArea()<<endl;
    Square s(4);
    cout << "Square area: " << s.GenerateArea() << endl;
     if (s.checkSides()==true){
        check="yes";
     }
     else{
        check="no";
     }
     cout << "Square sides equal: " <<check;
}
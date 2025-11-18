#include<stdio.h>
void getData();
float volumeCal(int h, int a);
int main() {
    getData();
    return 0;
}
float volumeCal(int h, int a){
    float vol;
    vol=(a*a) *(1.0/3)*h;
    return vol;
}
void getData(){
    int h,a;
    float result;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("Enter base: ");
    scanf("%d", &a);
    result=volumeCal(h,a);
    printf("volume is: %.1f", result);
}
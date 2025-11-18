#include<stdio.h>
void swaped(int *aptr, int *bptr, int *cptr);
int main() {
    int a,b,c;
    printf("Enter all 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    printf("a:%d, b:%d, c:%d", a,b,c);
    int *ptr1=&a, *ptr2=&b, *ptr3=&c;
    swaped(ptr1,ptr2,ptr3);
}
void swaped(int *aptr, int *bptr, int *cptr){
    int temp;
    temp=*bptr;
    *bptr=*aptr;
    *aptr=*cptr;
    *cptr=temp;
    printf("after swap: \n");
    printf("a:%d, b:%d, c:%d", *aptr, *bptr, *cptr);
}
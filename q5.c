#include<stdio.h>
void SortFunction(int *arr, int size, int order);
int main(){
    int x, sort;
    printf("Enter size of array: ");
    scanf("%d", &x);
    int array[x];
    int *ptr=array;
    printf("Enter order: \n1.Ascending\n2.Descending");
    scanf("%d", &sort);
    for(int i=0;i<x;i++){
        printf("Element %d: ",i+1 );
        scanf("%d",&array[i]);
    }
    SortFunction(ptr, x,sort);
    }
    void SortFunction(int *arr, int size, int order){
    if (order==1){
    for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
    if(*(arr+j)>*(arr+j+1)){
    int temp=*(arr+j);
    *(arr+j)=*(arr+j+1);
    *(arr+j+1)=temp;
    }
    }
    }
    }
    if(order==2){
    for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
    if(*(arr+j)<*(arr+j+1)){
    int temp=*(arr+j);
    *(arr+j)=*(arr+j+1);
    *(arr+j+1)=temp;
    }
    }
    }
    }
    for(int i=0;i<size;i++){
    printf(" %d, ", arr[i]);
    }
    }


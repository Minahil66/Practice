#include<stdio.h>
int main(){
    float array[20]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.7,11,13,25,45.9,13.2,15.4,36.4,20.7,37.9,48.9};
    float *ptr=array;
    float max=0, s_max=0;
    for(int i=0;i<20;i++){
        if(max<*ptr){
            s_max=max;
            max=*ptr;
        }
        if(s_max<*ptr && *ptr<max){
            s_max=*ptr;
        }
        ptr++;
    }
    printf("max: %.1f, second max: %.1f", max, s_max);
}

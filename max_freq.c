#include<stdio.h>
#include<string.h>
int main() {
    char name[20], course[30], merged[50];
    int len=0, len1=0, total=0, maxnum, count;
    char maxchar;
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    len=strlen(name);
    printf("Enter course name: ");
    fgets(course,30,stdin);
    len1=strlen(course);
    total=len+len1;
    for(int i=0;i<len;i++){
        merged[i]=name[i];
    }
    for(int j=0;j<len1;j++){
        merged[len+j]=course[j];
    }
    merged[total]='\0';

    maxnum=0;
    for(int i=0;i<total;i++){
        count=0;
    for(int j=0;j<total;j++){
        if(merged[i]==merged[j]){
        count++;
        }
        }
    if(count>maxnum){
        maxnum=count;
        maxchar=merged[i];
        }
        }
    printf("Name string is: %s", name);
    printf("\nCourse name is: %s", course);
    printf("\nMaximum occuring character is: %c", maxchar);
}
#include<stdio.h>
#include<string.h>
int main() {
    char first[20], last[20],full[50];
    int len=0, len1=0, total=0;
    printf("Enter first name: ");
    scanf("%s", first);
    len=strlen(first);
    printf("Enter last name: ");
    scanf("%s", last);
    len1=strlen(last);
    total=len+len1;
    for(int i=0;i<len;i++){
        full[i]=first[i];
    }
    for(int j=0;j<len1;j++){
        full[len+j]=last[j];
    }
    full[total]='\0';
    printf("%s\n", full);
    for(int k=total;k>=0;k--){
        printf("%c", full[k]);
    }
}
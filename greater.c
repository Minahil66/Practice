#include<stdio.h>
#include<string.h>
int main() {
    char string1[100], string2[100];
    int flag=0, i=0;
    printf("Enter first string: ");
    fgets(string1, 100, stdin);
    printf("enter second string: ");
    fgets(string2, 100, stdin);
    while(string1[i] != '\0' && string2[i] != '\0'){
        if(string1[i]==' ' || string1[i]=='\n' ||string2[i]==' ' || string2[i]=='\n'){
            continue;
        }
        if(string1[i]==string2[i]){flag=0;}
        else if(string1[i]<string2[i]){flag=2;}
        else if(string1[i]>string2[i]){flag=1;}
        else{printf("Invalid option");} break;
        i++;
    }
    if(flag==0){
        printf("Strings are equal");
    }
    else if(flag==1){
        printf("string 1 is greater");
    }
    else if(flag==2){
        printf("string 2 is greater");
    }
    else{
        printf("invalid input");
    }
}

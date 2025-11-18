#include<stdio.h>
void position(int marks, int experience);
int main() {
    int score, exp;
    printf("Enter marks: ");
    scanf("%d", &score);
    if(score>=60){
    printf("Enter experience: ");
    scanf("%d", &exp);
    }
    position(score, exp);
}

void position(int marks, int experience){
    if(marks>=50 && marks<=59){
        printf("Selected for the Trainee Engineer post");
    }
    else if(marks>=60 && marks<=69 && experience>=1){
        printf("Selected for Assistant Developer");
    }
    else if(marks>=70 && experience>=2){
        printf("Selected for Assosiate Developer");
    }
    else{
        printf("Invalid input!");
    }
}
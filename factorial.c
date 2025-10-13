#include<stdio.h>
int main() {
	int i,j,num=1;
	printf("Enter a number: ");
	scanf("%d", &j);
	for(i=1;i<=j;i++) {
	num=i*num;
	}
	printf("factorial of the number is %d",num );
}
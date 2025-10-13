#include<stdio.h>
int main() {
	int next,prev=0,curr=1, sum=0,i;
	printf("%d\n", curr);
	while(i<=14) {
		if(next%3==0 || next%5==0 || next%7==0) {
			sum+=next;
		}
		next=prev+curr;
		prev=curr;
		curr=next;
		printf("%d\n", next);
		i++;
		}
	printf("the sum of numbers divisible by 3, 5 amd 7 is %d", sum);
}
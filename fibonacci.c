// Last updated: 2025-10-29T09:55:47+05:00
#include<stdio.h>
int main() {
int curr=1,next, prev=0,sum=0,i;
printf("%d\n",curr);
for(i=2;i<=16 ;i++) {
	next=prev+curr;
	prev=curr;
	curr=next;
	
	if(next%3==0 || next%5==0 || next%7==0) {
		sum+=next;
	}
	printf("%d\n", next);
}
printf("the sum of numbers divisible by 3,5 and 7 is %d", sum);
}

/*since we know the termination point of the fibonacci series, 
for loop is more efficient as its much simpler and compact than while loop*/
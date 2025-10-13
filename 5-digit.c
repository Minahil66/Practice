#include<stdio.h>
int main() {
	int num,dnum, lastdig, reversed=0, sum=0, isprime=0;
	printf("Enter a 5-digit number: ");
	scanf("%d", &num);
	if (num>99999 || num<=9999) { //validating only 5-digit input
		printf("Invalid input");
		return 1;
	}
	
	dnum=num;
	for(int i=1;i<=5;i++) { // sum of the digits of the number
	lastdig=dnum%10;
	sum+=lastdig;
	dnum=dnum/10;
    }
    
    
	if(sum%2==0) { 
		isprime=1; //assuming number's composite
		for(int k=2;k*k<=num;k++) { 
			if(num%k==0) {
			isprime=0; //status flag
	}
	}
	
	
	if(isprime==0) {
		printf("Number is composite");
	}
	else {
		printf("Number is prime");
	}
	}
	
	
	if (sum%2!=0){
		dnum=num;
	for(int i=1;i<=5;i++) {
		lastdig=dnum%10;
		reversed=(reversed*10)+lastdig; 
		dnum=dnum/10;
		}
		
		
	if(num==reversed) {
		printf("Number is palindrome");
		}
	else {
		printf("number is not palindrome");
	}
    }
    }
	

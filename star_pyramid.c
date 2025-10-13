#include<stdio.h>
int main() {
for(int i=1;i<=5;i++) {
	for(int k=1;k<=5-i;k++){
		printf(" ");
	}
    	for(int j=1;j<=(2*i-1);j++){  //i*2 is even, then i*2-1 is odd, the number of stars printed in each like in odd
		printf("*");
	}
	printf("\n");
}
}
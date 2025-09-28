#include<stdio.h>
int main() {
	char coffee, type, size,m_a;
	float sum;
	printf("which type of coffee would you like? (W)hite or (B)lack: ");
	scanf(" %c", &coffee);
	printf("What is the cup size? (N)ormal or (D)ouble): ");
	scanf(" %c", &size);
	printf("(M)anual or (A)utomatic: ");
	scanf(" %c",&m_a);
	if (m_a=='M' || m_a=='m') {
	switch(coffee) {
	        case 'W':
	        case 'w':
	        printf("Put water -15 minutes\n");
			printf("Add Sugar -15 minutes\n");
			printf("Mix well -20 minutes\n");
			printf("Add coffee -2 minutes\n");
			printf("Add milk -4 minutes\n");
			printf("Mix well -20 minutes\n");
			sum=15+15+20+2+4+20;
			if (size=='n' || size=='N') {
			printf("total time taken in brewing White coffee is: %.1f", sum);
		    }
		    else {
		    	printf("Time for Double cup size of White coffee is: %.1f", (0.5*sum)+sum);
			}
			break;
			case 'b':
			case 'B':
			printf("Put water -20 minutes\n");
			printf("Add Sugar -20 minutes\n");
			printf("Mix well -25 minutes\n");
			printf("Add coffee -15 minutes\n");
			printf("Mix well -25 minutes\n");
			sum=20+20+25+15+25; 
		    if (size=='n' || size=='N') {
			printf("total time taken in brewing Black coffee is: %.1f minutes", sum);
		    }
		    else {
		    	printf("Time for Double cup size of black coffee is: %.1f minutes", (0.5*sum)+sum);
			}
			break;
			default:
			printf("invalid option");
			}
	}
	else if(m_a=='a' || m_a=='A') {
		switch(coffee) {
			case 'W':
			case 'w':	
			sum=15+15+20+2+4+20;
				if (size=='n' || size=='N') {
			printf("total time taken in brewing White coffee is: %.1f minutes", sum);
		    }
		    else {
		    	printf("Time for Double cup size of White coffee is: %.1f minutes", (0.5*sum)+sum);
		         }
			break;
			case 'b':
			case 'B':
			sum=20+20+25+15+25;
				if (size=='n' || size=='N') {
			printf("total time taken in brewing Black coffee is: %.1f minutes", sum);
		    }
		    else {
		    	printf("Time for Double cup size of Black coffee is: %.1f minutes", (0.5*sum)+sum);
			break;
			default:
			printf("invalid option");
	        }
	    }
	}
	else {
		printf("invalid option");
	}
	return 0;
}


	
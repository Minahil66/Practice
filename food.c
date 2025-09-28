#include<stdio.h>
int main() {
	int type, q, q1,q2,q3, cost;
	char food, food1,food2,food3; 
	printf("\t\t\t\t  XYZ RESTAURANT'S ONLINE ORDER PLACEMENT SERVICE\n\n");
	printf("Select snacks from the following menu:\nB = Burger (200 Rs)\nF = French fries (50 Rs)\nP = Pizza (500 Rs)\nS = sandwitches (100 Rs)\n");
	printf("How many snacks you need to order? ");
	scanf("%d", &type);
	
	switch(type) {
	    	case 1: 
	    	printf("Enter your snack:");
		    scanf(" %c", &food);
	    	printf("\nplease provide quantity: ");
		    scanf("%d", &q);
		    if (food=='B') {cost+=q*200;}
		    else if (food=='F') {cost+=q*50;}
		    else if (food=='P') {cost+=q*500;}
		    else if(food=='S') {cost+=q*100;}
		    else { printf("Invalid option");}
		    break;
		    case 2:
			printf("Enter #1 snack:");
			scanf(" %c", &food);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q);
	    	
	    	if (food=='B') { cost+=q*200;}
		    else if (food=='F') {cost+=q*50;}
		    else if (food=='P') {cost+=q*500;}
		    else if(food=='S') {cost+=q*100;}
		    else { printf("Invalid option");}
	    	
			printf("Enter #2 snack:");
			scanf(" %c", &food1);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q1);
	    	
	    	if (food1=='B') { cost+=q1*200;}
		    else if (food1=='F') {cost+=q1*50;}
		    else if (food1=='P') {cost+=q1*500;}
		    else if(food1=='S') {cost+=q1*100;}
		    else { printf("Invalid option");}
			break;
			
			case 3:
			printf("Enter #1 snack:");
			scanf(" %c", &food);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q);
	    	
	    	if (food=='B') { cost+=q*200;}
		    else if (food=='F') {cost+=q*50;}
		    else if (food=='P') {cost+=q*500;}
		    else if(food=='S') {cost+=q*100;}
		    else { printf("Invalid option");}
	    	
			printf("Enter #2 snack:");
			scanf(" %c", &food1);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q1);
	    	
	    	if (food1=='B') { cost+=q1*200;}
		    else if (food1=='F') {cost+=q1*50;}
		    else if (food1=='P') {cost+=q1*500;}
		    else if(food1=='S') {cost+=q1*100;}
		    else { printf("Invalid option");}
	    	
	    	printf("Enter #3 snack:");
			scanf(" %c", &food2);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q2);
	    	
	    	if (food2=='B') { cost+=q2*200;}
		    else if (food2=='F') {cost+=q2*50;}
		    else if (food2=='P') {cost+=q2*500;}
		    else if(food2=='S') {cost+=q2*100;}
		    else { printf("Invalid option");}
		    
	    	break;
	    	case 4:
	    	printf("Enter #1 snack:");
			scanf(" %c", &food);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q);
	    	
	    	if (food=='B') { cost+=q*200;}
		    else if (food=='F') {cost+=q*50;}
		    else if (food=='P') {cost+=q*500;}
		    else if(food=='S') {cost+=q*100;}
		    else { printf("Invalid option");}
	    	
			printf("Enter #2 snack:");
			scanf(" %c", &food1);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q1);
	    	
	    	if (food1=='B') { cost+=q1*200;}
		    else if (food1=='F') {cost+=q1*50;}
		    else if (food1=='P') {cost+=q1*500;}
		    else if(food1=='S') {cost+=q1*100;}
		    else { printf("Invalid option");}
	    	
	    	printf("Enter #3 snack:");
			scanf(" %c", &food2);
			printf("\nplease provide quantity: ");
	    	scanf("%d", &q2);
	    	
	    	if (food2=='B') { cost+=q2*200;}
		    else if (food2=='F') {cost+=q2*50;}
		    else if (food2=='P') {cost+=q2*500;}
		    else if(food2=='S') {cost+=q2*100;}
		    else { printf("Invalid option");}
	    	
	    	printf("Enter #4 snack: ");
			scanf(" %c", &food3);
			printf("\nplease provide quantity:");
	    	scanf("%d", &q3);
	    	
	    	if (food3=='B') { cost+=q3*200;}
		    else if (food3=='F') {cost+=q3*50;}
		    else if (food3=='P') {cost+=q3*500;}
		    else if(food3=='S') {cost+=q3*100;}
		    else { printf("Invalid option");}
		    
	    	break;
	    	default:
	    		printf("Invalid input!\n");
	    		return 1;
	}
	        printf("--------------------------------\n");
	        printf("Your order is complete!\n");
	        printf("The total cost of your order is: %d\n", cost);
	        printf("Enjoy your meal!");
	
}
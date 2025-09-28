#include<stdio.h>
int main() {
	int nts, fsc;
	float percentage1, percentage2;
	printf("Enter your NTS marks: ");
	scanf("%d", &nts);
	printf("Enter your F.Sc marks: ");
	scanf("%d", &fsc);
	percentage1=nts;
	percentage2=(fsc/1100.0)*100;
	if (percentage2>70 && percentage1>=70) {
		printf("Eligible for Oxford - IT department");
	}
	else if (percentage2>70 && percentage1>=60) {
		printf("ELigible for Oxford - Electronics department");
	}
	else if (percentage2>70 && percentage1>=50) {
		printf("Eligible for Oxford - Telecommunication department");
	}
	else if (percentage2>=60 && percentage2<=70 && percentage1>=50) {
		printf("ELigible for MIT - IT department");
	}
   else if (percentage2>=50 && percentage2<=59 && percentage1>=50) {
		printf("Eligible for MIT - Chemical department");
	}
	else if (percentage2>40 && percentage2 <50 && percentage1>=50) {
		printf("Eligible for MIT - Computer department");
	}
	else {
		printf("not selected in any universities-");
	}
}
#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("Type a number1 and number2: \n");
	scanf("%d %d", &n1,&n2);

	if (n1>n2){
		printf("num1 is greater than num2");
		printf("\n%d",(n1-n2));
	} else {
		printf("num2 is greater than num1");
		printf("\n%d",(n2-n1));
	}
}

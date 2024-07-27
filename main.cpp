#include<stdio.h>
#include "calc.h"

int main() {
	int num1 = 15;
	int num2 = 12;
	printf("%-5d + %5d = %5d\n", num1, num2, add(num1, num2));
	return 0;
}


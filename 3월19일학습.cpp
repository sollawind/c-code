#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,q,w,c;
	
	printf("자연수를 쓰시오.\n");
	scanf("%d",&a);
	q = a%7;
	printf("%d",q);
	return 0;
}

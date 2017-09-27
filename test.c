#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int mul7(int x) ;

int main(void)
{
	printf("The address of main is %p\n", &main);
	int num ;
	int a = 1;
	int b = 2;
	int c = 3;
	printf ("Address of A is %lld, B is %lld, and C is %lld\n", &a, &b, &c);
	printf("Enter a number \n");
	scanf ("%d", &num);
	printf("The address of num is %p\n", &num);
	
	printf("%d times 7 is : %d\n", num, mul7(num) );
	return EXIT_SUCCESS;
}

int mul7(int x)
{
	printf("The address of mul7 is %p\n", &mul7);
	printf("The address of local x is %p\n", &x);
	assert(x >= 0);
	return x * 7 ;
}

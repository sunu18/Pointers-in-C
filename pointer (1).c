#include<stdio.h>
int main()
{
	int a=4;
	int *ap=&a;
	printf("%d\n","value of a variable is",a);
    printf("%d\n","address of a variable",&a);
    printf("%d\n","value of a pointer variable is",ap);
    printf("%d\n","address of a pointer variable is",&ap);
    printf("%d\n","value value at address indicated by pointer variable is",*ap);
	return 0;
}

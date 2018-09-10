#include <stdio.h>
#include <stdlib.h>

int main(){
	int ni, i;
	float nf;
	char nc;
	double nd;
	printf("N declarado com tipo int: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d \n",&ni+i );
	}
	printf("N declarado com tipo char: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d \n",&nc+i );
	}
	printf("N declarado com tipo float: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d \n",&nf+i );
	}
	printf("N declarado com tipo double: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d \n",&nd+i );
	}
return 0;
}
#include <stdio.h>		

int
main(void)
{
	char myStr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

	int a = 5;

	//putchar(55);

	putchar(myStr[2]);
	putchar('\n');

	printf("var a of type int with value %d is at memory address %p of %d bytes\n", a, &a, sizeof(int));

	printf("var myStr[3] of type char with value %c is at memory address %p of %d bytes\n", myStr[3], &(myStr[3]), sizeof(char));
//  1  1  1  1  1  1  1  1 
//++++++++++++++++++++++++++++ 1+2+4+8+16+32+64+128=254
//  0  1  2  3  4  5  6  7 
//2^ 2^ 2^ 2^ 2^ 2^ 2^ 2^

	return 0;
}


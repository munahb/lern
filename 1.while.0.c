//stdio.h = std. input output header file

#include <stdio.h>

//return type int - when the fxn exits, it returns an integer
//function named main that accepts no parameters i.e void
int 
main(void)
{ // function body STARTS here	
	
	//sum is a variable that is declared to be of type integer
	int sum;
	//sum is initialized with value 0
	sum = 0;		
	int a = 5;
	int i = 0;
	//inside round brackets mean that the expression will be evaluated as true or false
	//while means that evaluated expression if true will enter while loop
	//if i >=10 will not enter while loop as expression i<10 evaluates to false as 10 is not less than 10

	while (i<4) 
	{
		//i = 5;
		i = i + 1;
	
	}
	/*
	for (int i = 0; i <10; i = i+2)
	{
		sum+= i;
		printf("my val is %d\n", i);
	}
	*/

	//program ends as a success, 0 means success. ANy number that is not zero 
	return 0;
	
}
// function body ENDS here

//

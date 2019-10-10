#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumtwo( int a, int b)
{
	int output;
	output = a + b;
	return output;
}

int square( int n )
{
	return (n*n);
}

int get_max( int a, int b )
{
	if( a > b ) return(a);
	else return(b);
}

int main(int argc, char *argv[]) 
{
	int a, b;
	int output1;
	a = 2;
	b = 5;	

	output1 = sumtwo(a,b);
	printf("sumtwo = %d\n", output1);
	
	printf("square = %d\n", square(b));
	
	printf("%d is bigger\n", get_max(a,b));
	
	return 0;
}

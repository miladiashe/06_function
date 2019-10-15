#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int a)
{ 
	int res = 1;
	int i;
	for (i=1; i!=a; i++)
		res = res*i;
	return res;
}



int calcombination(int n, int r)
{
	int u, d;
	u = factorial(n);
	d = factorial(n-r)*factorial(r);
	
	return(u/d);
}


int main(int argc, char *argv[]) 
{
	int c, n, r;
	
	printf("C(n,r) function \n");
	printf("insert n = \n");
	scanf("%d", &n);
	printf("insert r = \n");
	scanf("%d", &r);
	
	c = calcombination(n, r);
	
	printf("%d %d\n", n,r);
	printf("C= %d", c);
	
	
	

return 0;

}


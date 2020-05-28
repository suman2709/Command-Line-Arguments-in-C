//Command Line Arguments in C
/*

The arguments passed from command line are called command line arguments. These arguments are handled by main() function.
To support command line argument, you need to change the structure of main() function as given below.

int main(int argc, char *argv[] ) 
 
Here, argc counts the number of arguments. It counts the file name as the first argument.
The argv[] contains the total number of arguments. The first argument is the file name always.

*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int n,i,sum=0;
	n=atoi(argv[1]);//atoi() - The C library function int atoi(const char *str) converts the string argument str to an integer (type int).
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect Number");
	}
	return 0;
}
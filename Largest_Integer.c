//Find the largest integers among three using command line argument.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	a>b?(a>c?printf("%d",a):printf("%d",c)):(b>c?printf("%d",b):printf("%d",c));
	return 0;
}
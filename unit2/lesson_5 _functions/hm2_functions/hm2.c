/*
 * hm2.c
 *
 *  Created on: Dec 1, 2024
 *      Author: 01226
 */
#include <stdio.h>

int factorial (int a){
	int x;
	if (a != 1)
	{
		x = a*factorial(a-1);
		return x;
	}else
	{
		return 1;
	}
}

int main (){
	int c;
	int z;
	printf("enter the number ");
	fflush(stdout);
	scanf("%d",&c);
	z = factorial(c);
	printf("the factorial of the number %d is %d",c,z);
}

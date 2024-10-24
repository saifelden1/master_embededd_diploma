/*
 * ex7.c
 *
 *  Created on: Oct 15, 2024
 *      Author: 01226
 */

#include <Stdio.h>

int main(){
	int a,b;

	printf("add the first number: \n");
	fflush(stdout);
	scanf("%d",&a);

	printf("add the secound num: \n");
	fflush(stdout);
	scanf("%d",&b);


	a=a+b;
	b=a-b;
	a=a-b;

	 printf("%d %d",a,b);


	return 0;
}

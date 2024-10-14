/*
 * ex5.c
 *
 *  Created on: Oct 15, 2024
 *      Author: 01226
 */

#include <stdio.h>

int main(){
	char a=0;
	printf("enter a character: ");
	fflush(stdout);
	scanf("%c",&a);
	printf("ascii value of %c = %d",a,a);

	return 0;
}

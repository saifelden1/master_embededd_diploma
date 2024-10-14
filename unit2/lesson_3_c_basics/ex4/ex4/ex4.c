/*
 * ex4.c
 *
 *  Created on: Oct 15, 2024
 *      Author: 01226
 */
#include <stdio.h>
float x=0,y=0;
int main(){
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("sum:",x*y);

	return 0;
}


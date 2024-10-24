/*
 * ex2_1.c
 *
 *  Created on: Oct 15, 2024
 *      Author: 01226
 */

#include <stdio.h>
char a;
int main(){

	printf("enter the letter: ");
	fflush(stdout);
	scanf("%c",&a);

	if( (a=='a') || (a=='o') || (a=='e') || (a=='i') || (a=='u') ){
		printf("the letter is %c voule",a);
		fflush(stdout);

	}else{
		printf("the letter is not voule");
		fflush(stdout);
	}




	return 0;
}

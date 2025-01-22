/*
 * main.c
 *
 *  Created on: Oct 26, 2024
 *      Author: 01226
 */
#include <stdio.h>

int main(){
	char str[]="the website is awosme";
	int size;
	int repet=0;
	char var;

	printf("enter the letter: ");
	fflush (stdout);
	scanf("%c",&var);


	size= sizeof(str) / sizeof(str[0]);

	for(int i=0 ; i<size ; i++)
	{
		if(str[i]==var)
		repet++;
	}

	printf("the number of repertations is %d",repet);


	return 0;
}


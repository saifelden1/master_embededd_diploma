/*
 * main.c
 *
 *  Created on: Oct 26, 2024
 *      Author: 01226
 */
#include<stdio.h>

int main(){
	char str [50]={};
	char letter;
	int freq = 0;


	printf("enter the string: ");
	fflush(stdout);
    gets(str);

    printf("enter the letter needed: ");
    fflush(stdout);
    scanf("%c",&letter);

    for(int i=0 ; i<50 ; i++)
    	{
    	if(str[i]==letter)
    		freq++;
    	}

    printf("the letter apperd %d",freq);





 return 0;
}



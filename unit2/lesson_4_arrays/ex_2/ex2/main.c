/*
 * main.c
 *
 *  Created on: Oct 24, 2024
 *      Author: 01226
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

	int n=0;
	float sum =0;


	printf("enter the number of elements : ");
	fflush(stdout);
	scanf("%d",&n);


	float *arr = (float*) malloc ( n * sizeof(float) );

	for(int i=0 ; i<n ; i++)

	{
		printf("enter the %d number :",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);

	}

	for(int i=0 ; i<n ; i++)

		{
			sum+=arr[i];


		}

			printf("the avarge is %.2f : ",sum / n);
			fflush(stdout);









	return 0;
}


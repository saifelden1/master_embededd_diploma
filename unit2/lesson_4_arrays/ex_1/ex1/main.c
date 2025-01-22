/*
 * main.c
 *
 *  Created on: Oct 24, 2024
 *      Author: saif
 */
#include <stdio.h>

int main(){
	float matrix_1[2][2];
	float matrix_2[2][2];
	float matrix_3[2][2];


	printf("matrix 1 \n");
	fflush(stdout);

	for(int i=0 ; i<2 ; i++)
	{
		for(int x=0 ; x<2 ; x++)
		{
			printf("enter the element [%d][%d] \n",i,x);
			fflush(stdout);
			scanf("%f",&matrix_1[i][x]);
		}

	}

	printf("matrix 2 \n");
	fflush(stdout);

	for(int i=0 ; i<2 ; i++)
	{
		for(int x=0 ; x<2 ; x++)
		{
			printf("enter the element [%d][%d] \n",i,x);
			fflush(stdout);
			scanf("%f",&matrix_2[i][x]);
		}

	}


	for(int i=0 ; i<2 ; i++)
		{
			for(int x=0 ; x<2 ; x++)
			{
				matrix_3[i][x]=matrix_2[i][x]+matrix_1[i][x];
			}

		}


	printf("sum of matrix \n");
	printf("%.2f \t %.2f \n",matrix_3[0][0],matrix_3[0][1]);
	printf("%.2f \t %.2f \n",matrix_3[1][0],matrix_3[1][1]);










	return 0;
}


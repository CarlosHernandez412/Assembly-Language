/*
*
*
*Compile with:
*gcc -g -Wall avgNoZero.c avgNoZeroMain.c -o avgNoZero
*
*
* @author		Carlos Hernandez
* Course:		COMP B13
* Created on:	Jan 21,2020
* Source File: 	avgNoZeroMain.c
*/
#include <stdio.h>
#define SIZE 1000

double avgNoZero (double array [], int size);

int main (int argc, char **argv) {
	double array [SIZE];
	double number;
	double average; 
	int count = 0;
	
	while(scanf ("%lf", &number) == 1 && count < SIZE) {
		array [count++] = number;
	}
	average = avgNoZero(array, count);
	printf ("%f\n", average);
	return 0;
}
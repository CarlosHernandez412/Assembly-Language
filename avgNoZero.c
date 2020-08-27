/*
*This file contains the function avgNoZero
*
*Compile with:
*gcc -g -Wall avgNoZeroMain.c -o avgNoZero
*
*
* @author		Carlos Hernandez
* Course:		COMP B13
* Created on:	Jan 21,2020
* Source File: 	avgNoZeroMain.c
*/
 
double avgNoZero (double array [], int size){
	double sum = 0;
	int count = 0;
	int i;
	for (i=0; i < size; ++i)
		if (array [i] !=0)  {
			count++
			
			sum += array [i];
	}
		
	return sum/count;
}

/*
Program requirements:
Enter 5 tempretures in celcius and manupulate them to farenheit and kelvin

Author: Liam McCormick
Date: 23-02-17
OS: Gentoo
Kernel: Linux 4.10
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NUMNO 5		//number of tempretures in the array temps_celcius

//prototypes
float convert_temp(float*);	//convert to farenheit and calculate average
float in_Kelvin(float);	//convert from celcius to kelvin

int main()
{
	//variables
	float temps_celcius[NUMNO];	//hold 5 temps
	register int i;			//for loops

	//enter data
	printf("Enter 5 temperatures\n");
	for(i=0; i<NUMNO; i++)
	{
		scanf("%f",temps_celcius+i);

	}//end for


}//end main

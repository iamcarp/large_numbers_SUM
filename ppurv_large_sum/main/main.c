/*
 * main.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Luka Karan RA50/2016
 */


#include "sum.h"

#include<ctype.h>


//static int_least16_t pomeraj;

#define ARG_NUM 4

#define EXIT_SUCCESS  0
#define EXIT_FAILURE -1




int main(){
	const char number1[80];
	const char number2[80];
	int_least8_t rest[80]={};
	int_least8_t number1Lenght;
	int_least8_t number2Lenght;
	int_least8_t i;
	int_least8_t j;
	int_least8_t m;
	int_least8_t maxLenght;
	int_least8_t sum;

	printf("Enter Firestt Number:");
	scanf("%s", &number1);
	printf("\nEnter Second Number:");
	scanf("%s", &number2);

	number1Lenght = strlen(number1);
	number2Lenght = strlen(number2);

	maxLenght = number1Lenght;
	if(number1Lenght<number2Lenght)
	{
		maxLenght = number2Lenght;
	}

	m=0;

	for(i=0; i< maxLenght; i++){
	if(number1Lenght==number2Lenght || (i < number1Lenght && i < number2Lenght))
	{
		sum = m+chrtoint(number1[i])+chrtoint(number2[i]);
	}
	else if(i >=number1Lenght)
	{
		sum = m+chrtoint(number2[i]);
	}
	else if(i >=number2Lenght)
	{
		sum = m+chrtoint(number1[i]);
	}

	rest[i] = sum%10;
	m = sum/10;
	}

	if(m){
	rest[i]=m;
	i++;
	}

	printf("\nResult: ");
	for(j=0; j < i; j++){
	printf("%d", rest[i-j-1]);
	}
	return 0;
}
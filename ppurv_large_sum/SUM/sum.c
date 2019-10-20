/*
 * sum.c
 *
 *  Created on: Oct 18, 2019
 *      Author: rtrk
 */
#include "sum.h"

char *stringReverese(char *str)
{
      char *begin, *end;

      if (! str || ! *str)
      {
            return str;
      }

      for (begin = str, end = str + strlen(str) - 1; end > begin; ++begin, --end)
      {
            *begin ^= *end;
            *end ^= *begin;
            *begin ^= *end;
      }

      return str;
}

int chrtoint(char symbol)
{
	int_least8_t i;
	for (i = 48; i<=57; i++)
	{
		if (toascii(i)==symbol)
			{
			return i-48;
			}
	}
	return 0;
}


void summNumbers( char num1[], char num2[]){

	int_least8_t result[80];
	int_least8_t lenNum1;
	int_least8_t lenNum2;
	int_least8_t lenMax;
	int_least8_t sum;
	int_least8_t i;
	int_least8_t j;
	int_least8_t carry;

	lenNum1 = strlen(num1);
	lenNum2 = strlen(num2);

	stringReverese(num1);
	stringReverese(num2);

	lenMax = lenNum1;
	if(lenNum1<lenNum2)
	{
		lenMax = lenNum2;
	}

	carry=0;

	for(i=0; i< lenMax; i++)
	{
		if(lenNum1==lenNum2 || (i < lenNum1 && i < lenNum2))
		{
			sum = carry+chrtoint(num1[i])+chrtoint(num2[i]);
		}
		else if(i >=lenNum1)
		{
			sum = carry+chrtoint(num2[i]);
		}
		else if(i >=lenNum2)
		{
			sum = carry+chrtoint(num1[i]);
		}

		result[i] = sum%10;
		carry = sum/10;
	}

	if(carry)
	{
		result[i]=carry;
		i++;
	}

	printf("\nResult: ");

	for(j=0; j < i; j++)
	{
		printf("%"PRIdLEAST8, result[i-j-1]);
	}

}

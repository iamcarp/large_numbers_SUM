/*
 * sum.h
 *
 *  Created on: Oct 18, 2019
 *      Author: rtrk
 */

#ifndef SUM_H_
#define SUM_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
#include <limits.h>

#define DECIMAL 10
int chrtoint(char a);
#define ERROR_NOT_NUM        -1
#define ERROR_OUT_OF_RANGE   -2

typedef int_least8_t bool;

bool isDigit(int_least8_t c);

int_least64_t stringToNumber(const int_least8_t* str, const int_least8_t** err_ptr, int_least8_t* err_code);
void addNums(const int_least8_t* ptr_a, const int_least8_t* ptr_b);



//void pushback(int data);
char* SUM();

#endif /* SUM_H_ */
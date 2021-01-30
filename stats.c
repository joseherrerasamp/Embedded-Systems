/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Simple statistical analysis on a dataset
 *
 * This file contains the complete code needed to perform
 * a simple statistical analysis on a dataset. This analysis includes
 * finding the maximum, minimum, mean and median values of the dataset.
 * Also, the data will be sorted from the largest to the smallest
 * value.
 *
 * @author Jose Maria Herrera Sampablo
 * @date 30/01/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


int find_minimum(int *ptr, int size){

	return ();
}

int find_maximum(int *ptr, int size){
	
	return ();
}

int find_mean(int *ptr, int size){

	return ();
}

int find_median(int *ptr, int size){

	return ();
}

void sort_array(int *ptr, int size){


}

void print_array(int *ptr, int size){

	
}

void print_statistics(int mean, int median, int min, int max, int dataset[]){


}

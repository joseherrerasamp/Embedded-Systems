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
#include<math.h>    // Math library added to use round function
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Initial dataset:\n");
  print_array(&test[0], SIZE);
  print_statistics(&test[0], SIZE);

}


int find_minimum(unsigned char *ptr, int size){

  int i, min;

  min = *ptr;
  ptr++;

  for(i=1; i < size; i++){
    if(*ptr < min){
      min = *ptr;
    }
    ptr++;
  }

	return (min);
}


int find_maximum(unsigned char *ptr, int size){
	
	int i, max;

  max = *ptr;
  ptr++;

  for(i=1; i < size; i++){
    if(*ptr > max){
      max = *ptr;
    }
    ptr++;
  }

  return (max);
}


int find_mean(unsigned char *ptr, int size){

  int i;
  double sum = 0.;

  for(i=0; i < size; i++){
    sum += *ptr;
    ptr++;
  }

	return ((int)(round(sum / size)));
}


int find_median(unsigned char *ptr, int size){

  int med;

  if(size % 2 == 0){
    med = (*(ptr + size / 2) + *(ptr + (size / 2 + 1))) / 2.;
    med = (int)(round(med));
  }else{
    med = *(ptr + (size + 1) / 2);
  }
	
  return (med);
}


void sort_array(unsigned char *ptr, int size){

  int i, j, tmp;

  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      if(*(ptr + j) > *(ptr + i)){
        tmp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = tmp;
      }
    }
  }
}


void print_array(unsigned char *ptr, int size){

  int i;

  for(i=0; i < size; i++){
    if((i+1) % 5 != 0){
      printf("%d\t", *ptr);
    }
    else {
      printf("%d\n", *ptr);
    }

    ptr++;
  }
	
}


void print_statistics(unsigned char *ptr, int size){

  printf("Sorted dataset in descending order:\n");
  sort_array(ptr, size);
  print_array(ptr, size);
  printf("Minimum value stored in the dataset: %d\n", find_minimum(ptr, size));
  printf("Maximum value stored in the dataset: %d\n", find_maximum(ptr, size));
  printf("Mean value of the dataset: %d\n", find_mean(ptr, size));
  printf("Median value of the dataset: %d\n", find_median(ptr, size));

}

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
 * @file stats.h 
 * @brief Simple statistical analysis on a dataset
 *
 * This header file contains all the functions needed to perform
 * a simple statistical analysis on a dataset. This analysis includes
 * finding the maximum, minimum, mean and median values of the dataset.
 * Also, the data will be sorted from the largest to the smallest
 * value. 
 *  
 * @author Jose María Herrera Sampablo
 * @date 30/01/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Find the MINIMUM value of a dataset
 *
 * Given a data set of unsigned char data, this
 * function returns the minimum value found
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return Minimum value found 
 */

int find_minimum(unsigned char *ptr, int size);

/**
 * @brief Find the MAXIMUM value of a dataset
 *
 * Given a data set of unsigned char data, this
 * function returns the maximum value found
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return Maximum value found 
 */

int find_maximum(unsigned char *ptr, int size);

/**
 * @brief Compute the MEAN value of a dataset
 *
 * Given a data set of unsigned char data, this
 * function computes the mean value of the data
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return Mean value of the dataset
 */

int find_mean(unsigned char *ptr, int size);

/**
 * @brief Compute the MEDIAN value of a dataset
 *
 * Given a data set of unsigned char data, this
 * function computes the median value of the data
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return Median value of the dataset
 */

int find_median(unsigned char *ptr, int size);

/**
 * @brief SORT a dataset from largest to smallest
 *
 * Given a data set of unsigned char data, this
 * function sorts the original data from largest
 * to smallest
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return void
 */

void sort_array(unsigned char *ptr, int size);

/**
 * @brief Print elements of a dataset
 *
 * Given a data set of unsigned char data, this
 * function prints all the data to the screen
 *
 * @param ptr Pointer to data array
 * @param size Const value of the data array
 *
 * @return void
 */

void print_array(unsigned char *ptr, int size);

/**
 * @brief Print statistics
 *
 * This functions prints to the screen all the
 * statistical analytics computed in a nicely 
 * formatted way
 *
 * @param mean Integer value computed for mean
 * @param median Integer value coputed for median
 * @para min Integer value found for minimum 
 * @para max Integer value found for maximum
 * @para sort_data Array of data already sorted 
 *
 * @return void
 */

void print_statistics(int mean, int median, int min, int max, int dataset[]);


#endif /* __STATS_H__ */

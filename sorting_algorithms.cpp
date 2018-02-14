/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int* array, int len)
{
 int last_unsorted_element = len-1;
 bool elements_swapped ;
  do {
    elements_swapped = false;
    for (int i = 0; i < last_unsorted_element; i++) {
      if (array[i] > array[i+1]) {
      int swap = array[i];
      array[i] = array[i+1];
      array[i+1] = swap;
      elements_swapped = true;
    }
  }
  last_unsorted_element--;
} while(elements_swapped);
}

void insertion_sort(int* array, int len)
{
  int key;
  int j;
  for (int i = 1; i < len; i++) {
   key = array[i];
   j = i-1;
   while (j >= 0 && array[j] > key) {
      array[j+1] = array[j];
      j = j - 1;
    }
    array[j+1] = key;
 }
}

int* init_random(int* array, int len)
{
  for (int i = 0; i < len; i++) {
      array[i] = rand() % 1025;
  }
    return array;
}

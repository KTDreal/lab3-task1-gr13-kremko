//author: 
//Timofey Kremko
//
/* main.c */
//This file contains the main function, which calls the sortArrayByOnes function that sorts the randomly
//generated array of the given size from the command line parameteres by the number of ones in element's
//binary representation.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interface.h"

int main (int argc, char* argv[])
{
	if(argc < 2)
  {
    printf("Usage: %s <number>\n", argv[0]);
    return 1;
  }
  srand(time(NULL));
  
  int n = atoi(argv[1]);
  int array[n];
  for (int i = 0; i < n; i++) 
  {
    array[i] = rand()%1000 + 1;
  }
  printf( "Before sorting:\n" );
  for (int i = 0; i < n; i++)
  {
    printf( "%d ", array[i] );
  }
  
  int *resultArray = sortArrayByOnes(array, n);


  printf("\nAfter sorting:\n");
  
  for (int i = 0; i < n; i++) {
    printf("%d ", resultArray[i]);
  }
  
  return 0;
}

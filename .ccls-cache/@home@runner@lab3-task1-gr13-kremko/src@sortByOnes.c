//author: 
//Timofey Kremko
//
//CountOnes function counts the number of ones in a binary representation of number.
//sortArrayByOnes function sorts the array by the number of ones in element's binary representation.

#include "interface.h"
#include <stdlib.h>

int countOnes(int number)
{
  int count = 0;
  int temp = 0;
  while (number>0)
  {
    temp = number % 2;
    if(temp == 1)
    {
      count++;
    }
    number = number / 2;
  }
  return count;
}

int* sortArrayByOnes(int arr[], int n)
{
  int* array = malloc(n);
  for (int i = 0; i < n; i++)
  {
    array[i] = arr[i];
  }
  int j = 0;
  int temp = 0;
  for (int i = 1; i < n; i++)
  {
      j = i - 1;
      temp = 0;
      if (countOnes(array[i]) < countOnes(array[j]))
      {
          j = i;
          while (j > 0 && countOnes(array[j]) < countOnes(array[j-1]))
          {
              temp = array[j];
              array[j] = array[j-1];
              array[j-1] = temp;
              j--;
          }
      }
  }
  return array;
}
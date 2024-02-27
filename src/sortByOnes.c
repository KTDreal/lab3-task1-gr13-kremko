//CountOnes function counts the number of ones in a binary representation of number.
//sortArrayByOnes function sorts the array by the number of ones in element's binary representation.

#include "interface.h"

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

void sortArrayByOnes(int array[])
{
  //TODO: Implement this function
}
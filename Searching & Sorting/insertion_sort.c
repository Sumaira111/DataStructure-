#include <stdio.h>
void insertion_sort(int arr[], int size)
{
  for(int i = 0; i < size; i++) //Loop for pass
    {
      printf("Working on the pass:-%d\n", i+1);
      int key = arr[i];
      int j = i-1;
    while( j >= 0 && arr[j] > key)//Loop for each comparision
    {
      arr[j+1] = arr[j];
      j--;
    }
       arr[j+1] = key;
    }
}

void print_array(int arr[], int size)
{
  for(int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");
}

int main()
{
  int arr[] = { 2, 3, 6, 7, 8, 9, 0, 1, 5, 4, 10};
  // int arr[] = {8, 0, 7, 1, 3};
  int size = sizeof arr/ sizeof arr[0];

  printf("Array befor sort:-");
  print_array(arr, size);

  insertion_sort(arr, size);

  printf("Array after sort:- ");
  print_array(arr, size);

  return 0;
}


// TIME COMPLEXITY:- worst case:- O(n square).
//                   Best case :- O(n) when array is already sorted.
// It is  a Stable algorithm
// it is  an adaptive algorithm.

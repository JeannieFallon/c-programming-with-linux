// Within this program, we will pass an array with 6 integers to a function, have the 
// function swap the first and last integer, the second and the second to last integer, 
// the third and the third to last integer.

// The function is called reverseArray and doesn't return anything (void). It should 
// take one parameter, representing the array of integers. 

// The main function first reads 6 integers from the input, and assigns them to the 
// array. The main function then calls reverseArray, passing the array as an argument.

// The main function then prints the reversed array.

#include <stdio.h>

void reverseArray(int *);

int main(void) {
  int arr[6];
  int i;
  
  for (i=0; i<6; i++) {
    scanf("%d", &arr[i]);
  }
  
  reverseArray(arr);
  
  for (i=0; i<6; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void reverseArray(int * ptr) {
  int swap, i;
  
  // hardcoded for array with fixed length of 6
  for (i=0; i<3; i++) {
        swap =  *(ptr + i);
        *(ptr + i) = *(ptr + 5 - i);
        *(ptr + 5 - i) = swap;
  }
}
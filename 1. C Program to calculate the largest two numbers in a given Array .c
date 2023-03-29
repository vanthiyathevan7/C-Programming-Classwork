#include<stdio.h>

void largestTwoNumbers(int arr[], int n) {
   int i,largest, secondLargest;

 
  if (arr[0] > arr[1]) {
      largest = arr[0];
      secondLargest = arr[1];
   }
   else {
      largest = arr[1];
      secondLargest = arr[0];
   }

   
   for(i = 2; i < n; i++) {
      if (arr[i] > largest) {
         secondLargest = largest;
         largest = arr[i];
      }
      else if (arr[i] > secondLargest) {
         secondLargest = arr[i];
      }
   }

   printf("The largest two numbers are: %d and %d\n", largest, secondLargest);
}

int main() {
   int i,n, arr[100];

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements in the array: ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   largestTwoNumbers(arr, n);

   return 0;
}

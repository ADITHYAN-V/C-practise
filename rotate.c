#include <stdio.h>
int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//array definition
   int i, n, len, j;
   n=15;//no of lshift
   len=10;//lenght of array
   n = n % len;
   int temp=0;
   for (i = 0; i < n; i++) {//no of rotation loop
      int x = arr[0];
      for (j = 0; j < len; j++) { //shift loop
         temp=arr[j];
         arr[j] = arr[j + 1];
         arr[j+1]=temp;
      }
      arr[len - 1] = x;
   }
   for (i = 0; i < len; i++) {
	printf("%d\t",arr[i]);
   }

}

/**
Write a function to return a sorted array 
after merging two unsorted
arrays, the parameters will be two integer pointers
for referencing arrays and two 
int variable, the length of arrays

**/



#include <stdio.h>
#include<stdlib.h>		//This header file was not given in the question. I manually added it so as to ensure efficient working of mallic()

//self implemented function(this function was not provided in the given code in question)
void bubbleSort(int arr[], int n)
{
   int i, j,temp;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1]){
              
              //swap arr[j] & arr[j+1]
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
}

 

int* sortedMerge(int *a, int *b, int n, int m)
{
    //write your code here
    
    int *res;
    res = (int *)malloc(sizeof(int) * (m+n));
    
    // Concatenate two arrays
    int i = 0, j = 0, k = 0;
    while (i < n) {
        res[k] = a[i];
        i += 1;
        k += 1;
    }
    while (j < m) {
        res[k] = b[j];
        j += 1;
        k += 1;
    }
 
    // sorting the res array
    bubbleSort(res, n+m);
    return res;
}
 
// Driver code
int main()
{
    int a[] = { 10, 5, 15 };
    int b[] = { 20, 3, 2, 12 };
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
 
    // Final merge list
    int *res;
    res = sortedMerge(a, b, n, m);
 
    printf("Sorted merged list :");
    for (int i = 0; i < n + m; i++)
        printf("%d ", res[i]);
    
 
    return 0;
}
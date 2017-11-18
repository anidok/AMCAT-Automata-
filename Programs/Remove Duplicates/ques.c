/**
Write a function to return a string after removing all duplicates characters from
the string passed to the function as parameter.

sample input:
the light on the horizon was brighter yesterday

sample output:
the lig on  rz was b yd


**/



#include <stdio.h>

char *removeDuplicates(char *str)
{
    //write your code here    
    
}
 
// Driver code
int main()
{
   char str[1000], *res;
   printf("Enter the string : ");
   scanf("%[^\n]s", str);
   res = removeDuplicates(str);
   printf("\nAfter removing duplicate characters: %s", res);
    
 
    return 0;
}
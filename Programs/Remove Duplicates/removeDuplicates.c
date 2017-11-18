/**
Write a function to return a string after removing all duplicates characters from
the string passed to the function as parameter.

sample input:
the light on the horizon was brighter yesterday

sample output:
the lig on  rz was b yd


**/



#include <stdio.h>
#include<string.h>
#include<stdlib.h>


//we are assuming that all the input characters are lowercase.
char *removeDuplicates(char *str)
{
    //write your code here
    
    char *str1;
    int i,n,k,index,count[26];     //there are 26 characters. count will keep trace of how many 
                        //times each alphabet has occured. 'a' will be tracked by index 0,
                        //'b' by index 1 and so on.

     //initialise all the elements with 0, as for now we have mot encountered any character.                        
    for(i=0; i<26; i++){
        count[i]=0;        
    }
    
    n= strlen(str);
    str1 = (char *)malloc(sizeof(char) * n);
    
    k=0;
    for(i=0; str[i]!='\0'; i++){
        
        if(str[i]>= 'a' && str[i]<= 'z'){
            index = str[i] - 'a';       //for example, index for 'e' should be 4. here str[i] = 'e'. so (e-a)=(101-97)=4.
        
            if(count[index]==0){
                str1[k++] = str[i];
                count[index]++;     //increment the count.
            }
        }
        else
            str1[k++] = str[i];
    }
    str1[k]= '\0';
    return str1;
    
    
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
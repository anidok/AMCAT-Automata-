/**
Write a function to return a string after removing all vowels from a string passed
to the function as parameter.

**/



#include <stdio.h>
#include<string.h>      //self implemented
#include<stdlib.h>      //self implemented

//Self implemented function(returns 1 if vowel and 0 if consonant)
int checkVowel(char ch){
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
        return 1;
    else
        return 0;
}

char *removeVowels(char *str)
{
    //write your code here
    
    int n,i,k;
    n = strlen(str);    //calculate length of the string
    char *str1;         //this will be the new string where contents will be stored.
    
    str1 = (char *)malloc(sizeof(char) * n);
    
    k=0;        //k will be used to keep track of index of new string where character is to be inserted.
    for(i=0; str[i]!='\0'; i++){
        
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ){
            if(checkVowel(str[i]) ==0)      //if character is a consonant
                str1[k++] = str[i];         //copy the consonant into new string and increment k.
        }
        else
            str1[k++] =  str[i];
    }
    
    
    str1[k] = '\0';         //append null to the last index to make it a string, otherwise it won't behave as string.
    return str1;        //finally return the resultant string.
}
 
// Driver code
int main()
{
   char str[1000], *res;
   printf("Enter the string : ");
   scanf("%[^\n]s", str);
   res = removeVowels(str);
   printf("\nAfter removing vowels: %s", res);
    
 
    return 0;
}
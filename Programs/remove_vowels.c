#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int isVowel(char ch)
{
   if ( ch >= 'A' && ch <= 'Z' )    
      ch = ch + 32 ;          //changing uppercase to lowercase
 
   if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      return 1;
 
   return 0;
}
 
int main()
{
   char str[1000], *itr1, *itr2, ch;
    int length;
    scanf("%[^\n]s", str);
    length = strlen(str);
    char tempString[length];    //creating a new array
    
    itr1 = str;     //used to iterate the string 'str' by each character
    itr2 = tempString;
 
   while(*itr1)
   {
      ch = *itr1;
 
      if ( isVowel(ch) == 0 )
      {
         *itr2 = ch;
         itr2++;
      }
      itr1++;
   }
   *itr2 = '\0';
 
   strcpy(str, tempString);     //tempString is pointing to first character of the aray 
 
   printf("%s", str);
 
   return 0;
}
 
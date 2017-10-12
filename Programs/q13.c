//reverse every word of a string.

#include<stdio.h>
#include<string.h>

void reverse(char *str, char *res){
    int i=0,left=0,right,k=0,j;
 
    while(str[i]!='\0'){
        if(str[i]== ' '){
            right = i-1;
            for(j=right; j>=left; j--){
                res[k++] = str[j];
            }
            res[k++] = ' ';
            left = i+1;
        }
        
        i++;
        
    }
    right = i-1;            //this part is for reversing tha last word.
    for(j=right; j>=left; j--){
        res[k++] = str[j];
    }
}

int main(){
    char str[1000];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    char res[len];
    reverse(str, res);
    printf("%s", res);
    return 0;
}
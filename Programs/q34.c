/**
Pattern

1
2 3
6 5 4
7 8 9 10

**/

#include<stdio.h>


int main(){
    int n,k,upperLimit,i,j;
    scanf("%d", &n);
    
    printf("1\n");
    
    upperLimit =2;
    for(i=2; i<=n; i++){
        if(i%2==1)          //if i is odd
        {
            upperLimit+= i;
            for(j=upperLimit, k=1; k<=i; k++,j--){
                printf("%d ", j);
            }   
            upperLimit++;
           
        }
        else{
            for(k=1; k<=i; k++){
                printf("%d ", upperLimit);
                upperLimit++;
            }
            upperLimit--;
            
        }
        printf("\n");
    }
    return 0;
}
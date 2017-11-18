/**
 write a function to print the following pattern.

2
33
444
5555
5555
444
33
2

where a =2 &amp; b=4

**/



#include <stdio.h>

void Pattern (int a, int b){
    //write your code here
    
    int i,j;
    
    //Print the upper half
    for(i=1; i<=b; i++){
        for(j=1; j<=i; j++){
            printf("%d ", a);
        }
        printf("\n");
        a++;
    }
    
    a--;            //Note this one.
    //Print the lower half
    for(i=b; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d ", a);
        }
        printf("\n");
        a--;
    }
}

int main() {
	int a, b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("\nEnter b :\n");
	scanf("%d", &b);
	Pattern(a,b);
	return 0;
}
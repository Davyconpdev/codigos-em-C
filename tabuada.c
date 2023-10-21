#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int n;

printf("digite um numero:");
scanf("%d",&n);
 
 for (i = 1; i <= 10; i++)
 {
 printf("%d x %d = %d \n", n, i, i*n);
 }
 
return 0;
}
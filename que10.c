//10. Write a program to print a table of N.


#include<stdio.h>
int main() {
    
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {

        printf("\n%d\n",i*n);
        i++;
    }
    return 0;
}
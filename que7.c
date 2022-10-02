//7. Write a program to print the first N even natural numbers in reverse order


#include<stdio.h>
int main() {
    
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {

        printf("\n%d\n",n);
        n=n-2;
    }
    return 0;
}
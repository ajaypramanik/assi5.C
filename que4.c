//4. Write a program to print the first N odd natural numbers

#include<stdio.h>

int main() {
    
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int i=1;
    while(i<=n){

        printf("\n%d\n",i);
        i=i+2;
    }
    return 0;
}
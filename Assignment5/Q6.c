// 6. Write a program to print the first N even natural numbers

#include<stdio.h>

#include<stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
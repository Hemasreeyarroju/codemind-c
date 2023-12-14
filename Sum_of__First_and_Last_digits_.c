#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n%10;
    do{
        n=n/10;
    }
    while(n>9);
    printf("%d",a+n);
}
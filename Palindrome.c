#include<stdio.h>
int main()
{
    int n,i,a,b=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(b==x)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
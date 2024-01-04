#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int minutesbeforenewyear=(24-h-1)*60+(60-m);
    printf("%d",minutesbeforenewyear);
}
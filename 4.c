#include<stdio.h>
int main()
{  
    int x,i;
    int t=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
     t=t*i;
    }
    printf("%d!=%d\n",x,t);
    return 0;
}
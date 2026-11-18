#include<stdio.h>
int main()
{int a,b,t;
 scanf("%d %d",&a,&b);
 while(b!=0)
 
    {t=a%b;
    a=b;
    b=t;
   printf("a=%d b=%d t=%d\n",a,b,t);
    }

 printf("a=%d b=%d t=%d",a,b,t);
    return 0;
}
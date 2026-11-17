#include<stdio.h>
int main()
{
   int x;
   int cnt=0;
   for(x=2;cnt<10;x++)
   {int im=0;
      int i;
      for(i=2;i<x;i++)
      {
         if(x%i==0)
         {
            im = 1;
            break;
         }
      }
      if(im==0)
      {
         printf("%d ",x);
         cnt++;
      }
      
   }

}
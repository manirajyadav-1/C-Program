#include<stdio.h>
int main()
{
   int m,n,i,j,count;
   printf("enter min and min value:");
   scanf("%d%d",&m,&n);
   for(i=m;i<=n;i++)
   {
      count=0;
      for(j=1;j<=i;j++)
      {
         if(i%j==0)
         count+=1;

      }
      if(count==2){
      printf("%d\t",i);
      }
   }
}
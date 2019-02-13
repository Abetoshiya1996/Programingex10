/*Prog11-2*/

#include<stdio.h>
#define MAX 10
int inner_product(double[],double[],int i);
main()
{
 double v1[MAX],v2[MAX];
int i,ip;
 printf("vec1:");
 for(i=0;i<MAX;i++)
   {
   scanf("%d",&v1[i]);
 }

 printf("vec2:");
 for(i=0;i<MAX;i++)
   {
     scanf("%d",&v2[i]);
   }
 ip=inner_product(v1,v2,MAX);
 printf("inner product: %d\n",ip);
}

int inner_product(double v1[],double v2[],int n)
{int i;
  double ss;
  ss=0;
  for(i=0;i<n;i++)
    {
      ss+=v1[i]*v2[i];
    }
  return ss;
    }

//10-1

#include<stdio.h>
#define MAX 100
void least_square_fitting(double[],double[],int,double*,double*);

main()
{
  FILE *fp;
  int num,i;
  double x[MAX];
  double y[MAX];
  double a1,a0;

  fp=fopen("input","r");

  i=0;

  while(fscanf(fp,"%lf %lf",&x[i],&y[i])!=EOF)
  {
    i++;
  }
  num=i;
  least_square_fitting(x,y,num,&a0,&a1);
    printf("f(x)=%lf+%f*x\n",a0,a1);
}

void least_square_fitting(double x[],double y[],int num,double *a0,double *a1)
{
  double xx,yy,s1,s2;
  int i;

  xx=0.0;
  for(i=0;i<num;i++)
    {
      xx+=x[i];
    }
  xx=xx/num;

  yy=0.0;
  for(i=0;i<num;i++)
    {
      yy+=y[i];
    }
  yy=yy/num;

  s1=0.0;
  for(i=0;i<num;i++)
    {
      s1+=x[i]*y[i];
    }
  s1=s1/num;
  
  s2=0.0;
  for(i=0;i<num;i++)
    {
      s2+=x[i]*x[i];
  }
s2=s2/num;

 *a0=((yy*s2-xx*s1)/(s2-xx*xx));
 *a1=((s1-xx*yy)/(s2-xx*xx));
}


  

//report15-2

#include<stdio.h>
#include<math.h>

main()
{
  double solution;
  int i;
  double s,a,b,eps,fs,fa;

  printf("a,b=");
  scanf("%lf %lf",&a,&b);
    
  i=0;
  eps=1.e-8;
  
  while((fabs(a-b)>eps))
    {
      i++;
      s=(a+b)/2.0;
      fs=f(s);
      fa=f(a);

      if(fs*fa<0)
	{
	  b=s;
	}else{
	a=s;
      }
      printf("a=%16.14lf b=%16.14lf s=%16.14lf\n",a,b,s);
      if(i==1000) break;      
    };
   printf("x=%16.14lf\n",s);   
}

double f(double x)
{
  double fx;
  fx=x*x*x-8.e0*x*x+15.e0;
  
}

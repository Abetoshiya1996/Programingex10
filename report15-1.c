//report15-1

#include<stdio.h>
#include<math.h>

main()
{
  double solution;
  int i;
  double s,a,b,eps,fs,fa;

  i=0;
  a=0.0;
  b=2.0;
  eps=1.e-10;

  while((fabs(a-b)>eps))
    {
      i++;
      s=(a+b)/2.0;
      fs=s*s*s-3.e0;
      fa=a*a*a-3.e0;
      if(fs*fa<0)
	{
	  b=s;
	}
      else
	{
	  a=s;
	}
      printf("a=%16.14lf b=%16.14lf s=%16.14lf\n",a,b,s);
      if(i==1000) break;
    };
  printf("x=%16.14lf\n",s);
    }

/*report10-1*/
#include<stdio.h>
int mul(int);
main()
{
  int s,n;
  printf("input n");
  scanf("%d",&n);
    s=mul(n);
    printf("1*2*...*n=%d\n",s);
}
  int mul(int m)
  {
    int i,s=1;
    for(i=1;i<=m;i++)
      {
	s*=i;
      }
    return(s);
  }

/*report10-2*/
#include<stdio.h>
int minabs(int,int);
main()
{
  int x,y,z,min;
  printf("input 3 integer numbers ?");
  scanf("%d %d %d",&x,&y,&z);

  min=minabs(x,y);
  printf("3 integer numbers : %d %d %d\n",x,y,z);
  printf("min number of the abs. values: %d\n",min);
}
int minabs(int a,int b)
{
  int c;

  if(a<0){
    a=-a;
  }
  if(b<0){
    b=-b;
  }
  if(a>b){
    c=a;
  }
  else{
    c=b;
  }
  return(c);
    }

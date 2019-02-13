/*Prog11-1*/

#include<stdio.h>
void operate(int*,int*,int*,int*,int,int);

main()
{
int i,j,s,d,m,p;
printf("input two integer numbers:");
scanf("%d %d",&i,&j);
operate(&s,&d,&m,&p,i,j);
printf("i+j=%d,i-j=%d,i*j=%d,i/j=%d\n",s,d,m,p);
}
void operate(int *ps,int *pd,int *pm,int*pp,int x,int y)
{
*ps=x+y;
*pd=x-y;
*pm=x*y;
*pp=x/y;
}

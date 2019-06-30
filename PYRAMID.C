#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,space=40;
for(i=1;i<=20;i++)
  {
    for(j=1;space<40;j++)
    {
      printf(" ");
    }
    for(k=1;k<2*i-1;k++)
    {
      printf("*");
    }
      space--;
      printf("\n");
   }
}


#include<stdio.h>
#include<conio.h>

void main ()
{
  int i=1;
  int n;
  clrscr();
  printf("enter any number: ");
  scanf("%d",&n);

  for(i=1;i<n;i++)
  {
    if(i%2==0)
    {
     printf("%d\n",i);
    }

  }


  getch();
}
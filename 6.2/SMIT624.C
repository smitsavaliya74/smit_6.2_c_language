#include<stdio.h>
#include<conio.h>

void main ()
{

  int first=0;
  int second=1;
  int n;
  int final;
  clrscr();

  printf("enter eny number: ");
  scanf("%d",&n);
 // printf("%d,first\n");
 // printf("%d,second\n");

  for(int i=2;i<n;i++)
  {
   int final=first+second;
   printf("%d\n",final);
   first=second;
   second=final;
  }

  getch();
}
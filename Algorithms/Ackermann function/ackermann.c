#include <stdio.h>

int ackermann(int m,int n)
{
  if (m==0)
  {
    return (n+1);
  }
  if (m>0 && n==0)
  {
    return ackermann(m-1,1);
  }
  if (m>0 && n>0)
  {
    return ackermann(m-1,ackermann(m,n-1));
  }
}

void main()
{ 
  int m,n;
  printf("\t\t\tACKERMANN FUNCTION\t\t\t\n\n");
  printf("Enter the value of m and n to find value of ackermann function :\n");
  scanf("%d%d",&m,&n);
  printf("\nValue of ackermann function = %d\n\n",ackermann(m,n));
}
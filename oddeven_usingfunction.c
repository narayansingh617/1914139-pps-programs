#include<stdio.h>
void oddeven(int n);
int main()
{ int a;
  printf("enter the number");
  scanf("%d", &a);
  oddeven(a);
  return 0;
}
void oddeven(int n)
{ if(n%2==0)
   printf("number is even");
   else
  printf("number is odd");
}

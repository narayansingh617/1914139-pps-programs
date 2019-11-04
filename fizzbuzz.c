#include<stdio.h>
int main()
{ int i;
  for(i=0;i<=30;i++)
  { if(i%3==0)
      printf("fizz");
    else if(i%5==0)
      printf("buzz");
    else if(i%3==0 && i%5==0)
     printf("fizzbuzz");
   else
     printf("%d",i);
  }
 return 0;
}


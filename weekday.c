#include<stdio.h>
int main()
{ int code;
  printf("enter code ");
  scanf("%d",&code);
  if(code==1)
  printf("monday");
 else if(code==2)
 printf("tuesday");
else if(code==3)
 printf("wednesday");
else if(code==4)
 printf("thursday");
else if(code==5)
 printf("friday");
else if(code==6)
 printf("saturday");
else if(code==7)
 printf("sunday");
else
 printf("invalid code");
 return 0;
}

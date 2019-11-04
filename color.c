#include<stdio.h>
 int main()
{ char code;
  printf("enter code");
 scanf("%c",&code);
switch(code)
{ case 'y':printf("yellow colour");
           break;
  case 'r':printf("red colour");
           break;
  case 'g':printf("green colour");
           break;
  case 'b':printf("blue colour");
           break;
  default:printf("invalid colour code");
           break;
}
 return 0;
}


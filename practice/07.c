#include "stdio.h"
main()
{
  char a=176,b=219;
  printf("%c%c%c%c%c\n",b,a,a,a,b);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",a,a,b,a,a);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",b,a,a,a,b);
}


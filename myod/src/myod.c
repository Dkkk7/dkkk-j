#include "../include/head.h"
#include <stdio.h>
void main()
{ 
  char filename[50];
  printf("please input the filename:");
  scanf("%s",filename);
  hex(filename);
  ascii(filename);
}
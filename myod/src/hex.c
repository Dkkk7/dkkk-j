#include "../include/head.h"
#include <stdio.h>
void hex(char *filename)
{
  FILE *fp;
  char ch;
  fp=fopen(filename,"r");
  ch=fgetc(fp);
  printf("Hex:\n");
  while(ch!=EOF)
  {
    if(ch=='\n')
      printf("\n");
    else
      printf("%4x",ch);
      ch=fgetc(fp);
  }
  fclose(fp);
}
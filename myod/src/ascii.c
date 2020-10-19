#include "../include/head.h"
#include <stdio.h>
void ascii(char *filename)
{
  FILE *fp;
  char ch;
  fp=fopen(filename,"r");
  ch=fgetc(fp);
	printf("Ascii:\n");
  while(ch!=EOF)
  {
    if(ch=='\n')
      printf("\n");
    else
    	printf("%4d",ch);
    	ch=fgetc(fp);
  }
  fclose(fp);
}
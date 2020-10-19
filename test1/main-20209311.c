#include <stdio.h>
#include "head-20209311.h"
int main(void){
    int a, b, i;
    for(i=0;i<9311;i++){
    }
    printf("enter two numbers:");
    scanf("%d %d",&a, &b);
    printf("add:%d\n",add(a,b));
    printf("sub:%d\n",sub(a,b));
    printf("mul:%d\n",mul(a,b));
    printf("div:%lf\n",div(a,b));
    return 0;
}
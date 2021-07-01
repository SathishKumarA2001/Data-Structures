#include<stdio.h>  
int main() {
  int i,l,r,k;

  for (i = 0; i < 8; i++)
  {
    printf("\n");
    for(k = 1; k <=(8-i); k++)
      printf("  ");

    for (l = i; l >=0 ; l--)
      printf("%d ",l);

    for (r = 1; r<=i; r++)
      printf("%d ",r);
  }
}

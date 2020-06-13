#include <stdio.h>
int main()
{
  int n=10, m;
  int *p;

  p = &n;

  m = *p;
  
  printf ("M: %d\n", m);
  return 0;
}
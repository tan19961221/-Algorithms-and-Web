#include <stdio.h>
#define N 5

int main(void)
{
  int a[N];
  int i;
  int j;
  int temp;
  printf("Enter %d numbers please:\n", N);
  for(i=0;i<N;i++)
    scanf("%d", &a[i]);
  printf("\n");

  printf("Your input is:\n");
  for(i=0;i<N;i++)
    printf(" %d", a[i]);
  printf("\n");

  printf("From smallest to largest is:\n");
  for(i=0;i<N-1;i++)
    for(j=0;j<N-i-1;j++)
      if(a[j]>a[j+1])
    {
      temp = a[j+1];
      a[j+1] = a[j];
      a[j] = temp;
    }
  for(i=0;i<N;i++)
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}





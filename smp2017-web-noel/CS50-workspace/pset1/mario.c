#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height: ");
    int n=get_int();
    for(int i=1;i<=n;i++)
      {
          for(int s=n;s>i;s--)
            {
                printf(" ");
            }
          for(int j=0;j<=i;j++)
          {
              printf("#");
          }
          printf("\n");
      }
}
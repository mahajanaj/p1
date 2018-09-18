#include<stdio.h>
int rev( long int n)
{
    if(n==0)
       return 0;
    else
      return 1+rev(n/10);
}
int main()
{
    printf("%d",rev(3212184615484));
}

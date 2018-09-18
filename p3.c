#include<stdio.h>
int rev( long int n)
{
    if(n<=9)

       return 1;


    else

      return 1+rev(n/10);

}
int main()
{
    printf("%d",rev(0));
}

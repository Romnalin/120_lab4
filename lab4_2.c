#include <stdio.h>
int main ()
{
   int n,a=0,b=0 ;

   scanf("%d",&n);
if(0<=n<=100000)
{
    if(n!=1&&n!=0)
    {
        if(n%2==0||n%3==0||n%5==0||n%7==0||n%11==0)
        {
            if(n!=2&&n!=3&&n!=5&&n!=7&&n!=11)
            {
                 if(n!=2&&n!=3&&n!=5&&n!=7&&n!=11)
                 {
                     b=n;
                     while(b%2==0||b%3==0||b%5==0||b%7==0||b%11==0)
                     {
                         b=b-1;
                     }
                 }
                  if(n!=2&&n!=3&&n!=5&&n!=7&&n!=11)
                  {
                       a=n;
                     while(a%2==0||a%3==0||a%5==0||a%7==0||a%11==0)
                     {
                         a=a+1;
                     }

                  }
                 printf("%d %d",b,a);
            }
          else
                printf("%d",n);
        }
    }
}



 return 0 ;
}

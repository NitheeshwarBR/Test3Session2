#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
   int d;
  while(b!=0)
    {
      a=b;
      d=a%b;
      b=d;
    }
  return a;
}
int main()
{
  printf("%d\n",find_gcd(16,8));
}
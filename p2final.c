#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction x;
  printf("Enter The Fraction In the Form Of a/b\n");
  scanf("%d/%d",&x.num,&x.den);
  return x;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction Largest;
  if(f1.num*f2.den>f2.num*f1.den&&f1.num*f3.den>f3.num*f1.den)
  {
    Largest=f1;
  }
  else if(f2.num*f1.den>f1.num*f2.den&&f2.num*f3.den>f3.num*f2.den)
  {
    Largest=f2;
  }
  else
  {
    Largest=f3;
  }
  return Largest;
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("%d/%d is the largest of all the fractions\n",largest.num,largest.den);
}
int main()
{
  Fraction a,b,c,large;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
 large=Largest_fraction(a,b,c);
  output(a,b,c,large);
  return 0;
}

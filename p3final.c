#include<stdio.h>
void input_n_r(int *n,int *r)
{
  printf("Enter the combination as ncr\n");
  scanf("%dc%d",n,r);
}
int ncr(int n,int r)
{
  int ncr=1;
  int x=1;
  int y=1;
  if(n>r)
  {
    for(int i=n;i>r;i--)
    {
      x=x*i;
    }
  for(int j=n-r;j>1;j--)
        {
          y=y*j;
        }
   ncr=x/y;
  return ncr;
  }
  if(n<r)
  {
    return 0;
  }
  
  
}
void output(int n,int r,int result)
{
  if(result==0)
  {
    printf("Wrong Input");
    
  }
  else
  {
     printf("%dc%d is %d\n",n,r,result);
  }
 
}
int main()
{
  int a,b,result;
  input_n_r(&a,&b);
  result=ncr(a,b);
  output(a,b,result);
  return 0;
}

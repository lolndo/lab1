#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define A -5
#define B 5
#define H 0.1

double F(double x)
{
    return x*exp(x)+2*sin(x)-sqrt(sqrt(pow(x*x*x-x*x,2)));
}
int main()
{
  double x,y,H,n,sum=0;
  int s,count=0;
  printf("n = "); scanf("%d", &s); 
  printf("      x   ||   f(x)\n");
  n=s;
  H=(B-A)/(n-1);
  for (x=A; x<=B; x+=H)
    {
      y=F(x);
      printf("%10.4f||%10.4f\n",x,y);
      sum+=y;
      if ((x >= -7 && x <= 3 && y >= -6 && y <= 5))
      {
        ++count;
      }
    }
  
  printf("средне арифметическое всех значений функции %.4f\n",sum/n);
  printf("количество точек, входящих в область %d\n",count);
}
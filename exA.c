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
  double x,y,s,sum=0;
  printf("значение аргумента     значение функции\n");
  for (x=A; x<=B; x+=H)
  {
    y=F(x);
    char a[12],str1,str2,str3,str4;
    int val1,val2,val3,val4;
    printf("%10.4f            %10.4f\n",x,y);
    sprintf(a,"%10.4f",y);//расскладываем число как элементы массива
    str1 = a[6];//выписываем цифры числа после запятой 
    str2 = a[7];
    str3 = a[8];
    str4= a[9];
    val1=atoi(&str1);//преобразуем символ в число
    val2=atoi(&str2);
    val3=atoi(&str3);
    val4=atoi(&str4);
    if (y>0 && (val1>5 || ((val1==5 && (val2>=1 && val2<=9))||(val1==5 && (val3>=1 && val3<=9))||(val1==5 && (val4>=1 && val4<=9)))))
    {
      sum=sum + y;
    }
  }
  printf("Сумма значений функции, которые имеют дробную часть, большую 0,5 равна %10.4f",sum);
}
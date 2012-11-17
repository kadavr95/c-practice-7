#include <stdio.h>															    //подключение библиотек содержащих функции ввода, вывода, математических  функций, и функции рандом
#include <math.h>
#include <stdlib.h>


float progression (float initial_term, float difference, int number, float *nth_term, float *sum);

int main(void)
{
						  //определение переменных и присваивание им необходимых значений

  printf("Yaskovich Dmitry (T01-01c). Exercise 7. Variant 4\n\n");              //Информация о программе
  printf("Enter height and side:\n");
  scanf("%d %d",&h,&a);

  printf("Cube side: %f\n",sd);
  printf("\nDimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}

float progression (float initial_term, float difference, int number, float *nth_term, float *sum);
{
int i,rtrn=0;
for (i = 1; i <= number; i++)
{
  sum+=initial_term+(i-1)*difference
}
*nth_term=initial_term+(number-1)*difference;
if (n<=0)
{
  rtrn=1;
}
if (d=0)
{
  rtrn=2;
}
if (((initial_term<0)&&(*nth_term>0))||((initial_term>0)&&(*nth_term<0)))
{
  rtrn=3;
}
if ((n<=0)&&(d=0))
{
  rtrn=4;
}
if ((n<=0)&&(((initial_term<0)&&(*nth_term>0))||((initial_term>0)&&(*nth_term<0))))
{
  rtrn=5;
}
return rtrn;
}


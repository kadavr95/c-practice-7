#include <stdio.h>															    //подключение библиотек содержащих функции ввода, вывода, математических  функций, и функции рандом
#include <math.h>
#include <stdlib.h>

int progression (float initial_term, float difference, int number, float *nth_term, float *sum); //прототип функции

int main(void)
{
  float a,d,n,nn,s=0; 						                                    //определение переменных и присваивание им необходимых значений
  printf("Yaskovich Dmitry (T01-01c). Exercise 7. Variant 4\n\n");              //Информация о программе
  printf("Enter initial term, difference and number:\n");
  scanf("%f %f %f",&a,&d,&n);                                                   //ввод данных
  progression(a,d,n,&nn,&s);                                                    //функция
  if (progression==0)
  {
	printf("N-th term: %f\n",nn);                                                 //вывод данных
	printf("Sum:       %f\n",s);
  }
  if (progression==1)
  {
	printf("Number is not positive");                                           //вывод дополнительных данных
  }
  if (progression==2)
  {
	printf("N-th term: %f\n",nn);                                               //вывод данных
	printf("Sum:       %f\n",s);
	printf("Difference between terms is zero");                                 //вывод дополнительных данных
  }
  if (progression==3)
  {
	printf("N-th term: %f\n",nn);                                               //вывод данных
	printf("Sum:       %f\n",s);
	printf("Some terms are less than zero and some are bigger than zero");      //вывод дополнительных данных
  }
  if (progression==4)
  {
	printf("Number is not positive. Difference between terms is zero");         //вывод дополнительных данных
  }
  if (progression==5)
  {
	printf("Number is not positive. Some terms are less than zero and some are bigger than zero");//вывод дополнительных данных
  }
  printf("\nDimini Inc.\n");                                                    //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}

int progression (float initial_term, float difference, int number, float *nth_term, float *sum)
{
  int i,rtrn=0;
  for (i = 1; i <= number; i++)
  {
	*sum+=initial_term+(i-1)*difference;                                          //вычисление суммы
  }
  *nth_term=initial_term+(number-1)*difference;                                   //вычисление п члена
  if (number<=0)
  {
	rtrn=1;
  }
  if (difference=0)
  {
	rtrn=2;
  }
  if (((initial_term<0)&&(*nth_term>0))||((initial_term>0)&&(*nth_term<0)))
  {
	rtrn=3;
  }
  if ((number<=0)&&(difference=0))
  {
	rtrn=4;
  }
  if ((number<=0)&&(((initial_term<0)&&(*nth_term>0))||((initial_term>0)&&(*nth_term<0))))
  {
	rtrn=5;
  }
  return rtrn;
}



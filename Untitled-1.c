#include <stdio.h>
int main()
{
int year,day,month,DayInMonths,weekday =0;
printf("enter the desired year");
scanf("%d",&year);
char *months[] ={"january", "Febuary", "March", "april", "May" , "june", "july", "august", "september", "oct", "Nov", "Dec"};
int monthday[] ={31, 28, 31, 30, 31, 30, 31, 30, 31,30 ,31, 30 };
if((year%4== 0 && year%100!=0)||(year%400==0))
{
monthday[1]=29;
}
for(month=0;month<12;month++)
{
    DayInMonths=monthday[month];

    printf("\n\n ---------%s----------\n",months[month]);
    printf("\n  Sun  Mon  Tue  Wed  Thur  Fri  Sat\n");

    for(day=1;day<=DayInMonths;day++){

        printf("%5d",day);



if (++weekday>6)
{
printf("\n");
weekday=0;


}
   }

  }
  return 0;
}
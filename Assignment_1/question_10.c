/*WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/
#include<stdio.h>
int main(){
          int date,month,year;
          printf("Enter date month and year in DD/MM/YYYY format:");
          scanf("%d/%d/%d",&date,&month,&year);
          printf("Date-%d , Month-%d , Year-%d",date,month,year);
          return 0;
}
          
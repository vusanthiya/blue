#include<stdio.h>
#include<conio.h>
void main()
{
int sum,count=0;
clrscr();
printf("\n Enter the number:");
scanf("%d",sum);
while(sum!=0)
{
sum=sum/10;
count++;
}
printf("%d",count);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int sys,dias;
float MAP,pp;
printf("\n enter the systolic pressure\n ");
scanf("%d",&sys);
printf("\n enter the diastolic pressure\n");
scanf("%d",&dias);
pp=sys-dias;
MAP=dias+(pp/3);
printf("\n the MAP value is %f \n",MAP);
getch();
}


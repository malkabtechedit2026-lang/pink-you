#include<stdio.h>
void main (){
int YEAR;
printf ("enter year");
scanf("%d", &YEAR);
if (YEAR %400==0|| YEAR %4 && YEAR%100!=0){
printf ("IT is LEAP YEAR");
}
else{
printf("IT is not LEAP YEAR");
}
}

#include<stdio.h>
void main (){
int a,b,c;
printf ("enter three sides of a triangle");
scanf("%d %d %d", &a, &b, &c);
if (a==b&& b==c && c==a){
printf ("triangle is equilateral");
}
else if (a==b|| b==c || a==c){
printf("triangle is isosceles");
}
else{
printf("triangle is scalene");}
}

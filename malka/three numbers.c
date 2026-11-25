#include<stdio.h>
void main (){
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
if (b<a && a>c){
printf("a is larger number");
}
else if (b>a && b>c){
printf("b is larger number");
}
else {
printf("c is larger number");
}
}

#include<stdio.h>
int main()
{
int n;
printf("enter a num");
scanf("%d",&n);
if(n  == 0){
    printf("division by 0 is not allowed");
}
else if(n %5 == 0){
printf("%d is divisible by 5",n);
}
else

{
    printf("%d is not divisible by 5",n);
}

return 0;
}

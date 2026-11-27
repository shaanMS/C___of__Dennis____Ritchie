#include<stdio.h>


void stack(int n)
{
if(n==900000)
{
return;
}
n=n+1;
printf("%p\n",(void *)(&stack),"\n \n\n\n\n ======     %p    \n\n\n\n\n ",&n);
stack(n);

}

int main()
{
printf("%p\n",(void *)(&stack));/////      function ka adress call hote hi funciton cllho jayega 
printf("Targeting system");
stack(2);
return 0;

}
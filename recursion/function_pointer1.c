#include<stdio.h>

int add(int a , int b , int (*prt)(int ,int))
{
printf("Add me hain\n",prt(5,5));
return 0;
}

int q(int a, int b)
{
printf("--");
add(2,3,q);
printf("Q me hain\n");
return 0;
}
void main()
{
add(4,5,q);
}
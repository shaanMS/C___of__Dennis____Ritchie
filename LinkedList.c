
#include<stdio.h>

struct Data 
{
int a;
int b;
struct Data *link;
};
void main()
{
struct Data d1,d2,d3;
d1.a = 111;
d1.b = 222;
d1.link = &d2;
}
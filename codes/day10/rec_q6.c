#include<stdio.h>
void dispalay();;
int main()
{
    display();
    display();
    return 0;
}
void display()
{
    static int x;
    x+=10;
    printf("\n x=%d",x);
}
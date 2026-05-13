#include<stdio.h>

void rec_fun(int n)
{
    if(n == 0)
    return;
    rec_fun(n-1);
    printf("%d ",n);
}
int main()
{
    rec_fun(5);
    
    return 0;
}
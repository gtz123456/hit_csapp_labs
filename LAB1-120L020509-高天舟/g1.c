#include<stdio.h>

long fib(int n,int flag)
{   
    if(n == 1) return 1;
    if(n == 2) 
    {
        return 1;
    }

    long a,b;
    if(flag) 
    {
        b = fib(n - 1,1);
        a = fib(n - 2,0);
    }
    else
    {
        a = fib(n - 2,0);
        b = fib(n - 1,0);
    }   
    if(flag) printf("n =%3d %.8f\n",n-2,(double)a / b);
    return a + b;
}

int main()
{
    fib(101,1);
}

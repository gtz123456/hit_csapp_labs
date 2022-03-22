#include<stdio.h>

int main()
{
    double a = 1,b = 1;
    for(int i = 1;i < 101;i++){
        double g = (double)a / b;
        printf("n = %3d   %.8f\n",i,g);
        double temp = b;
        b += a;
        a = temp;
    }
}
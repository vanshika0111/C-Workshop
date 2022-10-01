#include<stdio.h>
#define PI 3.14 // --> preprocessor
int main()
{
    int x = 10;
    printf("x = %d \n ", x);
    x = x*10;
    printf("x = x*10 = %d \n ", x);
    x += 10;
    printf("x += 10 = %d \n ", x);
    x++;
    printf("x++ = %d \n ", x);
    int y = x++ + 10;
    printf("x++ + 10 = %d \n ", y);
    ++x;
    printf("++x = %d \n ", x);
    int z = ++x + 10;
    printf("++x + 10 = %d \n ", z);
    int a = 10 * PI;
    float b = 10 * PI;
    printf("10 * PI = %d \n", a);
    printf("10 * PI = %f \n", b);   
    return 0;
}
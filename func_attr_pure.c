#include <stdio.h>

__attribute__ ((pure)) int square (int n)
{
    return n * n;
}

int main()
{
    int i = 10;
    printf("%d", square(i));
    return 0;
}
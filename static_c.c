#include <stdio.h>

void foo()
{
    int a = 10;
    static int sa = 10;

    a += 5;
    sa += 5;

    printf("a = %d, sa = %d\n", a, sa);
}

int main(int argc, char const *argv[])
{
    
    for(size_t i = 0; i < 10; i++)
        foo();

    return 0;
}

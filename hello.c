#include <stdio.h>

int* local_valuable ()
{
    int x = 0;

    return &x;
}

int main ()
{

   int * ptr = local_valuable();

    printf("%p \n", *ptr);

    printf("나는 C를 얼마나 알고 있는가");

    printf("%d \n", *ptr);

    printf("나는 C를 얼마나 알고 있는가");

    return 0;
}

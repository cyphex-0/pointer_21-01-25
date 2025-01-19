#include <stdio.h>
int main()
{
    int jim = 34;
    int *p = &jim;
    printf("the address of memory for jim is : %d\n", &jim);
    printf("the address of memory for jim is : %d\n", p);
    printf("the address of memory for jim + 1(p+1) is : %d\n", p + 1);
    printf("the value of jim is : %d\n", jim);
    printf("the value of jim is : %d", *p);
    printf("the value of jim + 1(*p+1) is : %d", *p + 1);

    return 0;
}
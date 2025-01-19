#include <stdio.h>
int main()
{
    int jim = 34086;
    int *p = &jim;
    char *p1 = (char *)&jim;
    printf("the address of memory for jim(p) is : %d\n", &jim);
    printf("the address of memory for jim(p) is : %d\n", p);
    printf("the address of memory for jim + 1(p+1) is : %d\n", p + 1);
    printf("the value of jim is : %d\n", jim);
    printf("the value of jim is : %d\n", *p);
    printf("the value of jim + 1{*(p+1)} is : %d\n", *(p + 1));

    printf("the address of memory for jim(p1) is : %d\n", p1);
    printf("the address of memory for jim + 1(p1+1) is : %d\n", p1 + 1);
    printf("the value of jim is : %d\n", jim);
    printf("the value of jim(p1) is : %d\n", *p1);
    printf("the value of jim + 1{*(p1+1)} is : %d", *(p1 + 1));

    return 0;
}
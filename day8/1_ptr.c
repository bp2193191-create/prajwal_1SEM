#include <stdio.h>
int main()
{
    int a = 100;
    int *ptr = &a;
    printf("value of the a:%d\n", a);
    printf("adress of a is:%p\n", &a);
    printf("value of ptr:%p\n", ptr);
    printf("adress of ptr:%p\n", &ptr);
}
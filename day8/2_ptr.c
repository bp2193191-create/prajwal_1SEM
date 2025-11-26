#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("value of num:%d\n", num);
    printf("value of the num using ptr:%d\n", *ptr);
    printf("value of ptr:%p\n", ptr);
    printf("value of the ptr using num:%p\n", &num);
}
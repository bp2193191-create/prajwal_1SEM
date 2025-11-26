#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("1. a = %d\n", a);
    printf("2. *p = %d\n", *p);
    printf("3. *(&a) = %d\n", *(&a));
    printf("4. *(*(&p)) = %d\n", *(*(&p)));
    printf("\nValues related to pointer p:\n");
    printf("1. p = %p\n", (void *)p);
    printf("2. &a = %p\n", (void *)&a);
    printf("3. *(&p) = %p\n", (void *)*(&p));
}

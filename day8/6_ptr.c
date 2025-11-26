#include <stdio.h>
int main()
{
    int arr[3] = {100, 200, 300};
    int *ptr = arr;
    printf("address of arr[0]:%p\n", &arr[0]);
    printf("adrress arr:%p\n", arr);
    printf("adress of arr using pointer:%p\n", ptr);
    printf("adress  of arr[1]%p\n", &arr[1]);
    printf("adress of arr[2] using pointer:%p\n", ptr + 2);
}
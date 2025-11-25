#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter a numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is :%d\n", i, arr[i]);
    }

    printf("size of array:%d\n", sizeof(arr));
    printf("length of array:%d\n", (sizeof(arr) / sizeof(arr[0])));
}
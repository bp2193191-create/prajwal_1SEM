#include <stdio.h>

int main()
{
    int num, i;
    int isprime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isprime = 0;
    }

    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime == 1)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("Not a prime number.\n");
    }

    return 0;
}

#include<stdio.h>

main()
{
    int i = 0, x = 0;

    for (i = 1; i < 10; ++i) {

        if (i % 2 == 0)
            x += i;
        else
            x--;

        printf("%d ", x);
    }

    printf("\n x = %d\n", x);

    return 0;
}

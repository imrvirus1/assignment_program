#include<stdio.h>

main()
{
    int i = 0, x = 0;

    while (i < 20) {
        if (i % 5 == 0) {           //here test all number which divided by 5 between 0 to < 20
            x = x + i;
            printf("%d ", x);
        }
        ++i;
    }
    printf("\nx = %d\n", x);

    return 0;
}

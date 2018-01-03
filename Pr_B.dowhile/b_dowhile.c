#include<stdio.h>

main()
{
    int i = 0, x = 0;

    do {
        if (i % 5 == 0) {
            x++;
            printf("%d ", x);
        }

        ++i;
    } while(i < 20);

    printf("\n x = %d\n", x);   //here print how many number are divided by 5 between 0 to 20

    return 0;
}

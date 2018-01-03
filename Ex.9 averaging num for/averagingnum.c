#include<stdio.h>

int main()
{
    int n, count;
    float x, average, sum;

    //initialize and read in a value for n

    printf("How mane numbers? ");
    scanf("%d", &n);

    //read in the numbers

    for (count = 1, sum = 0; count <= n; ++count) {
        printf("x = ");
        scanf("%f", &x);
        sum += x;
    }

    //calculate the average and display the answer

    average = sum/n;

    printf("\nThe average is %f\n", average);

    return 0;
}

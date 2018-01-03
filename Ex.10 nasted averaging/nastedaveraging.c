#include<stdio.h>

int main()
{
    int n, count, loops, loopcount;
    float x, average, sum;

    //read in the number of list
    printf("How many lists? ");
    scanf("%d", &loops);

    //outer loop (process each list of numbers)
    for (loopcount = 1; loopcount <= loops; ++loopcount) {
        //initialize and read in a value for n

        sum = 0;
        printf("\nList number %d\nHow many numbers? ", loopcount);
        scanf("%d", &n);

        //read in the numbers

        for (count = 1; count <= n; ++count) {
            printf("x = ");
            scanf("%f", &x);
            sum += x;
        } //end inner loop

        //calculate the average and display the answer

        average = sum / n;

        printf("\n The average is %f\n", average);

    } //end outer loop

    return 0;
}

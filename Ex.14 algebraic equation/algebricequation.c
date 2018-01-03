//determine the roots of an algebraic equation using an iterative procedure
#include<stdio.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int flag = TRUE, count = 0;
    float guess, root, test, error;

    //read input parameters

    printf("Initial guess: ");
    scanf("%f", &guess);

    while (flag) {      //begin the main loop

            ++count;
            if (count == 50) flag = FALSE;
            test  = 10. -3. * guess * guess;

            if (test > 0) {                     //another iteration
                root = pow(test, 0.2);
                printf("\nIteration number: %2d", count);
                printf("    x = %7.5f", root);
                error = fabs(root - guess);

                if (error > 0.00001) guess = root;          //repeat the calculation
                                                            //display the final  answer
                else {
                    flag = FALSE;
                    printf("\n\nRoot = %7.5f", root);
                    printf("    N0. of iteration %2d", count);
                }
            }

            else {                                         //error message
                flag = FALSE;
                printf("\n\nConvergence not obtained after 50 iterations");
            }

            if ((count == 50) && (error > 0.00001))         //another error message
                printf("\n\nConvergence not obtained after 50 iterations\n");

    }

    return 0;
}

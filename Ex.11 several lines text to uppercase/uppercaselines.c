#include<stdio.h>
#include<ctype.h>

#define EOL '\n'

int main()
{
    char letter[80];
    int tag, count;

    while((letter[0] = getchar()) != '*') {

        //read in a line of text

        for (count = 1; (letter[count] = getchar()) != EOL; ++count)
            ;
        tag = count;
        //display the line of text

        for (count = 0; count < tag; ++count)
            putchar(toupper(letter[count]));
        printf("\n\n");
    } //end outer loop

    printf("Good bye\n");

    return 0;
}

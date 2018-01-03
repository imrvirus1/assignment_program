#include<stdio.h>
#include<ctype.h>

#define EOL '\n'

int main()
{
    char letter[80];
    int tag, count;

    //read in the lower case text

    for (count = 0; (letter[count] = getchar()) != EOL; ++count)
    ;
    tag = count;

    //display the upper case text

    for (count = 0; count < tag; ++count)
        putchar(toupper(letter[count]));

    return 0;
}

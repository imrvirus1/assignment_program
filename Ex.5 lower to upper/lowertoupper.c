#include<stdio.h>
#include<ctype.h>

#define EOL '\n'

int main()
{
    char letter[80];
    int tag, count = -1;

    //read in the lower case text
    do ++count; while ((letter[count] = getchar()) != EOL);
    tag = count;

    // display the upper case text

    count = 0;

    do {
        putchar(toupper(letter[count]));
        ++count;
    } while (count < tag);

    return 0;
}

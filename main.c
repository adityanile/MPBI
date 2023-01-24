#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char cipher1 (char n);

int main()
{

   printf("\nWelcome To The Portal\n");


    char ar[20];
    printf("\nEnter Text to Encrypt : ");
    gets(ar);

    char ch;


    for (int i=0; ar[i] != '\0'; i++)

    {
        ar[i] = tolower(ar[i]);
        ch = cipher1(ar[i]);


      ar[i] = ch;
    }

    printf("\nFinal Encrypted Text : %s\n", ar);

    return 0;


}




char  cipher1 (char n)
{

char   ch = tolower(n);

        if (n == 'a')
        {
            return 'd';
        }
        else if (n == 'd')
        {
            return 'g';
        }
        else if (n == 'i')
        {
            return 'l';
        }
        else if (n == 'h')
        {
            return 'k';
        }
        else if (n == 'e')
        {
            return 'h';
        }
        else if (n == 'l')
        {
            return 'o';
        }
        else if (n == 'o')
        {
            return 'r';
        }
        else if (n == 'b')
        {
            return 'e';
        }
        else if (n == 'c')
        {
            return 'f';
        }
        else if (n == 'e')
        {
            return 'h';
        }
        else if (n == 'f')
        {
            return 'i';
        }
        else if (n == 'g')
        {
            return 'j';
        }
        else if (n == 'j')
        {
            return 'm';
        }
        else if (n == 'k')
        {
            return 'n';
        }
        else if (n == 'n')
        {
            return 'q';
        }
        else if (n == 'm')
        {
            return 'p';
        }
        else if (n == 'p')
        {
            return 's';
        }
        else if (n == 'q')
        {
            return 't';
        }
        else if (n == 'r')
        {
            return 'u';
        }
        else if (n == 's')
        {
            return 'v';
        }
        else if (n == 't')
        {
            return 'w';
        }
        else if (n == 'u')
        {
            return 'x';
        }
        else if (n == 'v')
        {
            return 'y';
        }
        else if (n == 'w')
        {
            return 'z';
        }
        else if (n == 'x')
        {
            return 'a';
        }
        else if (n == 'y')
        {
            return 'b';
        }
        else if (n == 'z')
        {
            return 'a';
        }
        else if (n == ' ')
        {
            return '@';
        }
}

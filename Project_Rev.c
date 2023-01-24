#include <stdio.h>
#include <ctype.h>

int main()
{
    int pass;
    printf("Enter Admin Password To Access the Programn: ");
    scanf("%d", &pass);
    printf("\n");

    int tries = 3;


    char reverser[50] , re;

    tries--;

    while (pass == 1008 && tries != 0)

{

    printf("Enter text to Decrypt : ");
    scanf("%s", reverser);

    for(int i=0; reverser[i] != '\0'; i++)
{
      if(isalnum(reverser[i]))
      {

        re = reverser[i];
        re = (re - 'a' - 3 + 26) % 26 + 'a';

      }
      else if (reverser[i] == '@')
      {
          re = reverser[i];
          re = ' ';
    }
       reverser[i] = toupper(re);
}


    printf("\nDecrypted Text : %s\n", reverser);
    return 0;

}

   return 0;
}

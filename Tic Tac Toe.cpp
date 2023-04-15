#include <stdio.h>
#include <iostream>
using namespace std;

int delay();
void rules(int main_game[][3]);

int main()
{
   int main_game[3][3] = {};
   cout << endl << "Welcome to Tic Tac Toe" << endl << endl;
   cout << "Press 1 To Start the Game" << endl;
   cout << "Press 2 To Know How to Play ?" << endl;
   cout << "Press 3 To Exit" << endl;

   int n, x, y;
   cin >> n;

   switch(n)
   {
       case 1:

           cout << "        |         |        " << endl;
           cout << "    1   |    2    |    3   " << endl;
           cout << " __ __ __ __ __ __ __ __ __" << endl;
           cout << "        |         |        " << endl;
           cout << "    4   |    5    |    6   " << endl;
           cout << " __ __ __ __ __ __ __ __ __" << endl;
           cout << "        |         |        " << endl;
           cout << "    7   |    8    |    9   " << endl;


           cout << endl << "Enter a Number Where You Want to Mark" << endl << endl;

           for(int i=0; i < 9; i++) {
               printf("\n\nPlayer 1: ");
               cin >> x;

               if (x <= 3 && x >= 1) {
                   main_game[0][x - 1] = 1;
               } else if (x <= 6 && x >= 4) {
                   main_game[1][x - 3 - 1] = 1;
               } else if (x <= 9 && x >= 7) {
                   main_game[2][x - 6 - 1] = 1;
               }

               for (int i = 0; i < 3; i++) {
                   printf("\n\n");

                   for (int j = 0; j < 3; j++) {
                       printf("__%d__|\t", main_game[i][j]);
                   }
               }
               //Checking For Winner
               rules(main_game);

               if(i == 4)
               {
                   cout << endl << endl << "It's A Tie" << endl;
                   cout << "Play Again";
                   return 0;
               }

               printf("\n\nPlayer 2: ");
               cin >> y;

               if (y <= 3 && y >= 1) {
                   main_game[0][y - 1] = 2;
               } else if (y <= 6 && y >= 4) {
                   main_game[1][y - 3 - 1] = 2;
               } else if (y <= 9 && y >= 7) {
                   main_game[2][y - 6 - 1] = 2;
               }

               for (int i = 0; i < 3; i++) {
                   printf("\n\n");

                   for (int j = 0; j < 3; j++) {
                       printf("__%d__|\t", main_game[i][j]);
                   }
               }
               //Checking For Winner
               rules(main_game);
           }
           break;


       case 2:
               cout << endl << "This is a Two Player Game." << endl << "Player 1 is Represented By :- 1 ";
               cout << endl << "Player 2 is Represented By :- 2" << endl << endl;
               cout << "Game will Start with Player 1" << endl;
               cout << "There are 9 Squares Each Numbered as Shown at The Start of The Game" << endl;
               cout << "Players have to Enter The Number of the Square, Where He want To put a Mark" << endl;
               cout << "Same For Player 2" << endl << endl;
               cout << "First Player To Mark a Strike of Three Will Be the Winner" << endl <<endl;
               cout << "Best Of Luck Players" << endl << endl;
               cout << "Made By :- Aditya Nile" << endl;

               delay();

               break;




       case 3:
               cout << "Thanks For Playing" << endl;
               cout << "Program By Aditya Nile" << endl;
               delay();

               return 0;
               break;


       default:
               cout << "Invalid Input";
               cout << "Program By Aditya Nile";

               delay();

               break;
   }



    return 0;
}

int delay() {
    char a;
    cout << endl << endl << "Enter Anything To Exit";
    cin >> a;
    return 0;
}

void rules(int main_game[][3])
{
    // Case 1 for Winning

    if ((main_game[0][0] == main_game[1][1]) && main_game[0][0] != 0 && main_game[1][1] != 0) {
        if (main_game[0][0] == main_game[2][2]) {
            if (main_game[0][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

    //Case 2 For Winning

    if ((main_game[0][2] == main_game[1][1]) && main_game[0][2] != 0 && main_game[1][1] != 0) {
        if (main_game[0][2] == main_game[2][0]) {
            if (main_game[0][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

    //Case 3 For Winning

    if ((main_game[0][0] == main_game[1][0]) && main_game[0][0] != 0 && main_game[1][0] != 0) {
        if (main_game[0][0] == main_game[2][0]) {
            if (main_game[0][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }


    //Case 4 For Winning

    if ((main_game[0][1] == main_game[1][1]) && main_game[0][1] != 0 && main_game[1][1] != 0) {
        if (main_game[0][1] == main_game[2][1]) {
            if (main_game[0][1] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }


    //Case 5 For Winning

    if ((main_game[0][2] == main_game[1][2]) && main_game[0][2] != 0 && main_game[1][2] != 0) {
        if (main_game[0][2] == main_game[2][2]) {
            if (main_game[0][2] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

    //Case 6 For Winning

    if ((main_game[0][0] == main_game[0][1]) && main_game[0][0] != 0 && main_game[0][1] != 0) {
        if (main_game[0][0] == main_game[0][2]) {
            if (main_game[0][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

    //Case 7 For Winning

    if ((main_game[1][0] == main_game[1][1]) && main_game[1][0] != 0 && main_game[1][1] != 0) {
        if (main_game[1][0] == main_game[1][2]) {
            if (main_game[1][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

    //Case 8 For Winning

    if ((main_game[2][0] == main_game[2][1]) && main_game[2][0] != 0 && main_game[2][1] != 0) {
        if (main_game[2][0] == main_game[2][2]) {
            if (main_game[2][0] == 1) {
                cout << endl << endl << "Player 1 Won" << endl;
                delay();
            } else {
                cout << endl << endl << "Player 2 Won" << endl;
                delay();
            }
        }
    }

}


/* we are making a rock, paper, scissor game
0 = rock
1 = paper
2 = scissor

in rock and paper = paper wins
in paper and scissor = scissor wins
in rock and scissor = rock wins

choice c_choice
user    computer
0       0   = retry
0       1   = computer
0       2   = user
1       0   = user
1       1   = retry
1       2   = computer
2       0   = computer
2       1   = user
2       2   = retry

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_randon_number() // this will generate a random variable
{
    srand(time(NULL));
    return (rand() % 3);
}

// int generateRandomNumber(int n)
// {
//     srand(time(NULL));
//     return rand() % n;
// }
void who_wins(int choice, int c_choice)
{
    if (choice == 0 && c_choice == 1)
        printf("computer wins");
    else if (choice == 0 && c_choice == 2)
        printf("you wins");
    else if (choice == 1 && c_choice == 0)
        printf("you wins");
    else if (choice == 1 && c_choice == 2)
        printf("computer wins");
    else if (choice == 2 && c_choice == 0)
        printf("computer wins");
    else if (choice == 2 && c_choice == 1)
        printf("you wins");
    else
        printf("Draw... plz retry");
}

int main()
{
    int choice, c_choice;
    printf("enter the choice \n 0 = rock \n 1 = paper \n 2 = scissor \n");
    scanf("%d", &choice);
    c_choice = get_randon_number();
    printf("computer's choice is : %d\n", c_choice);
    who_wins(choice, c_choice);
    return 0;
}
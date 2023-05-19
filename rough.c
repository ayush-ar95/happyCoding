#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    printf("the random number between o and 5 is  %d\n",generateRandomNumber(5));
    return 0;
}
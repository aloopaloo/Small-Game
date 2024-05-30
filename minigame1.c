#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("The radnom numbers are %d:\n" ,number);
        {
            do
            {
                printf("Guess the number b/w 1 to 100\n");
                scanf("%d" ,&guess);
                    if (guess>number)
                    {
                        printf("Guess a lower number!");
                    }
                    else if (guess<number)
                    {
                        printf("Guess a higher number!");
                    }
                    else
                    {
                        printf("You guessed this in %d times", nguesses2);
                    }
                nguesses++;    
            } while (guess!=number);
            
        }
}
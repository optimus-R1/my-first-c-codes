#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("                                           ____________________________________\n");
	printf("                                          |              ***GG***              |\n                                          |            Guessing Game           |\n                                          |                                    |\n                                          |                                    |\n                                          |            LEVEL-MEDIUM            |\n                                          |                                    |\n                                          |Hint: The number is between 1 and 30| \n                                          |         you have 15 guesses        |\n                                          |____________________________________|\n");
	int secretNumber = 16;
	int guess;
	int guessCount = 0;
	int guessLimit = 5;
	int outOfGuesses = 0;
	while(guess != secretNumber && outOfGuesses == 0){
	    if(guessCount < guessLimit){
			printf("                                                  Enter secret Number: ");
		    scanf("%d", &guess);
		    guessCount++;
	    } else {
	       outOfGuesses = 1;
	    }
    }
    if(outOfGuesses == 1){
    	printf("\n\n\n                                                        Game Over\n\n\n");
	} else {
	    printf("\n\n\n                                                   ***congratulations***\n");
	    printf("                                                       ***You Win***\n\n\n\n\n\n\n");	
	}
}

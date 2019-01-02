#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//Constants
#define CARDS 52
#define SUITS 4

//Arrays
char card[CARDS] = {'2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A','2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A','2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A','2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A' };
char suit[SUITS] = { 'C', 'D', 'H', 'S' };


void main()
{
	//Variables
	int i, j, rs, rc;
	int players;
	int cardCount = 5;
	srand(time(NULL));
	printf("Welcome to 25! the suit types are as follows: Diamond(D), Hearts(H), Spades(S) and clubs(C) with a Trump(T) Card. when you have entered the number of players press enter to proceed. Enjoy!\n");


	//Player ask
	
	
	printf("How many players are there? (MIN 2)\n");
	scanf("%d", &players);
	
	/*
	//DEBUG
	printf("DEBUG %d\n", players);
	*/

	//Dealing of cards
	for (i = 1; i <= players; i++)
		
	{

		for (j = 1; j <= cardCount; j++)//Card selection

		{
			rs = (rand() % 3) + 1;
			rc = (rand() % 51) + 1;

			/*if (suit[rs] == rs)//repeat suit test
			{
				printf("");
			}//end

			else if (card[rc] == rc)//repeat card test
			{
				printf("");
			}//end*/
			if(card[rc] == 0)
			{
				printf("");
			}
			else
			{

				printf("player No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
				
			}
			card[rc] = 0;

		}//End of card selection
		printf("\n");

		if (i == players)//Trump card

		{
			rs = (rand() % 3) + 1;
			rc = (rand() % 12) + 1;
			
				

			printf("Trump card is %c of %c \n", card[rc], suit[rs]);
		}//End of trump
		printf("\n");

	}//End of dealing

}//end of main
	
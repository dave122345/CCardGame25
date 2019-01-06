#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//Constants
#define CARDS 52
#define SUITS 4

//Arrays
char card[CARDS] = {'2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K','A','2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A','2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A','2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A' };
char suit[SUITS] = { 'C', 'D', 'H', 'S' };


void main()
{
	//Variables
	int i, j, rs, rc;
	int players;
	int cardCount = 5;
	int p1Score, p2Score;
	srand(time(NULL));
	printf("Welcome to 25! the suit types are as follows: Diamond(D), Hearts(H), Spades(S) and clubs(C) with a Trump(T) Card.\n"); 
	printf("Format of play: when asked type the card you have as '2D' e.g. 5 of H is 5H\n");
	printf("When you have entered the number of players press enter to proceed.Enjoy!\n");
	
	//Player ask
	printf("How many players are there? (MAX 2)\n");
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

				if(card[rc] == 0)
				{
					rs = (rand() % 3) + 1;
					rc = (rand() % 50) + 1;
					//printf("DEBUG RRRPlayer No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
					printf("Player No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
				}
				else if (card[rc] == ' ')
				{
					rs = (rand() % 3) + 1;
					rc = (rand() % 50) + 1;
					//printf("DEBUG RRRPlayer No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
					printf("Player No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
				}
				else
				{

					printf("Player No. %d: Card number %d is %c of %c \n", i, j, card[rc], suit[rs]);
				
				}

			card[rc] = 0;

		}//End of card selection
		printf("\n");

			if (i == players)//Trump card

			{
				rs = (rand() % 3) + 1;
				rc = (rand() % 12) + 1;
			
			if (card[rc] == 0)//CHECK
			{
				rs = (rand() % 3) + 1;
				rc = (rand() % 51) + 1;
				//printf("DEBUG RRRTrump card is %c of %c \n", card[rc], suit[rs]);
				printf("Trump card is %c of %c \n", card[rc], suit[rs]);
			}
			else if (card[rc] == " ")
			{
				rs = (rand() % 3) + 1;
				rc = (rand() % 51) + 1;
				//printf("DEBUG RRRTrump card is %c of %c \n", card[rc], suit[rs]);
				printf("Trump card is %c of %c \n", card[rc], suit[rs]);
			}
			else
			{
				printf("Trump card is %c of %c \n", card[rc], suit[rs]);
			}
			}//End of trump
		printf("\n");

	}//End of dealing



	//Start of gameplay
		while (p1Score != 25 || p2Score != 25)
		{
			printf("");


		}

}//end of main
	
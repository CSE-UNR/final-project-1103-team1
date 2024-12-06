#include <stdio.h>

void userInput(char word[][CAP], int row);

void userInput(char word[][CAP], int row){
	switch(word[row][0]){
		case 'A':
			printf("Enter an adjective:\n");
			scanf("%s", word[row]);
			break;
		case 'N':
			printf("Enter a noun:\n");
			scanf("%s", word[row]);
			break;
		case 'V':
			printf("Enter a verb:\n");
			scanf("%s", word[row]);
			break;
	}
}

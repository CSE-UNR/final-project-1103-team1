// Skylar Goyer, Alina Walwyn, and Max Haubrich

#include <stdio.h>
#define FILENAME "madlib1.txt"
#define CAP 100

//Prototypes
void fileIO(FILE *flptr, char arr[][CAP], int *rows);
void readLine(FILE *flptr, char arr[][CAP], int *rows);
void userInput(char arr[][CAP],char word[][CAP], int row, int numCol);
void switchingArrays(int numRows, int numColumns, char arr[][CAP], char word[][CAP]);
void printArray(char word[][CAP], int row);

int main (){
	FILE *flptr;
	char arr[CAP][CAP];
	char word[CAP][CAP];
	int rows=0, columns=CAP;
	fileIO(flptr, arr, &rows);
	switchingArrays(rows, columns, arr, word);
	printArray(word, rows);
	return 0;
}

//Functions 
void fileIO(FILE *flptr, char arr[][CAP], int *rows){
	flptr = fopen(FILENAME, "r");
    	if (flptr == NULL){
        	printf("Can't open file.\n");
        	return;
    	}
    	readLine(flptr, arr, rows);
    	fclose(flptr);
}

void readLine(FILE *flptr, char arr[][CAP], int *rows){
	while (*rows < CAP && fgets(arr[*rows], CAP, flptr) != NULL){
    		int i = 0;
		while (arr[*rows][i] != '\0'){
    			i++;
		}
		if (i > 0 && arr[*rows][i - 1] == '\n'){
    			arr[*rows][i - 1] = '\0';  
		}
		(*rows)++;
	}
}

void userInput(char arr[][CAP],char word[][CAP], int row, int numCol){
	if(arr[row][1]=='\0'){
		switch(arr[row][0]){
			case 'A':
				printf("Please enter an adjective: ");
				scanf("%s", word[row]);
				break;
			case 'N':
				printf("Please enter a noun: ");
				scanf("%s", word[row]);
				break;
			case 'V':
				printf("Please enter a verb: ");
				scanf("%s", word[row]);
				break;
			default: 
				word[row][0] = arr[row][0];
		}
	} else {
		for(int i = 0; i < numCol; i++){
			word[row][i] = arr[row][i];
		}
	}
}

void switchingArrays(int numRows, int numColumns, char arr[][CAP], char word[][CAP]){
	for(int index = 0; index < numRows; index++){
		userInput(arr, word, index, numColumns);
	}
}

void printArray(char word[][CAP], int row){
	printf("%s", word[0]);
	for (int i = 1; i < row; i++){
		switch(word[i][0]){
			case '.':
			case ',':
			case '!':
				printf("%s", word[i]);
				break;
			default:
				printf(" %s", word[i]);
		}
	}
	printf("\n");
}

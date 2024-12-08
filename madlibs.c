// Skylar Goyer, Alina Walwyn, and Max Haubrich

#include <stdio.h>

#define FILENAME "madlib2.txt"
#define CAP 100

//prototypes
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
void userInput(char arr[][CAP],char word[][CAP], int row, int numCol){
	switch(arr[row][0]){
		case 'A':
<<<<<<< HEAD
			printf("Enter an adjective:\n");
			scanf(" %s", word[row]);
			break;
		case 'N':
			printf("Enter a noun:\n");
			scanf(" %s", word[row]);
			break;
		case 'V':
			printf("Enter a verb:\n");
			scanf(" %s", word[row]);
=======
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
>>>>>>> 927589cf0b937a4700f450bf4442d2d82da4318a
			break;
		default: 
			for(int jdex = 0; jdex < numCol; jdex++){

			word[row][jdex] = arr[row][jdex];
		}
	}
}

void fileIO(FILE *flptr, char arr[][CAP], int *rows) {
    	flptr = fopen(FILENAME, "r");
    	if (flptr == NULL) {
        	printf("Can't open file.\n");
        	return;
    	}
    	readLine(flptr, arr, rows);
    	fclose(flptr);
}

void readLine(FILE *flptr, char arr[][CAP], int *rows) {
//Collecting the strings and saving into array.
    	while (*rows < CAP && fgets(arr[*rows], CAP, flptr) != NULL) {
//Get rid of gross spacing by finding endline and terminating it.
    		int i = 0;
		while (arr[*rows][i] != '\0') {
    			i++;
		}
		if (i > 0 && arr[*rows][i - 1] == '\n') {
    			arr[*rows][i - 1] = '\0';  
		}
		(*rows)++;
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
				printf("%s", word[i]);
				break;
			default:
				printf(" %s", word[i]);
		}
	}
	printf("\n");
}

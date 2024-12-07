// Skylar Goyer, Alina Walwyn, and Max Haubrich

include <stdio.h>

#define FILENAME "madlib1.txt"
#define CAP 100

//prototypes
void userInput(char word[][CAP], int row);
void fileIO(FILE *flptr, char arr[][CAP], int *rows);
void readLine(FILE *flptr, char arr[][CAP], int *rows);
void switchingArrays(int numRows, int numColumns, char arr[][numColumns], char word[][numColumns]);
void printArray(char word[][CAP], int row);

int main (){
FILE *flptr;
	// Char (enter arguments for function calls); //should have a 2d array to store the whole paragraph 
// it might be helpful to have a counter that keeps track of what row the array is on– starts at zero and implements every time the program either reads from the file or gets input from the user //this could be included in the function with the switch cases?
	int counter = 0;
//To open files // (We’ll likely need to open files multiple times or in the function itself
//Reminder to self: while(fscanf()==1){ could be used later
	flptr=fopen(FILENAME, "r");
	If(flptr==NULL){
		printf("Can’t open file.\n");
		return 0;
	}
//Function calls
	fclose(flptr);

	Return 0;
}

//Functions 
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

void switchingArrays(int numRows, int numColumns, char arr[][numColumns], char word[][numColumns]){

	readLine(FILE *flptr, char arr[][CAP], int *rows);
	
	userInput(char word[][CAP], int row);
	
	for(int index = 0; index < numRows; index++){
		for(int jdex = 0; jdex < numColumns; jdex++){
			arr[index][jdex] = word[index][jdex];
	}
		}
}

void printArray(char word[][CAP], int row){
	for (int i = 0; i < rows; i++){
		printf("%s\n", word[i]);
	}
}

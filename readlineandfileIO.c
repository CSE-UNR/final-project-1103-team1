//Sky
#include <stdio.h>
#define FILENAME "madlib1.txt"
#define CAP 100

void fileIO(FILE *flptr, char arr[][CAP], int *rows);
void readLine(FILE *flptr, char arr[][CAP], int *rows);
void printArray(char word[][CAP], int row);

int main() {
    	FILE *flptr;
    	char arr[CAP][CAP];
    	int rows = 0;
    	fileIO(flptr, arr, &rows);
    	printArray(arr, rows);
    	return 0;
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

void printArray(char word[][CAP], int row){
	for (int i = 0; i < row; i++){
		printf("%s\n", word[i]);
	}
}

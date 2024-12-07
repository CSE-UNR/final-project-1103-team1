//this function is going to call the readline function, which has the whole plain madlib in there, then i will call the function with the switch statements to make the new edited madlib then it prints that

//override read array and put into print array

#include <stdio.h>
#define CAP 100
						       /*readline array*/         /*switch array*/
void switchingArrays(int numRows, int numColumns, char arr[][numColumns], char word[][numColumns]);

//main function and whatver is inbetween

void switchingArrays(int numRows, int numColumns, char arr[][numColumns], char word[][numColumns]){

	readLine(FILE *flptr, char arr[][CAP], int *rows);
	
	userInput(char word[][CAP], int row);
	
	for(int index = 0; index < numRows; index++){
		for(int jdex = 0; jdex < numColumns; jdex++){
			arr[index][jdex] = word[index][jdex];
	}
		}
}

// Skylar Goyer, Alina Walwyn, and Max Haubrich

include <stdio.h>

#define FILENAME "madlib1.txt"
#define CAP 100
//Should we have a define for columns? i was thinking that would be the “CAP” macro
//Might have to define madlib2.txt

//Prototypes
void userInput (char fig, char word[][cols]); //think we just need one char, may not even need it– will see
Void readLine(FILE *flptr, char arr[]); //reads file up to a user input and saves to array based on the lecture, i’m thinking we’ll have to adjust these and only connect with the file once like she advised
Char printString(char printingArray[]); //can call on readLine and then printf accordingly? – i was more thinking this would just be a general function to print a string to the terminal
//with these three we could get our five functions by making userInput into three separate if we can’t find anything else.
//i feel like we might need a function that will help us swap with the placeholders there

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
void userInput (char word[][cols]){
	char fig;
	fscanf("%c", &fig);
	switch(fig){
		case 'A’: 
			printf("Enter an adjective:\n");
			break;
		case ‘N’:
			printf("Enter a noun:\n");
			break;
		case ‘V’:
			printf("Enter a verb:\n");
			break;
	}
	scanf("%s", word[counter]); 
	//check syntax for this one – pointers to 2d arrays //like right here we could do a counter ++; and also add it to the function parameters
}

Void readLine(FILE *flptr, char *arr[][]){

}

Char printString(char printingArray[]){

	return (input return here);
}


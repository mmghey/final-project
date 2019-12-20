// intial C source that for doing the final project (playing MIDI files)
/// by Mohammad Mahdi Gheysari / FUM / 2019

#include<stdio.h>
#define NOTES_ADD 2
void getData (void);
char names[200][10];
double fres[200];

int main (void) {
	getData();
}
void getData (void) {
	//Define variables
	int i;
	FILE *notes;
	notes = fopen("C:/Users/gheys/Documents/GitHub/final-project/notes.txt", "r");

	//Get frequencies from the file
	for(i = 0 ; i < 108 ; i++) {
		fscanf(notes, "%s",names[i]);
	}
	for(i = 0 ; i < 108 ; i++) {
		fscanf(notes, "%lf", &fres[i]);
	}
	fclose(notes);

	/*
	//Test the function
	for(i = 0 ; i < 108 ; i++) {
		printf("%s\t%f\n",names[i], fres[i]);
	}
	*/
}


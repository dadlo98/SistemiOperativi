#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	// ESERCIZIO 2:

	// scrivere il seguente programma:

	// legge e salva (in memoria) tutti i dati provenienti da stdin fino a EOF

	// poi scrive su stdout i dati accumulati ma all'incontrario (dall'ultimo al primo)

	// suggerimenti: utilizzare getchar(), calloc(), realloc()

	char c;
	unsigned int length = 1;
	char * array_char = calloc(length, sizeof(char));
	int i= 0;

	while ((c=getchar())!=EOF){

		array_char[i]=c;
		length++;
		array_char = realloc(array_char,length * sizeof(char));
		i++;

	}

	printf("\nEcco il testo che hai inserito:\n");

	for(int i=0; i<length; i++){
		printf("%c", array_char[i]);
	}

	printf("\nEcco il testo che hai inserito, ma scritto all'incontrario ora:\n");

	for(int i=length-1; i>=0; i--){
		printf("%c", array_char[i]);
	}

	printf("\n\n");

	return 0;
}

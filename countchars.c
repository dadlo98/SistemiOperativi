#include <stdio.h>


int main(int argc, char *argv[]) {

	// ESERCIZIO 1:
	// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' ' (spazio)
	// dopo EOF, scrive su stdout il numero di occorrenze di ciascuno dei tre caratteri sopra

	int c;
	unsigned long counter1 = 0; //counter per \n
	unsigned long counter2 = 0; //counter per \t
	unsigned long counter3 = 0; //counter per spazio

	while((c=getchar())!= EOF){

		if(c=='\n')
			counter1++;

		if(c=='\t')
			counter2++;

		if(c==' ')
			counter3++;


	}

	printf("\nho letto %lu caratteri di tipo \\n \n", counter1);
	printf("\nho letto %lu caratteri di tipo \\t \n", counter2);
	printf("\nho letto %lu spazi \n", counter3);

	return 0;
}

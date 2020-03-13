#include <stdio.h>
/*
 * ex1.c
 *
 *  Created on: 13 mar 2020
 *      Author: utente
 */

int main(int argc, char **argv) {

	int a,b;
	int tot;
	int res;
	char op;


		printf("scrivi l'operazione da svolgere e due numeri interi: ");

		res = scanf("%c %d %d", &op, &a, &b);

		printf("scanf ha restituito: %d (numero di valori letti)\n", res);

		if (res == EOF) {
			printf("EOF! bye!");
			return 1;
		}

		if(op=='+'){
			tot = a+b;
		}

		if(op=='-'){
			tot = a-b;
		}

		if(op=='*'){
			tot = a*b;
		}


		if(op=='/'){
			tot = a/b;
		}

		printf("il risultato è= %d", tot);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
 * ex2.c
 *
 *  Created on: 20 mar 2020
 *      Author: utente
 */

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}

int * reverse_int(int * array_int, unsigned int i, unsigned int j){
	while (i<j){
		swap(&array_int[i]= &array_int[j]);
		i++;
		j--;
	}

	return array_int;
}


int * complete_reverse_int(int * array_int, unsigned int array_len){
	return reverse_int(array_int,0,array_len-1);
}

char * concat_arrays(char * array1, int array1_dimension, char * array2, int array2_dimension) {

	// ESERCIZIO: seguire le specifiche e completare la funzione
	unsigned int length_tot= array1_dimension+array2_dimension;
	int i,j;

	// allocare lo spazio per un new_array, numero di celle = array1_dimension + array2_dimension

	char * new_array = calloc(length_tot,sizeof(char));
	if (new_array==NULL) {

		perror("malloc ha ritornato errore");

		return 0;
	}

	// copiare array1 in new_array, a partire da nuovo_array[0]

	for(int i=0; i<array1_dimension; i++){
		new_array[i]=&array1[i];
	}

	// copiare array2 in new_array, a partire da nuovo_array[array1_dimension]

	for(int j=array1_dimension; i<array2_dimension; j++){
			new_array[j]=&array2[j-array1_dimension];
		}

	// restituire new_array

	return new_array;

}


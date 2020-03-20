#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
 * bubblesort.c
 *
 *  Created on: 20 mar 2020
 *      Author: utente
 */

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void bubble_sort(int * array, int array_dimension) {

	// ESERCIZIO: implementare bubble sort (pseudocodice riportato sotto)

/*

procedure bubbleSort(A : list of sortable items)
    n := length(A)
    repeat
        newn := 0
        for i := 1 to n - 1 inclusive do
            if A[i - 1] > A[i] then
                swap(A[i - 1], A[i])
                newn := i
            end if
        end for
        n := newn
    until n ≤ 1
end procedure
*/
	int i;
	int n = array_dimension;
	int newn =  0;
	while(n > 1){
		for(int i=1; i<n; i++){
			if (array[i-1]>array[i]){
				swap(&array[i-1],&array[i]);
				newn = i;
			}
		}
		n = newn;
	}
}

int main(int argc, char *argv[]){
	int i;
	int bubble [] = {5,6,9,2,3,1,6,7};
	for(int i=0; i<8; i++){
		printf("bubble[%d]=%d \n", i, bubble[i]);
	}
	bubble_sort(bubble,8);
	printf("Ecco l'array ordinato:\n");
	for(int i=0; i<8; i++){
			printf("bubble[%d]=%d \n", i, bubble[i]);
		}

	return 0;

}

#include "sorting.h"

int* bubble_sort(int *list, int length){
	int i, j, tmp;
		for (i = 0; i < length; i++){
			for (j = 0; j<length-1; j++){
				if (list[j] > list[j + 1]){
					tmp = list[j+1];
					list[j+1] = list[j];
					list[j] = tmp;
				}
			}
		}
	return list;
}

int* insertion_sort(int *list, int length){
	int i, j, tmp;
	for (i = 1; i < length; i++){
		j = i;
		while (j > 0 && list[j-1] > list[j]){
			tmp = list[j];
			list[j] = list[j - 1];
			list[j-1] = tmp;
			j--;
		}
	}
	return list;
}
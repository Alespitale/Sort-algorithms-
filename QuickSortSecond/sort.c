#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

static unsigned int partition(int a[], unsigned int izq, unsigned int der) {
unsigned int piv= izq;
unsigned int i=izq+1;
unsigned int j=der;
	while (goes_before(i,j)){
		if (goes_before(a[i],a[piv])){i=i+1;}
		else if (goes_before(a[piv],a[j])){j=j-1;}
		else if (goes_before(a[piv],a[i]) && (goes_before(a[j],a[piv]))){swap(a,i,j);}
	}		
	swap(a,piv,j);
	piv=j;
	return piv;
}

static void quick_sort_rec(int a[], unsigned int izq, unsigned int der) {
unsigned int piv; 
	if (der>izq){
		piv= partition(a,izq,der);
		if (piv==0){
			quick_sort_rec(a, piv+1,der);
		}else{
        quick_sort_rec(a,izq,piv-1);
        quick_sort_rec(a,piv+1,der);
		}    
	}
}

void quick_sort(int a[], unsigned int length) {
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}



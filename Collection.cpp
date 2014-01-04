#include "stdafx.h"
#include "Collection.h"
#include <stdio.h>
#include <algorithm>

Collection::Collection(void) {
}

Collection::~Collection(void) {
}

bool Collection::addValue(int value) {
	printf("adding value %d - ", value);
	
	// Sprawdzanie czy wartosc sie powtarza.
	bool checked = true;
	for (int i = 0; i < list.size(); i++) {
		if (list[i] == value) {
			checked = false;
		}
	}

	if (checked) {
		list.push_back(value); // Dodawanie elementu.
		printf("success\n");
	} else {
		printf("failure\n");
	}

	return checked;
}

void Collection::printMe() {
	int size = list.size();
	printf("values (size: %d): ", size);
	for (int i = 0; i < list.size() - 1; i++) {
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[list.size() - 1]);
}

int Collection::sortMe() {
	printf("sorting... \n");
	int n = list.size();
	for (int passes = 0; passes < n - 1; passes++) {
		for (int j = 0;  j < n - passes - 1;  j++) {
			if (list[j] > list[j+1]) {
				swap(list[j], list[j + 1]);
			}
		}
	}
	return 0;
}

/*
 //Bubble Sorting begins
 for (int passes = 0;  passes < array_size - 1;  passes++)
 {
  for (int j = 0;  j < array_size - passes - 1;  j++)
  {
   if (x[j] > x[j+1])
   {
    hold = x[j];
    x[j] = x[j+1];
    x[j+1]=hold;

   }
  }
 }  //Bubble Sorting finished
 */



/*
procedure bubbleSort( A : lista elementów do posortowania )
  n = liczba_elementów(A)
   do
    for (i = 0; i < n-1; i++) do:
      if A[i] > A[i+1] then
        swap(A[i], A[i+1])
      end if
    end for
    n = n-1
  while n > 1
end procedure
*/
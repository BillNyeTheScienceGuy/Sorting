#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "shell.h"

#define SIZE 1000

using namespace std;

void randomArray(int a[], size_t n) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand()%1000;
	}
}

void printArray(int a[], size_t n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
    int myArray[SIZE];

    randomArray(myArray, SIZE);
    printArray(myArray, SIZE);

    //bubbleSort(myArray, SIZE);
    //selectionSort(myArray, SIZE);
    //insertionSort(myArray, SIZE);
    shellSort(myArray, SIZE);

    printArray(myArray, SIZE);
    return 0;
}

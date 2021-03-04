#include "myFunctions.h"

void myTestFunction(int myTestVar) {
	cout << "passed by value variable" << myTestVar << endl;
}

void changeAnElement(int myArray[], int newValue, int index ) {
	//
}

void reOrderArray(int myArray[]) {
	// reorders by going over the first 15 and changing them with the last 15
	int auxiliary = 0;
	for (int i = 0; i < 15; i++) {
		auxiliary = myArray[i];
		myArray[i] = myArray[29 - i];
		myArray[29 - i] = auxiliary;
	}
}



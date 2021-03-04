#include "myFunctions.h"

void myTestFunction(int myTestVar) {
	cout << "passed by value variable" << myTestVar << endl;
}

void changeAnElement(int myArray[], int* newValue, int* index) {
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

void changeYourFavouriteIndex(int* yfi) {
	cout << "What would you like your favourite index to be?";
	cin >> *yfi;

}

void calculateSum(int myArray[], int &totalSum) {
	// calculate sum
	//for loop to calculate sum of all elements in the array
	int sum = 0;
	for (int i = 0;i < 30;i++) {		
		sum = sum + myArray[i];
	}
	cout << "\nTotal of array from new func = " << sum << endl;
	totalSum = totalSum + sum;
}

void calculateSumWithPointer(int myArray[], int* totalSum) {
	// calculate sum
	//for loop to calculate sum of all elements in the array
	int sum = 0;
	for (int i = 0;i < 30;i++) {
		sum = sum + myArray[i];
	}
	cout << "\nTotal of array from new func = " << sum << endl;
	*totalSum = *totalSum + sum;
}




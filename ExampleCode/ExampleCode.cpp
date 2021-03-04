// ExampleCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main()
{   
	int myArray[30]; //create array
	int totalSum = 0;	
	int* totalSumPtr = &totalSum;
	int chooser = 0; //used for choose statement and auxillary set up for reorder
	int yourFavouriteIndex = 0;
	int* yfi = &yourFavouriteIndex;

	//for loop to iterate through array and populate 
	for (int myVar = 0; myVar < 30; myVar++) {
		myArray[myVar] = myVar; //
	}

	//while allows continual running of the program until user chooses 4
	while (chooser != 4) {
		//ask user for input and store them in operation int
		cout << "your favourite index is currently: " << yourFavouriteIndex << endl;
		cout << "your favourite value is therefore: " << myArray[yourFavouriteIndex] << endl;
		cout << "What would you like to do?" << endl << " 1 for Reorder \n 2 for Show array content \n 3 for Total of Array \n 4 for Quit \n 5 to output element 3 \n 6 to change your favourite index" << endl;
		

		cin >> chooser;

		switch (chooser) {
		case 1:
			
			reOrderArray(myArray);
			break;

		case 2:
			// output to the screen
			//for loop to output all elements in the array
			cout << "The contents of Array are: ";
			for (int i = 0;i < 30;i++) {
				cout << myArray[i] << " ";
			}		

			break;

		case 3:
			//calculateSum(myArray, totalSum);
			calculateSumWithPointer(myArray, totalSumPtr);
			break;

		case 4:
			// quit
			cout << "quitting" << endl;
			break;
		
		case 5:			
			//changeAnElement(myArray, 500, 4);
			break;
		
		case 6:
			changeYourFavouriteIndex(yfi);
			break;

		default:
			// message to indicate that the code hasnt worked
			cout << "You have not chosen a number between 1 and 4" << endl;
			chooser = 4;
		}
	}
	cout << totalSum;
}
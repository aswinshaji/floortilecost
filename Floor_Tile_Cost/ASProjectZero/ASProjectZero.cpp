// ASProjectZero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Aswin Shaji COSC 1436-73426

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double tileSize, tileCost, floorLength, floorWidth; //floorLength and floorWidth are in feet while tileSize is in inches. 1 feet = 12 inches
	int numberOfCutTiles = 0;
	int numberOfUncutTiles = 0;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Hello World!\n"; 
	cout << "My name is Aswin Shaji" << endl;
	// User input
	cout << "Enter the tile size in inches:\n";
	cin >> tileSize;
	cout << "Enter the cost of each tile in dollars and cents:\n";
	cin >> tileCost;
	cout << "Enter the length of the floor in feet:\n";
	cin >> floorLength;
	cout << "Enter the width of the floor in feet:\n";
	cin >> floorWidth;

	//Programming and displaying the output of the user
	cout << "\nArea of the floor to be tiled (in square feet):\n" << floorLength * floorWidth << " square feet\n";
	for (int i = 0; i <= floorWidth * 12; i = i + tileSize)
	{
		for (int j = 0; j <= floorLength * 12; j = j + tileSize)
		{
			numberOfUncutTiles = numberOfUncutTiles + 1;
		}
		numberOfCutTiles = numberOfCutTiles + 1;
	}
	numberOfCutTiles = numberOfCutTiles + ((floorLength * 12) / tileSize) + 1;
	cout << "\nTotal number of tiles required = " << numberOfCutTiles + numberOfUncutTiles << " tiles\n";
	cout << "\nTotal cost = $" << (numberOfCutTiles + numberOfUncutTiles) * tileCost;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

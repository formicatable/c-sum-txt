#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int sum, number;
	string fileName;
	
	// Define the file stream object
	ifstream inputFile;
	
	// Ask the user for the name of the file
	cout << "Enter the name of the file :" << fileName << endl;
	cin >> fileName;
	
	// Open the input file
	inputFile.open(fileName);
	
	// If the input file could not be read
	if (inputFile.fail())
		cout << "Could not access file." << endl;
	else
	{ // continue with program
	}		
	
	// Reading the numbers from the input file
	while (inputFile >> number)
		sum+=number;
	
	// Write the sum to the output file
	ofstream outputFile;
	outputFile.open("sum.txt");

	outputFile << sum << endl;
	
	// Close the input and output files
	
	inputFile.close();
	outputFile.close();
	
  return 0;
}

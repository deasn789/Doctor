// Nathan
// CS142
// This program allows for a user to enter the number of doctor files that they want to record and stores them in a vector
// it then allows the user to print out all the records or compare if two files are of the same doctor via using the overload
// for the operator ==
// It also allows for the user to make a copy of two a file using the copy constructor and the new copy is added to the end of the vector
// via pushback
// Finally it gives the user the option of exiting the program.
// Extra functions were made and placed into the files named "ExtraFunctions"
#include "employee.h"
#include "SalariedEmployee.h"
#include "Doctor.h"
#include "ExtraFunctions.h"
#include <iostream>
#include <vector>


int main()
{
	int files;
	std::cout << "How many Doctor files would you like to enter?" << std::endl;
	std::cin >> files;
	std::vector<Doctor> vecDoc(files);
	inputNames(vecDoc, files);
	int option = 0;
	do
	{
		std::cout << "\n1. Display all files\n" << "2. Compare two files\n" << "3. Make a copy of a doctor's file\n" << "4. Exit\n";
		validInput(option, 4, 1);
		int compare01, compare02, copyNum;
		switch (option)
		{
		case 1:
			printVec(vecDoc, files);
			break;
		case 2:
			std::cout << "Enter first file number to compare\n";
			validInput(compare01, files, 1);
			std::cout << "Enter second file number to compare\n";
			validInput(compare02, files, 1);
			if (vecDoc[compare01 -1] == vecDoc[compare02 -1])
			{
				std::cout << "These files are of the same doctor.\n";
			}
			else
			{
				std::cout << "These files are not of the same doctor.\n";
			}
			break;
		case 3:
			std::cout << "Enter the number of the Doctor file to make a copy of:\n";
			validInput(copyNum, files, 1);
			Doctor CopyDocFile(vecDoc[copyNum - 1]);
			vecDoc.push_back(CopyDocFile);
			files++;
			std::cout << "A copy of that doctor's file has been made and added to the end.\n";
			break;
		}
	} while (option != 4);

}





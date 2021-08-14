
 // preprocessor directives
#include "Choices.h"
#include "Read_file.h"
#include <iostream>
#include <thread>

// using standard template library
using namespace std;



// function to display/parse user input
int Choices::pickAnOption()
{
	cout << "\n\t\t  [][][] TOOLKIT [][][]\n\n";
	cout << "  Choose a function:\n";
	cout << "\t1)  READ A FILE\n";
	cout << "\t2)  [] [] [] [] [] [] [].\n";
	cout << "\t3)  [] [] [] [] [] [] [].\n";
	cout << "\t4)  [] [] [] [] [] [] [].\n";
	cout << "\t5)  [] [] [] [] [] [] [].\n";
	cout << "\t6)  EXIT.\n\n";
	
	cin >> tentativeChoice;		// get user input and assign value to var
	return tentativeChoice;
}

int Choices::isOptionValid(int tentativeChoice)
{
	if (tentativeChoice == 6) // game over
	{
		system("CLS");
		gameLoopOn = false;
		cout << "\n\n\tExiting Song Seeker...\n\n";
		exit(0);						// exit program
	}
	// if user choice is NOT 1', do this...
	else if (~tentativeChoice == 1)
	{
		system("CLS");
		cout << "\n\n";
		cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n";
		cout << "\tinvalid selection.  try again...\n";
		cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n\n";
		cin.clear();															// clear buffer of any content
		cin.ignore(numeric_limits<streamsize>::max(), '\n');					// clear buffer of any content
		tentativeChoice = 0;													// reset value of var
		gameLoopOn = true;
		system("pause");
	}
	else
	{
		setUserChoice(p_choice);
		gameLoopOn = true;
	}
	return tentativeChoice;
}


// function to process user's choice from previous function
void Choices::branchChoice(int* p_choice)	
{
	// switch case to control program flow
	switch (*p_choice)
	{
    case 1:	// display artist.song
    {
      system("CLS");
      cout << "\n\n\tPLAYLIST DIRECTORY\n\n";
      Read_file file;
      file.readFile();								// invoke function to display contents

      cout << "\n\n";
      cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n";
      cout << "  END OF DIRECTORY CONTENTS...\n";
      cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n\n";
      system("pause");
      system("CLS");

      break;
    }
    case 2:	// display artists
    {
      break;
    }
    case 3:	// display all songs
    {
      break;
    }
    case 4:	// Find songs by artist
    {
      break;
    }
    case 5:	// search for artists, based on a song query
    {
      break;
    }
    default:	// if user inputs inappropriate content, do this...
	{
		system("CLS");
		cout << "\n\n";
		cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n\n";
		cout << "\n\tYou have entered invalid output, please try again...\n\n";
		cout << "  [][][][][][][][][][][][][][][][][][][][][][][][][]\n\n";
		setUserChoice(0);	// reset value of private class var
		break;
	}
	}
}

// public member function to retrieve the value of a private property
int Choices::getUserChoice()
{
	return m_user_choice;  // returns the value of the private property
}

// public member function to assign the value of an input parameter to a private property
void Choices::setUserChoice(int* p_choice)		// const pointer parameter
{
	int m_user_choice = *p_choice;							// assign dereferenced value of argument to private class var
}

// preprocessor directives
#pragma once

class Choices
{
public:
	int tentativeChoice = 0;	// declare/define global variable
	int& solidChoice = tentativeChoice;
	int* p_choice = &solidChoice;
	bool gameLoopOn = false;
	int pickAnOption();
	int isOptionValid(int);
	void branchChoice(int*);		// pointer parameter

	int getUserChoice();
	void setUserChoice(int*);		// pointer parameter

private:
	int m_user_choice = 0;
};


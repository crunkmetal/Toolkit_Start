/*
    WORDBOX
 */
#include <iostream>
#include <string>
#include <thread>
#include "Choices.h"

using namespace std;



int main()
{
    Choices branch;
    do
    {
        branch.pickAnOption();
        branch.isOptionValid(branch.tentativeChoice);
        branch.branchChoice(branch.p_choice);

    } while (branch.gameLoopOn == true);
    

    return 0;
}


#include "Read_file.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <chrono>
#include <string>   // for getline

using namespace std;

void Read_file::readFile()    // TODO: add pointer parameter to ifstream file()
{
    ifstream file("library.txt", ios::in);
    if (file.is_open())
    {
        string word;
    	while( getline( file, word ) )
        {
            cout << "\t" << word << "\t";
            chrono::milliseconds dura(10);
            this_thread::sleep_for(dura);
            system("CLS");
        }
        file.close();
    }
    else
    {
        cout << "\n  File failed to open.\n\n";
        system("pause");
        exit(0);
    }
   
}

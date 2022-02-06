// Dev-C++ 5.11
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()
{
	srand (time(NULL));
	const unsigned short int numOfSign = 25000;
	char sign;
    fstream file;
    
    // fileA
    file.open("fileA.txt", ios::out);
    for (int i = 0; i < numOfSign; i++) {
    	sign = rand() % 128 + 32;
		if (static_cast<unsigned short int>(sign) == 127) file << endl;
		else file << sign;
	}
    file.close();
    
    // fileB
    file.open("fileB.txt", ios::out);
    for (int i = 0; i < numOfSign; i++) {
		sign = rand() % 128 + 32;
		if (static_cast<unsigned short int>(sign) == 127) file << endl;
		else file << sign;
	}
    file.close();
    
    // fileC
    file.open("fileC.txt", ios::out);
    for (int i = 0; i < numOfSign; i++) {
		sign = rand() % 128 + 32;
		if (static_cast<unsigned short int>(sign) == 127) file << endl;
		else file << sign;
	}
    file.close();
    
    // fileD
    file.open("fileD.txt", ios::out);
    for (int i = 0; i < numOfSign; i++) {
		sign = rand() % 128 + 32;
		if (static_cast<unsigned short int>(sign) == 127) file << endl;
		else file << sign;
	}
    file.close();
}

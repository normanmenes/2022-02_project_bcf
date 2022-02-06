// Dev-C++ 5.11
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;


void generator_file(char* fileName) {
    const unsigned short int numOfSign = 25000;
    char sign;
    fstream file;
    
    file.open(fileName, ios::out);
    for (int i = 0; i < numOfSign; i++) {
    	sign = rand() % 128 + 32;
    	if (static_cast<unsigned short int>(sign) == 127) file << endl;
    	else file << sign;
    }
    file.close();
}


int main()
{
    srand (time(NULL));
    
    // fileA ... fileD
    generator_file("fileA.txt");
    generator_file("fileB.txt");
    generator_file("fileC.txt");
    generator_file("fileD.txt");
    
    return 0;
}

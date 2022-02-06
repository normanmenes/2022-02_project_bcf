#include <iostream>
#include <fstream>          // .open()  --> otwieranie plik�w
#include <filesystem>       // filesystem
#include <string>           // getline()
#include <conio.h>          // _getch()
#include "pch.h"            // GTest

using namespace std;
namespace fs = filesystem;

using namespace std;

void main_function (char* fileName)
{   
    setlocale(LC_ALL, "");                                  // znaki PL
    unsigned int count_numOfLines = 0;                      // licznik linijek
    unsigned int count_numOfFiles = 0;                      // licznik plik�w

    for (fs::recursive_directory_iterator i("."), end; i != end; ++i) {
        if (!is_directory(i->path())) {
            count_numOfLines += numOfLines(i->path());       // liczy liczb� linijek
            count_numOfFiles++;                              // liczy liczb� plik�w
        }
    }

    // odejmowanie policzonych linijek z programu wykonuj�cego to zadanie
    count_numOfLines -= numOfLines(fileName);
    count_numOfFiles--;

    // wynik programu
    cout << "liczba wszystkich linijek w plikach folderu rekursywnego: " << count_numOfLines << endl;
    cout << "liczba wszystkich plik�w w folderze rekursywnym: " << count_numOfFiles << endl << endl;
}


/*****************************************************************************
            FUNKCJA ZWRACAJ�CA LICZB� LINII W KA�DYM PLIKU
 * do funkcji przekazywany jest 1 argument:
   - pathFile - �cie�ka do sprawdzanego pliku
 * funkcja mo�e r�wnie� wy�wietla� liczb� linijek w ka�dym pliku z osobna

*****************************************************************************/
unsigned int numOfLines(fs::path pathFile) {
    fstream file;
    string line;
    unsigned int count = 0;

    // cout << pathFile << endl;                            // �cie�ka pliku
    file.open(pathFile, ios::in);
    while (getline(file, line)) {
        count++;
    }
    file.close();

    // cout << "linijki w pliku: " << count << endl << endl;
    return count;
}

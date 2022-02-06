#include <iostream>
#include <conio.h>          // _getch()
#include "pch.h"            // GTest

/**********************************************************
                INFORMACJA DO TESTÓW
 Zastosowano w testach format œcie¿ki, który nie przechodzi
   w³aœciwie testu z poziomu Lokalnego debugera w VS, lecz
   jest w³aœciwy przy uruchomieniu skompilowanego programu
   przez program *.exe

**********************************************************/
TEST(LinesInFile, test_numOfLines) {
    EXPECT_EQ(numOfLines("test_files/fileA.txt"), 213);
    EXPECT_EQ(numOfLines("test_files/fileB.txt"), 198);
    EXPECT_EQ(numOfLines("test_files/dir/fileC.txt"), 209);
    EXPECT_EQ(numOfLines("test_files/dir/folder/fileD.txt"), 233);
}

int main(int argc, char* argv[])
{
    main_function(argv[0]);                     // podstawowe dzia³anie programu - przekazywana jest do funkcji nazwa programu

    // uruchamianie testów
    std::cout << "Naciœnij dowolny klawisz, by przeprowadziæ test...\n";
    _getch();
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    _getch();
    return 0;
}
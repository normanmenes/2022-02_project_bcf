# BCF zadanie rekrutacyjne - Menes Norman
url: [https://github.com/normanmenes/2022-02_project_bcf](https://github.com/normanmenes/2022-02_project_bcf) <br />


## Uruchamianie programu

Pobierz wszystkie pliki programu (archiwum SFX): [download](https://github.com/normanmenes/2022-02_project_bcf/releases/download/release_1.0/2022-02_project_bcf_v1.0.exe) lub całą zawartość katalogu: [/Release](https://github.com/normanmenes/2022-02_project_bcf/tree/main/Release/)<br />
Uruchom program: [2022-02_project_bcf.exe](https://github.com/normanmenes/2022-02_project_bcf/tree/main/Release/2022-02_project_bcf.exe) <br />


## Treść zadania
Create the application that will analyze and show statistics of specified directory that will handle recursive directories. It should print number of files and total number of lines (might as well count non-empty and empty lines). Provide unit tests for solutions.- Application should use multithreading (keep in mind system limitations, you might need to control number of concurrent calls, e.g., use thread pool).
- Use std::filesystem
- Use GTest for Unit Tests
- As a bonus, you could also count words and letters and provide performance benchmarks (e.g., measure the impact of using the different number of threads)


## Podstawowe funkcje i zmienne

+ **funkcja "main"** - uruchamia funkcję "main_function", a następnie testy jednostkowe

+ **funkcja "main_function"** - uruchamia funkcję zawierającą główne działanie programu (gdyby nie test, byłaby to funkcja główna)
+ **zmienna "count_numOfLines"** - zapisuje zsumowane liczby linijek z kolejnych plików
+ **zmienna "count_numOfFiles"** - licznik plików

+ **funkcja "numOfLines"** - funkcja zliczająca liczbę linijek w pliku z przekazaną do niego ścieżką jako argument. Zwraca liczbę linijek w danym pliku


## Działanie programu

Program otwiera wszystkie pliki znajdujące się w folderze z uruchomionym programem, a także w ich subfolderach (recursive directories). <br />
pętla { <br />
	Funkcja *"numOfLines"* zwraca wartość liczby linijek w pliku z przekazaną do niego ścieżką jako argument. Zwrócona wartość dodawana jest do zmiennej *"count_numOfLines"*. <br />
	Następuje inkrementacja zmiennej *"count_numOfFiles"* liczącej liczbę plików. <br />
}

Program zliczył również wartości z programu realizującego to zadanie. Po przeliczeniu wartości linijek i liczby plików nastąpi ponowne zliczenie liczby linijek tego programu i odjęcie od zmiennej *"count_numOfLines"*. <br />
Program przekazuje do funkcji *"numOfLines"* swoją pełną nazwę i zwróconą wartość odejmuje ze zmiennej *"count_numOfLines"*. <br />
Następuje dekrementacja zmiennej *"count_numOfFiles"* liczącej liczbę plików. <br />

Na zakończenie uruchamiany jest test sprawdzający poprawność zwracanych wartości przez funkcję *"numOfLines"*. Pliki testowe zostały wygenerowane za pomocą programu [test_file_generator](https://github.com/normanmenes/2022-02_project_bcf/blob/main/test_file_generator.cpp), a liczba linijek w plikach testowych została sprawdzona w *Notepad++ v8.1.9.3*.


## Parametry techniczne

**OS:** Windows 10 <br />
**Standard języka:** C++17 <br />
**Platforma:** Visual Studio 2019 (v142) <br />

## Autor rozwiązania
Norman Menes, Poznań <br />
dla Bright Coders' Factory Opole 

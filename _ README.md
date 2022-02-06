# BCF zadanie rekrutacyjne - Menes Norman

## Uruchamianie programu

Strona: [https://github.com/normanmenes/2022-02_project_bcf](https://github.com/normanmenes/2022-02_project_bcf)
Pobierz całą zawartość katalogu: /Release
Uruchom: /Release/2022-02_project_bcf.exe
Katalog: /Release/test_files zawiera pliki niezbędne do przeprowadzenia prawidłowych testów


## Podstawowe funkcje i zmienne

+ **funkcja "main"** - uruchamia funkcję "main_function", a następnie testy jednostkowe

+ **funkcja "main_function"** - uruchamia funkcję zawierającą główne działanie programu (gdyby nie test, byłaby to funkcja główna)
+ **zmienna "count_numOfLines"** - zapisuje zsumowane liczby linijek z kolejnych plików
+ **zmienna "count_numOfFiles"** - licznik plików

+ **funkcja "numOfLines"** - funkcja zliczająca liczbę linijek w pliku z przekazaną do niego ścieżką jako argument. Zwraca liczbę linijek w danym pliku

## Działanie programu

Program otwiera wszystkie pliki znajdujące się w folderze z uruchomionym programem, a także w ich subfolderach (recursive directories).
pętla {
	Funkcja *"numOfLines"* zwraca wartość liczby linijek w pliku z przekazaną do niego ścieżką jako argument. Zwrócona wartość dodawana jest do zmiennej *"count_numOfLines"*.
	Następuje inkrementacja zmiennej *"count_numOfFiles"* liczącej liczbę plików.
}

Program zliczył również wartości z programu realizującego to zadanie. Po przeliczeniu wartości linijek i liczby plików nastąpi ponowne zliczenie liczby linijek tego programu i odjęcie od zmiennej *"count_numOfLines"*.
Program przekazuje do funkcji *"numOfLines"* swoją pełną nazwę i zwróconą wartość odejmuje ze zmiennej *"count_numOfLines"*.
Następuje dekrementacja zmiennej *"count_numOfFiles"* liczącej liczbę plików.

Na zakończenie uruchamiany jest test sprawdzający poprawność zwracanych wartości przez funkcję *"numOfLines"*. Pliki testowe zostały wygenerowane za pomocą programu *"test_file_generator.exe"*, a liczba linijek w plikach testowych została sprawdzona w *Notepad++ v8.1.9.3*.

## Parametry techniczne

**OS:** Windows 10
**Standard języka:** C++17
**Platforma:** Visual Studio 2019 (v142)

## Autor rozwiązania
Norman Menes, Poznań
dla Bright Coders' Factory Opole

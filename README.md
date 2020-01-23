# Projekt realizowany w ramach przedmiotu 'Analiza Algorytmów'
#### Temat projektu: Plan studiów
#### Autor: Adrian Nadratowski

## O strukturze projektu i generowanym programie: 
- Pliki nagłówkowe znajdują się w folderze `include/`, kod źródłowy znajduje się w folderze `src/`
- W folderze `docs/` znajdują się dwa pliki .pdf - dokumentacja wstępna i końcowa projektu oraz plik .xslx, w którym
  analizie poddane zostały wyniki testów wydajności algorytmu.
- W folderze `data/`, w plikach 'test*.txt' znajdują sie przykładowe dane wejściowe dla programu oraz narysowany graf 
  reprezentujący jeden z proponowanych zestawów danych
- W podfoledrach folderu `/data` - katalogi `solutions/` i `results/` znajdują się przykładowe wyniki działania programu - odpowiednio: znalezione sekwencje przedmiotów oraz wyniki testów wydajnościowych algorytmu  
- Projekt można skompilować z wykorzystaniem pliku Makefile - polecenie `make all` 
  lub poleceniami: `cmake .` - wygenerowanie plików do budowy projektu,  `cmake --build .` - budowa projektu
- Wygenerowany w głownym katalogu program (o nazwie 'AAL') można uruchomić w trzech trybach:
  - `./AAL -m 1` - uruchomi program w trybie wczytania danych ze standardowego strumienia wejścia. Do programu można przekierować
  dane z pliku (przykładowe zestawy danych w plikach data/test*.txt) lub wpisać dane ręcznie, podając w pierwszej kolejności
  rozmiar grafu, a następnie, w każdej linii zależność między dwoma przedmiotami. Wczytywanie danych można zakończyć wprowadzając 
  dowolną literę/znak inny niż cyfra. Wynikiem działania programu w tym trybie jest uporzadkowana według podanych kryteriów
   (zależności) sekwencja przedmiotów. 
  - `./AAL -m 2 -n [liczba wierzchołków, np. 100] -d [gęstość grafu, 'd' dla gęstego, 's' dla rzadkiego]` - wygeneruje losowy 
  graf nieskierowany o zadanym rozmiarze i gęstości. Rzadki graf oznacza w tym przypadku graf z liczbą krawędzi równą liczbie wierzchołków,
  natomiast graf gęsty oznacza graf z liczbą krawędzi równą maksymalnej liczbie krawędzi w grafie nieskierowanym. Wynikiem działania
  programu w tym trybie są dane gotowe do wykorzystania przy uruchomieniu programu w trybie opisanym wyżej
  - `./AAL -m 3 -n [początkowa liczba wierzchołków, np. 100] -k [liczba problemów do rozwiązania, np. 30] -step 
  [krok zwiększający rozmiar generowanego grafu dla każdej iteracji głównej pęlti programu, np. 50] -r 
  [liczba instancji generowanych dla danego problemu o danym rozmiarze, np. 10] -d [gęstość grafu, 'd' dla gęstego, 's' dla rzadkiego]` - 
  ten tryb pozwala zbadać efektywność (czas wykonania) algorytmu na losowych grafach o różnej złożności i o różnym rozmiarze. Program
  uruchomiony w tym trybie wykonuje `k` pętli, w kazdej z nich tworząc `r` instancji problemów o danym rozmiarze do rozwiązania i 
  mierzac czas rozwiązania danej instancji problemu. Po każdorazowym wykonaniu iteracji głównej pętli, 
  czasy wykonania są uśredniane i zapisywane. Wynikiem działania programu w tym trybie są dane rozdzielone przecinkami (można zapisać do pliku 
  .csv i łatwo importować do arkuszy kalkulacyjnych) reprezentujące czasy wykonania dla każdej
  instancji problemu oraz tabelę z uśrednionymi czasami wykonania dla danych rozmiarów problemu.
  

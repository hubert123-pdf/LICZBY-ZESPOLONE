a.out: main.o LZespolona.o BazaTestu.o WyrazenieZesp.o statystyka.o
	g++ main.o BazaTestu.o WyrazenieZesp.o LZespolona.o statystyka.o

BazaTestu.o: BazaTestu.cpp BazaTestu.hh
	g++ -c -Wall -pedantic BazaTestu.cpp

LZespolona.o: LZespolona.cpp LZespolona.hh
	g++ -c -Wall -pedantic LZespolona.cpp

WyrazenieZesp.o: WyrazenieZesp.cpp WyrazenieZesp.hh
	g++ -c -Wall -pedantic WyrazenieZesp.cpp

main.o: main.cpp BazaTestu.hh LZespolona.hh WyrazenieZesp.hh
	g++ -c -Wall -pedantic main.cpp

statystyka.o: statystyka.cpp statystyka.hh
	g++ -c -Wall -pedantic statystyka.cpp

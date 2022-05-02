all:	PartialCreditPlease

PartialCreditPlease:	main.o
	g++ main.o -o pcpkt

main.o:	main.cpp Square.o Knight.o Chessboard.o
	g++ -c main.cpp

Square.o:	Square.cpp
	g++ -c Square.cpp

Knight.o:	Knight.cpp
	g++ -c Knight.cpp

Chessboard.o:	Chessboard.cpp
	g++ -c Chessboard.cpp

clean:
	rm *.o pcpkt

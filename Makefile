all:	PartialCreditPlease

PartialCreditPlease:	main.o
	g++ main.o Square.o Knight.o Chessboard.o -o pcpkt

main.o:	main.cpp Square.h Knight.h Chessboard.h
	g++ -c main.cpp

Square.o:	Square.cpp Square.h
	g++ -c Square.cpp

Knight.o:	Knight.cpp Knight.h
	g++ -c Knight.cpp

Chessboard.o:	Chessboard.cpp Chessboard.h
	g++ -c Chessboard.cpp

clean:
	rm *.o pcpkt

all:	PartialCreditPlease

PartialCreditPlease:	main.o Square.o Knight.o Chessboard.o
	g++ main.o Square.o Knight.o Chessboard.o -o pcpkt

main.o:	main.cpp Square.h Knight.h Chessboard.h
	g++ -g -c main.cpp

Square.o:	Square.cpp Square.h
	g++ -g -c Square.cpp

Knight.o:	Knight.cpp Knight.h
	g++ -g -c Knight.cpp

Chessboard.o:	Chessboard.cpp Chessboard.h
	g++ -g -c Chessboard.cpp

clean:
	rm *.o pcpkt

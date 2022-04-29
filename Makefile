all:	PartialCreditPlease

PartialCreditPlease:	main.o
	g++ main.o -o pcpkt

main.o:	main.cpp
	g++ -c main.cpp

clean:
	rm *.o pcpkt

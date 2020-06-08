x:	main.o Sequence.o
	g++ -o x Sequence.o main.o

main.o:	main.cpp Sequence.h
	g++ -c main.cpp

Sequence.o: Sequence.cpp Sequence.h
	g++ -c Sequence.cpp

clean:	
	rm -f *.o x

x:	main.o LinkedList.o
	g++ -o x LinkedList.o main.o

main.o:	main.cpp LinkedList.h
	g++ -c main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

clean:	
	rm -f *.o x

#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o LinkedListTester.o
	g++ -no-pie -g -Wall -std=c++11 main.o LinkedListOfInts.o LinkedListTester.o -o prog


main.o: main.cpp LinkedListTester.h
	g++ -g -Wall -std=c++11 -c main.cpp

LinkedListTester.o: LinkedListTester.h LinkedListTester.cpp
	g++ -std=c++11 -g -Wall -c LinkedListTester.cpp


#Add needed Test.o recipe and compiler command


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog

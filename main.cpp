/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "LinkedListTester.h"
int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts

	LinkedListTester tester;
	std::cout << "Running...\n";
	tester.runTests();

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();

	std::cout<<"And we're done.\nGoodbye.\n";

	return (0);

}

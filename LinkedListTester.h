#ifndef LINKEDLISTTESTER_H
#define LINKEDLISTTESTER_H
#include "LinkedListOfInts.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <climits>
#include <iostream>
class LinkedListTester
{
	public:
		LinkedListTester();

		void runTests();

	private:

		void  isEmptyTest01();

		void	isEmptyTest02();


		/**
		*@brief Creates and empty list of ints and checks isEmpty()'s functionality
		**/
		void sizeTest01();




		/**
		*@brief size returns correct value after each successive insertion of one million numbers of random numbers from 0 to INT_MAX
		**/
			void sizeTest02();


		/**
		*@brief Creates a list of 3 values and and inserts a fourth one in the second position.  Verifies insert()'s functionality
		**/
			void sizeTest03();

		/**
		*@brief Creates a list of 2 values using addFront() and insert() then removes it using removeFront()
		**/
		void removeFrontTest01();

		/**
		*@brief Creates a list of 2 values using addFront() then addBack then checks if value at the back is the right one
		**/
		void addBackTest01();




		/**
		*@brief Creates a list of 2 values using addFront() and addBack() then removes the back using removeBack()
		**/
			void addFrontTest01();


		/**
		*@brief Creates a list of 3 values using addFront() three times then adds fourth value in position 2 using insert(). Then removes the middle value (position 2) using remove()
		**/
			void sizeTest07();


		/**
		*@brief Creates an empty list then tries to insert a value into position 0.  Throws exception if functioning properly
		**/
			void sizeTest08();




		/**
		*@brief Creates a list of 1 value and tries to remove() position 2. Throws exception if functioning properly
		**/
		void removeBackTest01();






		/**
		*@brief Creates a list of 6 values and runs search on every inserted value. Passes if all values are found.
		**/
		void searchTest01();

		/**
		*@brief Creates a list of values and uses search to try and find bogus value. Passes if search returns false.
		**/
		void searchTest02();




};
#endif

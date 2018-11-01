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


		/**
		*@brief Creates and empty list of ints and checks isEmpty()'s functionality
		**/
		void sizeTest01();


		/**
		*@brief Creates an empty list of ints and adds one value. Verifys that isEmpty() returns false and size() returns 1
		**/
			void sizeTest02();


		/**
		*@brief Creates an empty list and checks for getLength() to return 0
		**/
			void sizeTest03();


		/**
		*@brief Creates a list of 3 values and and inserts a fourth one in the second position.  Verifies insert()'s functionality
		**/
			void sizeTest04();

		/**
		*@brief Creates a list of 2 values using addFront() and insert() then removes it using removeFront()
		**/
		void sizeTest05();




		/**
		*@brief Creates a list of 2 values using addFront() and addBack() then removes the back using removeBack()
		**/
			void sizeTest06();


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
		void removeTest01();






		/**
		*@brief Creates a list of 1 value and tries to replace a value in position 2.  Throws exception if working properly
		**/
		void replaceTest01();






		/**
		*@brief Creates a list of 2 values and uses replace() to replace a value in position 1.  Verifies that the size of the list is unaffected.
		**/
		void replaceTest02();





		/**
		*@brief Creates a list of 2 values and uses replace() to replace a value in position 1.  Verifies that the replace() was successful
		**/
		void replaceTest03();



		/**
		*@brief Creates a list of 3 values then runs clear(). Verifies functionality if getSize() returns 0
		**/
		void clearTest01();



		/**
		*@brief Creates a list of 1 value and verifies that it was successfully added using getEntry()
		**/
		void getEntryTest01();


		/**
		*@brief Creates an empty list and uses getEntry() on position 1. Functionality is verified if exception is thrown.
		**/
		void getEntryTest02();

		/**
		*@brief Creates a list of 2 values then creates another list using a LinkedList's copy constructor.  Verifies functionality by comparing values from each list.
		**/
		void copyConstTest01();



};
#endif

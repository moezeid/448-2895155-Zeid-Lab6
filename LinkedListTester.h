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
		*@brief Creates an empty list and checks isEmpty()'s functionality
		**/
		void  isEmptyTest01();
		/**
		*@brief Creates a list of size 1 checks isEmpty()'s functionality
		**/
		void	isEmptyTest02();


		/**
		*@brief Creates and empty list of ints and checks size()'s return
		**/
		void sizeTest01();


		/**
		*@brief size returns correct value after each successive insertion of one million numbers of random numbers from 0 to INT_MAX
		**/
			void sizeTest02();


		/**
		*@brief Creates a list of 2 values using addFront() then checks the value at the front of the list
		**/
		void addFrontTest01();

		/**
		*@brief Creates a list of 2 values using addFront() then tries to remove it using removeFront()
		**/
		void removeFrontTest01();

		/**
		*@brief Creates a list of 2 values using addBack() and checks the value at the back of the list
		**/
		void addBackTest01();

		/**
		*@brief Creates a list of 2 values using addFront() then tries to delete value at the back using removeBack
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

		/**
		*@brief Creates a list of values and uses search to try and find value of wrong type (char)
		**/
		void searchTest03();

		/**
		*@brief Creates a list of [1,2,3].  Searches for "1.2" and "4.2".  Shows that search accepts doubles and how it deals with them.
		**/
		void searchTest04();



};
#endif

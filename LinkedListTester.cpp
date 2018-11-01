#include "LinkedListTester.h"

LinkedListTester::LinkedListTester()
{
}
void LinkedListTester::runTests()
{

	sizeTest01();
	std::cout<<"\n";

	sizeTest02();
	std::cout<<"\n";

	sizeTest03();
	std::cout<<"\n";
	/*
	sizeTest04();
	std::cout<<"\n";
	sizeTest05();
	std::cout<<"\n";
	sizeTest06();
	std::cout<<"\n";
	sizeTest07();
	std::cout<<"\n";
	insertTest01();
	std::cout<<"\n";
	removeTest01();
	std::cout<<"\n";
	replaceTest01();
	std::cout<<"\n";
	replaceTest02();
	std::cout<<"\n";
	clearTest01();
	std::cout<<"\n";
	getEntryTest01();
	std::cout<<"\n";
	getEntryTest02();
	std::cout<<"\n";
	copyConstTest01();
	std::cout<<"\n";
	*/
}








/**
*@pre a list exists


**/
void LinkedListTester::sizeTest01()
{
	std::cout<<"Size Test #1: size of empty list is zero: ";
	bool test=true;
	LinkedListOfInts testableList;
	if(testableList.isEmpty()==test)
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}


}

void LinkedListTester::sizeTest02()
{
	std::cout<<"Size Test #2: size returns correct value after for each insertion up to  ";
	int value = rand() % 100;
	LinkedListOfInts testableList;
	testableList.addFront(value);
	if(1==testableList.size())
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}

}

void LinkedListTester::sizeTest03()
{
	std::cout<<"Size Test #3: size returns correct value after each successive insertion of a random number up to INT_MAX";


	LinkedListOfInts testableList;

	bool isRight = true;
	for(int i=0; i<INT_MAX;i++)
	{
		if(testableList.size()!= i)
		{
			isRight=false;
		}
		if(!isRight)
		{
			std::cout<< "Incorrect sizing at the ";
			std::cout<< i;
			std::cout<<" insertion \n";
			break;

		}
		testableList.addFront( rand() % INT_MAX);
}


	if(isRight)
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}
}
/*
void LinkedListTester::sizeTest04()
{
	std::cout<<"Size Test #4: size returns correct value after inserting at middle of list: ";



	LinkedList<int> list1;
	int w=0;
	int x=1;
	int y=2;
	int z=3;
	list1.addFront(w);
	list1.addFront(x);
	list1.addFront(y);

	list1.insert(2,z);

	if(4==list1.getLength())
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}
}

void LinkedListTester::sizeTest05()
{
	std::cout<<"Size Test #5: size returns correct value after adds and removes from front of list: ";
	int x=4;
	int y=5;
	LinkedList<int> list1;
	list1.addFront(x);
	list1.insert(2,y);
	list1.removeFront();
	if(1==list1.getLength())
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}


}
void LinkedListTester::sizeTest06()
{
	std::cout<<"Size Test #6: size returns correct value after adds and removes from back of list: ";
	int x=4;
	int y=5;
	LinkedList<int> list1;
	list1.addFront(x);
	list1.addBack(y);
	list1.removeBack();
	if(1==list1.getLength())
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}
}

void LinkedListTester::sizeTest07()
{
	std::cout<<"Size Test #7: size returns correct value after adds and removes from middle of list: ";

	LinkedList<int> list1;
	int w=0;
	int x=1;
	int y=2;
	int z=3;
	list1.addFront(w);
	list1.addFront(x);
	list1.addFront(y);

	list1.insert(2,z);
	list1.remove(2);

	if(3==list1.getLength())
	{
		std::cout<<"PASSED \n";
	}
	else
	{
		std::cout<<"FAILED \n";
	}
}

void LinkedListTester::insertTest01()
{
	std::cout<<"Insert Test #1: throws exception if position given is invalid: \n";
	LinkedList<int> list1;
	int x=4;
	try
	{
		list1.insert(0,x);
		std::cout<<" FAILED\n";
	}
	catch(std::runtime_error e)
	{

		std::cerr<<e.what()<<" PASSED\n";


	}

}

void LinkedListTester::removeTest01()
{
	std::cout<<"Remove Test #1: throws exception if position given is invalid: \n";
	LinkedList<int> list1;
	int x=4;
	list1.addFront(x);
	try
	{
		list1.remove(2);
		std::cout<<" FAILED\n";
	}
	catch(std::runtime_error e)
	{

		std::cerr<<e.what()<<" PASSED\n";


	}

}

void LinkedListTester::replaceTest01()
{

	std::cout<<"Replace Test #1: throws exception if position given is invalid: \n";
	LinkedList<int> list1;
	int x=4;
	int y=6;
	list1.addFront(x);
	try
	{
		list1.replace(2,y);
		std::cout<<" FAILED\n";
	}
	catch(std::runtime_error e)
	{

		std::cerr<<e.what()<<" PASSED\n";


	}

}
void LinkedListTester::replaceTest02()
{
	std::cout<<"Replace Test #2: returns correct size after value is replaced \n";
	LinkedList<int> list1;
	int x=4;
	int y=6;
	list1.addFront(x);
	list1.insert(2,y);
	list1.replace(1,y);
	if(2==list1.getLength())
	{
		std::cout<<" PASSED\n";
	}
	else
	{
		std::cout<<" FAILED\n";
	}

}
void LinkedListTester::replaceTest03()
{
	std::cout<<"Replace Test #2: returns correct size after value is replaced \n";
	LinkedList<int> list1;
	int x=4;
	int y=6;
	list1.addFront(x);
	list1.insert(2,y);
	list1.replace(1,y);
	if(list1.getEntry(1)==6)
	{
		std::cout<<" PASSED\n";
	}
	else
	{
		std::cout<<" FAILED\n";
	}
}


void LinkedListTester::clearTest01()
{

	std::cout<<"Clear Test #1: returns 0 size after adding to list then calling clear \n";
	LinkedList<int> list1;
	int x=4;
	int y=6;
	int z=7;
	list1.insert(1,x);
	list1.insert(2,y);
	list1.insert(3,z);
	list1.clear();
	if(0==list1.getLength())
	{
		std::cout<<" PASSED\n";
	}
	else
	{
		std::cout<<" FAILED\n";
	}

}
void LinkedListTester::getEntryTest01()
{

	LinkedList<int> list1;
	std::cout<<"getEntry Test #1: Uses insert to enter a value and returns the correct value using getEntry \n";
	int x=4;
	list1.insert(1,x);
	if(x==list1.getEntry(1))
	{
		std::cout<<" PASSED\n";
	}
	else
	{
		std::cout<<" FAILED\n";
	}
}
void LinkedListTester::getEntryTest02()
{
	LinkedList<int> list1;
	std::cout<<"getEntry Test #2: Throws exception if invalid position is given \n";

	try
	{
		list1.getEntry(1);
		std::cout<<" FAILED\n";
	}
	catch(std::runtime_error e)
	{

		std::cerr<<e.what()<<" PASSED\n";


	}
}

void LinkedListTester::copyConstTest01()
{
	std::cout<<"copyConst Test #1: Verifies that a deep copy of a list is created: \n";
	LinkedList<int> list1;
	int x=3;
	int y=5;
	list1.insert(1,x);
	list1.insert(2,y);
	LinkedList<int> list2(list1);
	if(list1.getEntry(1)==list2.getEntry(1) && list1.getEntry(2)==list2.getEntry(2))
	{
		std::cout<<" PASSED\n";
	}
	else
	{
		std::cout<<" FAILED\n";
	}
}

*/

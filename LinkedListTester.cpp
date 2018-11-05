#include "LinkedListTester.h"

LinkedListTester::LinkedListTester()
{
}
void LinkedListTester::runTests()
{
	std::cout<<"--------------------------------------------------\n";
	isEmptyTest01();
	std::cout<<"--------------------------------------------------\n";
	isEmptyTest02();
	std::cout<<"--------------------------------------------------\n";


	sizeTest01();
	std::cout<<"--------------------------------------------------\n";

	sizeTest02();
	std::cout<<"--------------------------------------------------\n";

	addFrontTest01();
	std::cout<<"--------------------------------------------------\n";

	removeFrontTest01();
	std::cout<<"--------------------------------------------------\n";

	addBackTest01();
	std::cout<<"--------------------------------------------------\n";

	removeBackTest01();
	std::cout<<"--------------------------------------------------\n";

	searchTest01();
	std::cout<<"--------------------------------------------------\n";
	searchTest02();
	std::cout<<"--------------------------------------------------\n";

	searchTest03();
	std::cout<<"--------------------------------------------------\n";


	searchTest04();
	std::cout<<"--------------------------------------------------\n";
}

void LinkedListTester::isEmptyTest01()
{
	std::cout<<" isEmpty Test #1: isEmpty returns true on an empty list: \n";
	LinkedListOfInts testableList;
	if(testableList.isEmpty())
	{
		std::cout<<"\n \t PASSED \n";
	}
	else
	{
		std::cout<<"\n \t FAILED \n";
	}


}

void LinkedListTester::isEmptyTest02()
{
	std::cout<<" isEmpty Test #2: isEmpty returns false on a non-empty list: \n";
	LinkedListOfInts testableList;
	testableList.addFront(1);
	if(testableList.size()==1)
	{


			if(testableList.isEmpty() == false )
			{
				std::cout<<"\n \t PASSED \n";
			}
			else
			{
				std::cout<<"\n \t FAILED...(isEmpty returned true after a value was added to the list and confirmed by size() ) \n";
			}


}
else{
			std::cout<<"\n \t FAILED...(size did not update new size to 1) \n";

		}


}

/*------------------------------------------------sizeTest1---------------------------------------------------------*/

void LinkedListTester::sizeTest01()
{
	std::cout<<" Size Test #1: size of empty list is zero: \n";
	LinkedListOfInts testableList;
	if(testableList.size()== 0)
	{
		std::cout<<"\n \t PASSED \n";
	}
	else
	{
		std::cout<<"\n \t FAILED \n";
	}


}


/*------------------------------------------------sizeTest2---------------------------------------------------------*/

void LinkedListTester::sizeTest02()
{
	std::cout<<" Size Test #2: size returns correct value after each successive insertion of one million numbers of random numbers from 0 to INT_MAX\n";


	LinkedListOfInts testableList;

	bool isRight = true;
	for(int i=0; i<1000000;i++)
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
		std::cout<<"\n \t PASSED \n";
	}
	else
	{
		std::cout<<"\n \t FAILED \n";
	}
}

/*------------------------------------------------removeFrontTest1---------------------------------------------------------*/
void LinkedListTester::removeFrontTest01()
{
	std::cout<<" removeFront Test #1: two values added using addFront then one removed using removeFront: \n";
	int x=4;
	int y=5;
	LinkedListOfInts testableList;
	testableList.addFront(y);
	testableList.addFront(x);
	if(testableList.size() !=2)
	{
			std::cout<<"\n \t FAILED...(size does not return 2 after two additions) \n";
	}
	else{


			bool removeFrontVal = testableList.removeFront();

			std::vector<int> vec = testableList.toVector();


			if(vec.at(0) == 4 && testableList.size() == 2 && removeFrontVal == 0)
			{
				std::cout<<"\n \t FAILED...(integer placed at front of list remains there and size remains the same, removeFront believes list is empty because it returns 0) \n";
			}
			else
			{
				std::cout<<"\n \t PASSED \n";
			}
	}

	/*------------------------------------------------removeBackTest1---------------------------------------------------------*/
}
void LinkedListTester::removeBackTest01()
{
	std::cout<<" removeBack Test #1: two values added using addFront (because we now know addBack is dysfunctional) then one removed using removeBack: \n";
	int x=4;
	int y=5;
	LinkedListOfInts testableList;
	testableList.addFront(y);
	testableList.addFront(x);
	if(testableList.size() !=2)
	{
			std::cout<<"\n \t FAILED...(size does not return 2 after two additions) \n";
	}
	else{


			bool removeBackVal = testableList.removeBack();

			std::vector<int> vec = testableList.toVector();


			if(vec.at(1) == 5 && testableList.size() == 2  && removeBackVal == 0)
			{
				std::cout<<"\n \t FAILED...(integer placed at back of list remains there and size remains the same, removeBack believes list is empty because it returns 0) \n";
			}
			else
			{
				std::cout<<"\n \t PASSED \n";
			}
	}


}
/*------------------------------------------------addBackTest1---------------------------------------------------------*/

void LinkedListTester::addBackTest01()
{
	std::cout<<" addBack Test #1: two values added, both using addBack, then checks if value at the back is right: \n";
	int x=4;
	int y=5;
	LinkedListOfInts testableList;
	testableList.addBack(x);
	testableList.addBack(y);

	std::vector<int> vec = testableList.toVector();


	if(vec.at(1) != 5)
	{
			std::cout<<"\n"<<"\t FAILED...(integer placed at back of list is not the one that was added) \n";
	}
	else
	{
			std::cout<<"\n \t PASSED \n";
	}



}
/*------------------------------------------------addFrontTest1---------------------------------------------------------*/

void LinkedListTester::addFrontTest01()
{
	std::cout<<" addFront Test #1: two values added, both using addFront then checks if value at the front is right: \n";
	int x=4;
	int y=5;
	LinkedListOfInts testableList;
	testableList.addFront(x);
	testableList.addFront(y);

	std::vector<int> vec = testableList.toVector();


	if(vec.at(0) != 5)
	{
			std::cout<<"\n"<<"\t FAILED...(integer placed second using addFront is not at the front of the list) \n";
	}
	else
	{
			std::cout<<"\n \t PASSED \n";
	}



}
/*------------------------------------------------searchTest1---------------------------------------------------------*/

void LinkedListTester::searchTest01()
{

	std::cout<<" Search Test #1: adds values and checks for their existence in the list: \n";
	LinkedListOfInts testableList;
	int u = rand() % INT_MAX;
	int v = rand() % INT_MAX;
	int w = rand() % INT_MAX;
	int x = rand() % INT_MAX;
	int y = rand() % INT_MAX;
	int z = rand() % INT_MAX;
	int array[6]= {z,y,x,w,v,u};

	testableList.addFront(u);
	testableList.addFront(v);
	testableList.addFront(w);
	testableList.addFront(x);
	testableList.addFront(y);
	testableList.addFront(z);

	bool flag = true;
for(int i =0; i<6;i++){
	if(testableList.search(array[i]) == false){  //runs search on every value contained in array
		flag = false;
		break;
		}
}
if(flag == false)
{
		std::cout<<"\n"<<"\t FAILED...(search could not find value inserted into list) \n";
}
else
{
		std::cout<<"\n \t PASSED \n";
}


}
/*------------------------------------------------searchTest2---------------------------------------------------------*/

void LinkedListTester::searchTest02()
{

	std::cout<<" Search Test #2: adds values and checks for bogus values to ensure search properly works. \n";
	LinkedListOfInts testableList;
	int u = 1;
	int v = 2;
	int w = 3;


	testableList.addFront(u);
	testableList.addFront(v);
	testableList.addFront(w);
	int array[3] = {4,5,6};
	bool flag = false;
for(int i =0; i<3;i++){
	if(testableList.search(array[i]) == 1){  //runs search on every value contained in array
		flag = true;
		break;
		}
}
if(flag)
{
		std::cout<<"\n"<<"\t FAILED...(search found a value in the list that was not put in there) \n";
}
else
{
		std::cout<<"\n \t PASSED \n";
}


}



/*------------------------------------------------searchTest3---------------------------------------------------------*/

void LinkedListTester::searchTest03()
{

	std::cout<<" Search Test #3: adds values and checks for value of wrong type (char) to ensure search properly works. \n";
	LinkedListOfInts testableList;
	int u = 1;
	int v = 2;
	int w = 3;


	testableList.addFront(u);
	testableList.addFront(v);
	testableList.addFront(w);
	bool flag = false;
	flag = testableList.search('y');

if(flag)
{
		std::cout<<"\n"<<"\t FAILED...(search found a value in the list that was not an integer) \n";
}
else
{
		std::cout<<"\n \t PASSED \n";
}


}
/*------------------------------------------------searchTest3---------------------------------------------------------*/
void LinkedListTester::searchTest04()
{

	std::cout<<" Search Test #4: adds values and checks for value of wrong type (double) to ensure search properly works. \n";
	LinkedListOfInts testableList;
	int u = 1;
	int v = 2;
	int w = 3;


	testableList.addFront(u);
	testableList.addFront(v);
	testableList.addFront(w);
	bool flag1 = false;
	bool flag2 = false;
	flag1 = testableList.search(1.2); //double that truncates to "1", a  value that exists in the list
	flag2 = testableList.search(4.2); //double that truncates to "4", a value that does NOT exist in the list

if(flag1){

		std::cout<<"\n"<<"\t FAILED...(search found a double in the list that truncates to an int in the list) \n";
		std::cout<<"\n \t Given value was 1.2, search looked for '1', and since 1 is in the list, search returns true.  Failed because '1.2' is not in the list.\n";

		if(!flag2){
								std::cout<<"\n"<<"\t ALSO...(search did not find the other double inserted into the list that does not truncate down to an existing int in the list) \n";
								std::cout<<"\n \t Given value was 4.2, search looked for '4', and as expected, did not find it\n";
							}
					}
else
{
		std::cout<<"\n \t PASSED \n";
}


}



/*
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

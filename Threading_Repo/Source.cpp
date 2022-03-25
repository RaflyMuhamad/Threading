#include <iostream>
#include <thread>

using namespace std;

void print_odd()	//for print odd thread
{
	for (int i = 1; i <= 10; i++) //print 1-10
	{
		if (i % 2 != 0)	//get odd number
		{
			cout << i << ",Odd Thread " << endl; //print just odd number
			this_thread::sleep_for(1s); //delay for 1 second
		}
	}
}

void print_even()	//for print even thread
{
	for (int i = 1; i <= 10; i++) //print 1-10
	{
		if (i % 2 == 0)	//get even number
		{
			cout << i << ",Even Thread" << endl; //print just even number
			this_thread::sleep_for(2.5s); //delay for 2.5 second
		}
	}
}

int main()
{
	thread oddth(print_odd);	//construct new thread for odd thread
	thread eventh(print_even);	//construct new thread for even thread

	oddth.join();				//waiting odd thread finish
	eventh.join();				//waiting event thread finish


	return 0;
}
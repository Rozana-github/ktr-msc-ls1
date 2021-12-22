
/*3. Chapter Three: Foooood
At Epitech Lille all years ago, 257 students, 24 members of the
pedagogy (including 14 "Aer" - students who accompany lower year students),
but for the start of the school year we want to know how much to buy Donuts.
To do this we wrote an algorithm that calculates how many Donuts to buy,
here is the code in bold of this algorithm:
NumberDonut receives zero.
*/

#include <iostream>
using namespace std;

// function declaration

int IncreaseNumberOfDonut(int student, int numberDonut);
int IncreaseNumberOfDonutforSupervisor(int member, int aer, int entry);
int IncreaseNumberOfDonutforEntry(int member, int aer, int entry);
int chocolateCount(int chocolatePrev);

int main()
{

	int numberDonut = 0;   // NumberDonut receives zero.
	int chocolatePrev = 0; // ChocolatPrevu receives zero .
	int entrystudentNumber;
	int member;
	int aer;
	int supervisor;
	int entry;
	int student;

	cout << "Enter number of of student" << endl;
	cin >> student;

	cout << "enter  number of member" << endl;
	cin >> member;
	cout << "enter  number of entry" << endl;
	cin >> entry;
	cout << "enter number of aer" << endl;
	cin >> aer;

	cout << "enter number of supervisor" << endl;
	cin >> supervisor;

	cout << "Enter chocolate number:  " << endl;
	cin >> chocolatePrev;

	int chocolate = chocolateCount(chocolatePrev);
	int donut1 = IncreaseNumberOfDonut(student, numberDonut);
	int donut2 = IncreaseNumberOfDonutforSupervisor(aer, supervisor, entry);
	int donut3 = IncreaseNumberOfDonutforEntry(member, aer, entry);

	cout << "Total number of Chocolate: " << chocolate << "\n";
	cout << "Total number of Donut: " << donut1 + donut2 + donut3;
	return 0;
}

int IncreaseNumberOfDonut(int student, int numberDonut)
{
	for (int numberDonut = 0; numberDonut = student; numberDonut++)
	{
		return numberDonut;
	}
	/*
		 If member equals Aer
			 IncreaseNumberOfDonut(Aer, NumberOfDonut)*/
}

int IncreaseNumberOfDonutforEntry(int member, int aer, int entry)
{
	if (member == aer && entry == aer)
	{

		for (int numberDonut = 0; numberDonut <= aer; numberDonut++)
		{

			return numberDonut;
		}
	}
}

/*therwise
	IncreaseNumberOfDonut(Framing, NumberOfDonut)
		IncreaseNumberOfDonut(entry, NumberOfDonut)
			NumberDonut increases by 1 If entry equals Aer

			  */

/*entry equals Supervisor
IncreaseNumberOfDonut(Aer, NumberOfDonut) */

int IncreaseNumberOfDonutforSupervisor(int aer, int supervisor, int entry)
{

	if (entry == supervisor)
	{
		for (int numberDonut = 0; numberDonut <= aer; numberDonut++)
		{
			return numberDonut;
		}
	}
}
/*If ChocolatePrevu < 17 ocolatePrevu increases by 2 + ChocolatePrevu
														 Otherwise
															 ocolatPrevu increases by 1

															*/

int chocolateCount(int chocolatePrev)
{

	chocolatePrev = (chocolatePrev < 17) ? chocolatePrev + 2 : chocolatePrev + 1;

	return chocolatePrev;
}

#include <iostream>
using namespace std;

int main()
{
	// local variable declaration:
	char year = '1';

	cout << "**** To know your class schedule  enter 1 for 1st year , 2 for second year and 3 for 3rd year ***" << endl;
	cin >> year;

	switch (year)
	{
	case '1':
		cout << "You are Tek1 in First year your classes are as follows : " << endl;
		cout << "9h - 10h :  Graphic Bootstrap at room no. 1" << endl;
		cout << "10h - 11h : KickOff Pool C  room 1" << endl;
		cout << "11h- 13h: individual point with the pedago (1 student every 10 minutes) at  room 2" << endl;
		break;

	case '2':
		cout << "You are Tek2 in second year your classes are as follows : " << endl;
		cout << "11h - 12h : Kickoff Arcade Room 2" << endl;
		cout << "12 h - 13 h : Kickoff Zia Room 2 " << endl;
		cout << "13h - 15h: Individual point with the pedago , 1 student every 10 minutes at  Room 2" << endl;
		cout << "13h - 15h : If you  do not have presentation then you can use 	the pc pool can be at Room 3" << endl;
		break;
	case '3':
		cout << "You are Tek3 in third year your classes are as follows : " << endl;
		cout << "11h-12h :  Kickoff Cryptography Project Room no. 1 " << endl;
		cout << "12hh- 13h : Update on the year with the pedago at Room 1 " << endl;
		cout << "11h- 13h :  Individual point with the pedago 1 student every 10 minutes at room 1" << endl;
		cout << "11h - 13h : If you  do not have presentation then you can use 	the pc pool can be at Room 3" << endl;
		break;

	default:
		cout << " Congratulations you dont have any classes" << endl;
	}
	cout << "You are in year " << year << endl;

	return 0;
}
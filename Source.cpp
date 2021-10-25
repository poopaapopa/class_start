#include <iostream>
#include <string>
using namespace std;

class DateClass
{
public:
	int m_day;
	int m_mounth;
	int m_year;

	void print()
	{
		cout << m_day << "/" << m_mounth << "/" << m_year;
	}
};

class Emploee
{
public:
	string m_name;
	int m_id;
	double m_wage;

	void print()
	{
		cout << "Name:" << m_name << "\nId: " << m_id << "\nWage: $" << m_wage << "\n\n";
	}
};

int main()
{
	//DateClass today{ 20,10,2021 };
	//today.m_day = 25;
	//today.print();
	Emploee john{ "John",5,30.00 };
	Emploee max{ "Max",6,32.74 };
	john.print();
	max.print();
	return 0;
}
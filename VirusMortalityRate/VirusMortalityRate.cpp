// VirusMortalityRate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>
using namespace std;
class Virus
{
protected:
	float Death, Cases;
public:

	virtual void GetMortalityRate()=0;
};
class CovidVirus :public Virus
{
public:
	void GetMortalityRate()
	{
		cout << "Enter the no of Covid Cases:";
		cin >> Cases;
		cout << "Enter the no of Covid Death:";
		cin >> Death;
		cout << "Mortality rate for Covid Virus:" << (Death / Cases)*1000<<"%";
	}
};
class HivVirus :public Virus
{
public:
	void GetMortalityRate()
	{
		cout << "Enter the no of Hiv Cases:";
		cin >> Cases;
		cout << "Enter the no of Hiv Death:";
		cin >> Death;
	    cout << "Mortality rate for Hiv Virus:" << (Death / Cases)*1000<<"%";
		
	}
};
class BirdFlue :public Virus
{
public:
	void GetMortalityRate()
	{
		cout << "Enter the no of Bird Flue Cases:";
		cin >> Cases;
		cout << "Enter the no of Bird Flue Death:";
		cin >> Death;
		cout << "Mortality rate for Bird Flue: " << (Death/Cases)*1000<<"%";
	}
};
int main()
{
	int op;
	cout << "Enter 1 for Covid Virus\n";
	cout << "Enter 2 for Hiv Virus\n";
	cout << "Enter 3 for Bird Flue\n";
	cin >> op;
	if (op == 1)
	{
		
		CovidVirus c;
		c.GetMortalityRate();
		
	}
	else if (op == 2)
	{
		HivVirus h;
		h.GetMortalityRate();
	}
	else if (op == 3)
	{
		BirdFlue b;
		b.GetMortalityRate();
	}
	else
		cout << "Invalid Selection";
	_getch();
}


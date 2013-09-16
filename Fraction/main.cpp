// Fraction.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Fraction.h"
#include "TemplateExample.h"

using namespace Fract;
using namespace std;

void Fract::FriendExample(Fraction f)
{
	std::cout<<"Access to the private variable: intVar="<<f.intVar<<"\n";// intVar is private
}

int main(int argc, _TCHAR* argv[])
{
	cout << "Friend function demo:\n";
	Fraction fraction;
	FriendExample(fraction);

	cout << "\nTemplate demo:\n";
	TemplateExample<int> templ;
	templ.print(11);
}

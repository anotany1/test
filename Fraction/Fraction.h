#pragma once
namespace Fract
{
	class Fraction
	{
		int intVar;
	public:
		Fraction(void);
		friend void FriendExample(Fraction f);	
	};

	class Decimal
	{
	public:
		friend void FriendExample(Fraction f);	
	};

	
};
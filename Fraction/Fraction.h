#pragma once
namespace Fract
{
	class Fraction
	{
		int intVar;
	public:
		Fraction(void);
		~Fraction(void);
		friend void Something(Fraction f);	
	};

	class Decimal
	{
	public:
		friend void Something(Fraction f);	
	};

	
};
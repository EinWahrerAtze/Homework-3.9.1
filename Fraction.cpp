#include "Fraction.h"

Fraction::Fraction(int numenator, int denominator)
{
	numenator_ = numenator;
	denominator_ = denominator;
}

bool Fraction::operator==(const Fraction & f) const
{
	if (numenator_ == f.numenator_)
	{
		return (denominator_ == f.denominator_ ? true : false);
	}
	else if (denominator_ == f.denominator_)
	{
		return (numenator_ == f.numenator_ ? true : false);
	}
	else
	{
		return (numenator_ == denominator_ && f.numenator_ == f.denominator_ ? true : false);
	}
}

bool Fraction::operator!=(const Fraction & f) const
{
	return !(*this == f);
}

bool Fraction::operator<(const Fraction & f) const
{
	if (numenator_ == f.numenator_)
	{
		return (denominator_ < f.denominator_ ? true : false);
	}
	else if (denominator_ == f.denominator_)
	{
		return (numenator_ < f.numenator_ ? false : true);
	}
	else if (*this == f)
	{
		return false;
	}
	else
	{
		numenator_ * f.denominator_;
		f.numenator_ * denominator_;

		return (numenator_ < f.numenator_ ? false : true);
	}
}

bool Fraction::operator>(const Fraction & f) const
{
	return (f < *this);
}

bool Fraction::operator>=(const Fraction & f) const
{
	return !(*this < f);
}

bool Fraction::operator<=(const Fraction & f) const
{
	return !(*this > f);
}
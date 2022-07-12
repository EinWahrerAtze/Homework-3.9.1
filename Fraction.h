#pragma once
class Fraction
{
public:
	Fraction(int numenator, int denominator);
	bool operator==(const Fraction & f) const;
	bool operator!=(const Fraction & f) const;
	bool operator<(const Fraction & f) const;
	bool operator>(const Fraction & f) const;
	bool operator<=(const Fraction & f) const;
	bool operator>=(const Fraction & f) const;
private:
	int numenator_;
	int denominator_;
};
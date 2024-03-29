class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print()
	{
		cout << this->numerator << " / " << denominator << endl;
	}

	void simplify()
	{
		int gcd = 1;
		int j = min(this->numerator, this->denominator);
		for (int i = 1; i <= j; i++)
		{
			if (this->numerator % i == 0 && this->denominator % i == 0)
			{
				gcd = i;
			}
		}
		this->numerator = this->numerator / gcd;
		this->denominator = this->denominator / gcd;
	}
	// fraction return type so as to return a fraction to object
	Fraction add(Fraction const &f2) const
	{
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;

		int num = x * numerator + (y * f2.numerator);

		Fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}
	// const daalna /naa daalna apki marzi hai.
	Fraction operator+(Fraction const &f2) const
	{
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;
		int num = x * numerator + (y * f2.numerator);
		Fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}
	// without  returning a object and without operator overloading
	/*	void add(Fraction const &f2) {
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;

		int num = x * numerator + (y * f2.numerator);

		numerator = num;
		denominator = lcm;
		simplify();
		//function written directly..implicitly meaning this->simplify();
	}*/

	Fraction operator*(Fraction const &f2) const
	{
		int n = numerator * f2.numerator;
		int d = denominator * f2.denominator;
		Fraction fNew(n, d);
		fNew.simplify();
		return fNew;
	}

	// without operator overloading
	/*	void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}*/

	bool operator==(Fraction const &f2) const
	{
		return (numerator == f2.numerator && denominator == f2.denominator);
	}

	void multiply(Fraction const &f2)
	{
		numerator = numerator * f2.numerator;
		denominator = denominator * f2.denominator;

		simplify();
	}
};

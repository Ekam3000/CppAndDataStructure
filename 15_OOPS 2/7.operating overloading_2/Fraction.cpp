class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		void print() {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		Fraction add(Fraction const &f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			Fraction fNew(num, lcm);
			fNew.simplify();
			return fNew;
		}

		Fraction operator+(Fraction const &f2) const {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			Fraction fNew(num, lcm);
			fNew.simplify();
			return fNew;
		}

		Fraction operator*(Fraction const &f2) const {
			int n = numerator * f2.numerator;
			int d = denominator * f2.denominator;
			Fraction fNew(n, d);
			fNew.simplify();
			return fNew;
		}

		bool operator==(Fraction const &f2) const {
			return (numerator == f2.numerator && denominator == f2.denominator);
		}

		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;
			simplify();
		}

		// Pre-increment
		/* increment operator is an urinary operator, 
		so only one calling object is required no arguments are required*/
	//	1.
	    /*	void operator++() {
			numerator = numerator + denominator;
			simplify();
        }
		*/
        
		 //2. and 3.
			Fraction operator++() {
			numerator = numerator + denominator;
			simplify(); // f1 ko simplify karne ke liye
			Fraction t(numerator,denominator);
			return t;
        }
	
	  // OR 
	  // using this pointer-->
	
		//2. and 3.
	/*	Fraction operator++() {
			numerator = numerator + denominator;
			simplify();
        //  writing fraction datatype at function starting and *this pointer  will copies the content of f1 to f2 
			return *this; // *this return karne se f1 ka pura content(vo f1 ke block me hai) copy ho jaye gaa f2 me 
        }
        */
	   
		// 3. part using reference -->

		/*Fraction& operator++() {
			numerator = numerator + denominator;
			simplify();

			return *this;
        }
		*/
};

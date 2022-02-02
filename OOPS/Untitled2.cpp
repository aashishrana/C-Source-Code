class Fraction {
	private:
		
		int numerator;
		int denominator;
		
	public :
		
		Fraction(int numerator, int denominator) {
			
			cout<<"parametrize constructor is called";
			
			this-> numerator = numerator;
			this -> denominator = denominator;
			
		}
		void print() {
			cout<< this-> numerator << " / "<< denominator;
		}
		
		void simplify() {
			int gcd = 1;
			
		}
		
		void add(Fraction f2) {
			int lcm = denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;
			
			int num = x * numerator + (y * f2.numerator);
			
			numerator = num;
			denominator = lcm;
			
		}
		
};

#include<iostream>
using namespace std;

class Fraction {
private:
	int numenator;
	int denominator;

public:

    Fraction() {
            
        }

	Fraction(int numenator, int denominator){
		this -> numenator = numenator;
		this -> denominator = denominator;
	}

    int getNumenator () const{
        return numenator;
    }

    int getDenominator() const{
            return denominator;
        }

    void setNumenator(int numenator){
        this -> numenator = numenator;
    }

    void setDenominator(int denominator){
        this -> denominator = denominator;
    }

	void print(){
		cout << numenator << " / " << denominator <<endl;
	}

	void simplify(){
		int gcd = 1;
		int j = min(this -> numenator, this -> denominator);
		for(int i = 1;i <= j; i++){
			if(this -> numenator % i == 0 && this -> denominator % i == 0)
				gcd = i;
		}
		this -> numenator = this -> numenator / gcd;
		this -> denominator = this -> denominator / gcd;
	}

	void add(Fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;

		int num = x * numenator + (y * f2.numenator);

		numenator = num;
		denominator = lcm;

		simplify();
	}

	void multiply(Fraction const &f2){
		numenator = numenator * f2.numenator;
		denominator = denominator * f2.denominator;

		simplify();
	}
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3;

    cout<<f3.getNumenator()<<" "<<f3.getDenominator()<<endl;

}
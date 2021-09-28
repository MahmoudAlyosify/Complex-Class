#include<iostream>
using namespace std;
class Complex {
private:
	double real, imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}
	void input() {
		cin >> real;
		cin >> imag;
	}
	void output() {
		cout << real << " + " << imag << "i" << endl;
	}
	double getReal() {
		return real;
	}
	double getImag() {
		return imag;
	}
	void setReal(double real) {
		this->real = real;
	}
	void setImag(double imag) {
		this->imag = imag;
	}
	Complex operator +(Complex ob2) {
		Complex ob3;
		ob3.real = real + ob2.real;
		ob3.imag = imag + ob2.imag;
		return ob3;
	}
};
int main() {
	Complex c1, c2;
	cout << "Enter values for real and imaginary coefficients: ";
	c1.input();
	cout << "Enter values for real and imaginary coefficients: ";
	c2.input();
	c1.output();
	c2.output();
	cout << "Enter a new value for the real coefficient:";
	double x;
	cin >> x;
	c2.setReal(x);
	cout << "The new real coefficient is " << c2.getReal() << endl;
	c2.output();
	Complex c3;
	c3 = c1 + c2;
	cout << "The sum c3 is:";
	c3.output();
}
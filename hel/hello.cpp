#include <iostream>
using namespace std;

class Complex {
  private:
    float real, imaginary;
  public:
    void setComplex() {
      cout<<"Enter the real part of first complex number: "<<endl;
      cin>>real;
      cout<<"Enter the imaginary part of first complex number: "<<endl;
      cin>>imaginary;
    }
    
    void printComplex() {
      cout << real << " + " << imaginary << "i" << endl;
    }
    
    Complex operator+(Complex comp) {
      Complex ans;
      ans.real = real + comp.real;
      ans.imaginary = imaginary + comp.imaginary;
      return ans;
    }
    
    Complex operator-(Complex comp) {
      Complex ans;
      ans.real = real - comp.real;
      ans.imaginary = imaginary - comp.imaginary;
      return ans;
    }
    
    Complex operator*(Complex comp) {
      Complex ans;
      ans.real = real*comp.real - imaginary*comp.imaginary;
      ans.imaginary = real*comp.imaginary + imaginary*comp.real;
      return ans;
    }
    Complex operator/(Complex comp) {
      Complex ans;
      float denominator = comp.real*comp.real + comp.imaginary*comp.imaginary;
      ans.real = (real*comp.real + imaginary*comp.imaginary) / denominator;
      ans.imaginary = (imaginary*comp.real - real*comp.imaginary) / denominator;
      return ans;
    }
};

int main() {
  Complex c1, c2, c3;
  

  c1.setComplex();
  c2.setComplex();

  cout << "First Complex number: ";
  c1.printComplex();
  cout << "Second Complex number: ";
  c2.printComplex();

  c3 = c1 + c2;
  cout << "Addition: ";
  c3.printComplex();

  c3 = c1 - c2;
  cout << "Subtraction: ";
  c3.printComplex();

  c3 = c1 * c2;
  cout << "Multiplication: ";
  c3.printComplex();

  c3 = c1 / c2;
  cout << "Division: ";
  c3.printComplex();

  return 0;
}
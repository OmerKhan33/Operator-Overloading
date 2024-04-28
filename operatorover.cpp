#include <iostream>

using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    public:
        // Constructor with default values
        Complex(int r=0, int i=0)
        {
            real = r;
            imag = i;
        }
    
        // Overloaded + operator for complex number addition
        Complex operator + (Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        
        // Print the complex number
        void print()
        {
            cout << real << "+" << imag << "i" << endl;
        }    
};

int main()
{
    Complex c1(12, 11), c2(23, 2);
    Complex c3 = c1 + c2;
    c3.print();
}

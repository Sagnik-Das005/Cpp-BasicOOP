#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    private:
        double real=0,imag=0;

    public:
        //Complex();
        Complex(double,double);
        ~Complex();

        Complex operator+(double);
        friend Complex operator+(double,Complex &);
        Complex operator+(Complex &);
        friend Complex operator-(double,Complex &);
        Complex operator-(Complex &);
        Complex operator*(Complex &);
        Complex operator/(Complex &);
        
        
        void Display();

        friend istream &operator>>(istream &in,Complex &c){
            in>>c.real>>c.imag;
            return in;
        }
        friend ostream &operator<<(ostream &out,Complex &c){
            out<<c.real<<"+i("<<c.imag<<")\n";
            return out;
        }

};

//inline Complex::Complex()
//{}
inline Complex::~Complex()
{}
inline Complex::Complex(double real=0.0,double imag=0.0){
    this->real=real;
    Complex::imag=imag;
}


    
inline Complex operator+(double num,Complex &c){
    return Complex(num+c.real,c.imag);
}
inline Complex operator-(double num,Complex &c){
    return Complex(num-c.real,-c.imag);
}
inline Complex Complex::operator+(Complex &c){
    return Complex(real+c.real,imag+c.imag);
}
inline Complex Complex::operator+(double num){
    return Complex(real+num,imag);
}

inline Complex Complex::operator-(Complex &c){
    return Complex(real-c.real,imag-c.imag);
}
inline Complex Complex::operator*(Complex &c){
    return Complex(real*c.real-imag*c.imag,imag*c.real+real*c.imag);
}
inline Complex Complex::operator/(Complex &c){
    double D=pow(c.real,2.0)+pow(c.imag,2.0);
    return Complex((real*c.real+imag*c.imag)/D,(imag*c.real-real*c.imag)/D);
}

inline void Complex::Display(){
    cout<<real<<"+i("<<imag<<")\n";
}

int main(){
    Complex c1(5,4),c2(4,5),c,d;
    
    cout<<c1<<c2;   
    cin>>c;
    cout<<c;
    d=c1+c2;
    d=10+c2;
    cout<<d;
    return 0;
}

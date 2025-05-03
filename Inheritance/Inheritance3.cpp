#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){ }
        void showA(){
            cout<<"A::showA() called "<<endl;
        }
};

class B:virtual public A{
    int b; 
    public:
    B(int y): b(y){} // Constructor of B initializes A
    void showB(){
        cout<<"B::showB() called "<<b<<endl;
    }
};

class C:virtual public A{
    int c;
    public:
    C(int y):c(y){} // Constructor of C initializes A
    void showC(){
        cout<<"C::showC() called "<<c<<endl;
    }
};

class D:public B,public C{
    int d;
    public:
    D(int x1, int x2, int y) 
        : B(x1), C(x2), d(y) {} // Initialize B, C, and d
    void showD(){
        cout<<"D::showD() called "<<d<<endl;
    }
};

int main() {
    D obj(3, 4, 5); // Initialize D with values
    obj.showA();           //Call showA()
    obj.showB();           // Call showB()
    obj.showC();           // Call showC()
    obj.showD();           // Call showD()
    return 0;
}

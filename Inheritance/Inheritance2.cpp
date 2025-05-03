#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){ a=0; }
    A(int a){
        this->a=a;
    }
    ~A(){ }
    
    protected:
    void showA(){
        cout<<"A::showA() called "<<a<<endl;
    }
};

class B: public A{
    int b;
    public:
    B(){ }
    B(int a,int b):A(a){
        
        this->b=b;
    }   
    void showB(){
        cout<<"B::showB() called "<<b<<endl;
        this->showA();

    }
    ~B() { }

};

int main(){
    A a;
    B b(1,2);
    b.showB();
}

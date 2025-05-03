#include<iostream>
using namespace std;

class A{
    private:
    
    public:
    A(){
        cout<<"Constructor A()"<<endl;
    }

    ~A(){
        cout<<"Destructor A()"<<endl;
    }   
    virtual void show()
    {
        cout<<"A\n";
    }


};

class B:public A{

    public:
    B(){
       cout<<"Constructor B()"<<endl;
    }

    ~B(){
      cout<<"Destructor B()"<<endl;
    }   
    void show()
    {
        cout<<"B\n";
    }
};

int main(){
    A *p;
    A a;
    B b;
    
    p=&a;
    p->show();
    p=&b;
    p->show();
    return 0;
}

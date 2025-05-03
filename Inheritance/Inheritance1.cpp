#include<iostream>
using namespace std;

class BaseClass{
   
    public:
        BaseClass(){
            cout<<"BaseClass constructor called"<<endl;
        }
        void display1(){
            cout<<"BaseClass display function called"<<endl;
        }
};

class DerivedClass: public BaseClass{
   
    public:
        DerivedClass(){
            cout<<"DerivedClass constructor called"<<endl;
        }
        void display1(){
            cout<<"DerivedClass display function called"<<endl;
        }
};  
class DerivedClass2: public DerivedClass{
    
    public:
        DerivedClass2(){
            cout<<"DerivedClass2 constructor called"<<endl;
        }
        void display1(){
            cout<<"DerivedClass2 display function called"<<endl;
        }
};

int main(){
    
    DerivedClass2 derivedObj2;
    derivedObj2.display1(); // Calls DerivedClass2's display function
    derivedObj2.DerivedClass::display1(); // Calls DerivedClass's display function
    derivedObj2.BaseClass::display1(); // Calls BaseClass's display function
    
     
    return 0;
}    

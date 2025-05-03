#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    static int count; 
public:
    Base() {
        count++;
        cout << "Base class constructor called. Instance count: " << count << endl;
    }
    virtual ~Base() {
        count--;
        cout << "Base class destructor called. Instance count: " << count << endl;
    }
    static int getCount() {
        return count;
    }
};
int Base::count = 0; 

class Derived : public Base {
    public:
    Derived() {
        count++;
        cout << "Derived class constructor called." << endl;
    }
    ~Derived() {
        count--;
        cout << "Derived class destructor called." << endl;
    }
};
class Derived2 : public Derived {
    public:
    Derived2() {
        count++;
        cout << "Derived2 class constructor"<< endl;
    }
    ~Derived2() {
        count--;
        cout << "Derived2 class destructor"<< endl;
    }
};
int main() {
    cout << "Initial count: " << Base::getCount() << endl;
    
    Base *b1 = new Base();
    Base *b2 = new Derived();
    cout << "Count after creating objects: " << Base::getCount() << endl;

    delete b1;
    delete b2;
    cout << "Final count: " << Base::getCount() << endl;

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

template<class T>  //template<typename T>
class Test{
    T x;

    public:
        Test(T a);
        ~Test();
        T getData();

};

template<class T>  //template<typename T>
Test<T>::Test(T x){
    Test<T>::x=x;
}   

template<class T>  //template<typename T>
Test<T>::~Test()
{ }

template<class T>  
T Test<T>::getData(){
    return x;
}   

int main(){
    Test<int> t1(10);
    Test t2(12.3);  //Test<double> t2(12.3);
    Test<char> t3('A');
    Test<string> t4("Hello World");
    cout<<t1.getData()<<"\n";
    cout<<t2.getData()<<"\n";
    cout<<t3.getData()<<"\n";
    cout<<t4.getData()<<"\n";

    return 0;
}

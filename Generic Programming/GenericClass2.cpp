#include<iostream>
using namespace std;

template<class T1,class T2> 
class Test{
    T1 x;
    T2 y;

    public:
        Test();
        Test(T1 ,T2 );
        ~Test();
        void getData();
        T1 getData1();
        T2 getData2();
};
template<class T1,class T2> 
Test<T1,T2>::Test(){
    x=0;
    y=0;
}
template<class T1,class T2> 
Test<T1,T2>::Test(T1 x,T2 y){
    Test<T1,T2>::x=x;
    Test<T1,T2>::y=y;
}

template<class T1,class T2> 
Test<T1,T2>::~Test(){
    //cout<<"Destructor called\n";
}

template<class T1,class T2>
void Test<T1,T2>::getData(){
    cout<<x<<" "<<y<<"\n";
}
template<class T1,class T2> 
T1 Test<T1,T2>::getData1(){
    return x;
}
template<class T1,class T2> 
T2 Test<T1,T2>::getData2(){
    return y;
}

int main(){
    Test<int,double> t1(10,12.3);
    Test t2('A',"Hello World"); //Test<char,string> t2('A',"Hello World");
    Test<int,int> t3(10,20);
    Test<float,float> t4(12.3,45.6);
    Test<string,string> t5("Hello","World");
    t1.getData();
    t2.getData();
    t3.getData();
    t4.getData();
    t5.getData();


    cout<<t1.getData1()<<"\n";
    cout<<t1.getData2()<<"\n";
    cout<<t2.getData1()<<"\n";
    cout<<t2.getData2()<<"\n";
    cout<<t3.getData1()<<"\n";
    cout<<t3.getData2()<<"\n";
    cout<<t4.getData1()<<"\n";
    cout<<t4.getData2()<<"\n";
    cout<<t5.getData1()<<"\n";
    cout<<t5.getData2()<<"\n";
}
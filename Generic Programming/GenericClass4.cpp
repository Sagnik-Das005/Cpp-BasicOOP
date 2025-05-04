#include<iostream>
using namespace std;

template<class T>
class C{
    T x;
    public:
        C(T a);
        ~C();
        void showData();
};

template<class T>
class D:public C<T>{
    T y;
    public:
        D(T a,T b);
        ~D();
        void showData();
};

template<class T>
C<T>::C(T a){
    C<T>::x=a;
    cout<<"Constructor of C\n";
}
template<class T>
C<T>::~C(){ }

template<class T>
void C<T>::showData(){
    cout<<C<T>::x<<"\n";
}
template<class T>   
D<T>::D(T x,T y):C<T>(x){
    D<T>::y=y;
    cout<<"Constructor of D\n";
}

template<class T>
D<T>::~D(){ }

template<class T>
void D<T>::showData(){
    C<T>::showData();
    cout<<D<T>::y<<"\n";
}

int main(){
    D<int> d(10,20);
    d.showData();
    D<char> d2('A','B');
    d2.showData();
    return 0;
}
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

template<class T1,class T2>
class D:public C<T1>{
    T2 y;
    public:
        D(T1 ,T2 );
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
template<class T1,class T2>   
D<T1,T2>::D(T1 x,T2 y):C<T1>(x){
    D<T1,T2>::y=y;
    cout<<"Constructor of D\n";
}

template<class T1,class T2>
D<T1,T2>::~D(){ }

template<class T1,class T2>
void D<T1,T2>::showData(){
    C<T1>::showData();
    cout<<D<T1,T2>::y<<"\n";
}

int main(){
    D<int,int> d(10,20);
    d.showData();
    D<int,char> d2('A','B');
    d2.showData();
    return 0;
}
#include<iostream>
using namespace std;

template<class T1,int x> 
class Test{
    T1 *p;
    public:
        Test();
        ~Test();
        void getData(){
            for (int i = 0;i < x; i++)
            {
                cout<<Test<T1,x>::p[i]<<" ";
            }
            cout<<"\n";
            
        }
        void setData(){
            for (int i = 0;i < x; i++)
            {
                cin>>Test<T1,x>::p[i];
            }
            cout<<"Data set\n";

        }
};

template<class T1,int x>
Test<T1,x>::Test(){
    p=new T1[x];
    cout<<"Constructor called\n";
}
template<class T1,int x>
Test<T1,x>::~Test(){
    delete [] p;
    cout<<"Destructor called\n";
}
int main(){
    Test<int,5> t1;
    t1.setData();
    t1.getData();
    Test<char,5> t2;
    t2.setData();
    t2.getData();
    return 0;
}
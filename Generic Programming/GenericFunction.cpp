#include<iostream>
using namespace std;

template<class T>  //template<typename T> {...}
void gen_f(T x){
    cout<<"Within the generic function  "<<x<<"\n";
}

void gen_f(char x){
    cout<<"Within the specific function  "<<x<<"\n";
}
int main(){
    
    gen_f('A'); // Calls the specific function
    gen_f("A"); // Calls the generic function
    gen_f(12.3);
    gen_f(10);

    return 0;
}#include<iostream>
using namespace std;

template<class T>  //template<typename T> {...}
void gen_f(T x){
    cout<<"Within the generic function  "<<x<<"\n";
}

void gen_f(char x){
    cout<<"Within the specific function  "<<x<<"\n";
}
int main(){
    
    gen_f('A'); // Calls the specific function
    gen_f("A"); // Calls the generic function
    gen_f(12.3);
    gen_f(10);

    return 0;
}

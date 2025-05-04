#include<iostream>
using namespace std;

template<class T1,class T2> //template<typename T1,typename T2> {...}
void gen_f(T1 x[],T2 y[]){
    cout<<"Within the generic function  "<<x[0]<<" "<<y[0]<<"\n";
}   

void gen_f(char x,int y){
    cout<<"Within the specific function  "<<x<<" "<<y<<"\n";
}

 


int main(){
int a[5]={1,2,3,4,5};
char t[]="Hello World";
gen_f(a,t);
gen_f(t[0],a[0]);

return 0;
}
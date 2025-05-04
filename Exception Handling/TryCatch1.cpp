#include<iostream>
using namespace std;

int main(){
    int a=10,b=0,c;
    
    try{
        if(b==0) 
        throw b;
        
        c=a/b;
        cout<<c<<"\n";
    }
    catch(int e){ 
        cout<<"Division by zero\n";
    }
   
    catch(...){
        cout<<"Unknown exception\n";
    }



    return 0;
}

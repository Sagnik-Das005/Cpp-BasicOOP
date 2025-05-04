#include <iostream>
using namespace std;

template <typename T>
void Xhandler(T test)
{
try{
if(test) throw test;
else throw "Value is zero";
}
catch(int i) {
cout << "Caught int: " << i << '\n';
}
catch(double d) {
cout << "Caught a double: "<< d << '\n';
}
catch(char c) {
cout << "Caught a char: "<< c << '\n';
}

catch(const char str[]) {
cout << "Caught a string: "<< str << '\n';
}
}
int main()
{
cout << "Start\n";
Xhandler(1);
Xhandler(2.0);
Xhandler(0);
Xhandler('A');
Xhandler("Hello");
cout << "End";
return 0;
}
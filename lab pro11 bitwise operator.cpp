#include <iostream>
using namespace std;

int main(){
  
  int a=10 , b=4;
  
  //Binary AND operator 
  cout<<"a | b is : "<<(a&b)<<endl;
  
  //Binary OR operator
  cout<<"a | b is :"<<(a|b)<<endl;
  
  //Binary XOR operator
  cout<<"a^b is :"<<(a^b)<<endl;
  
  //Left shift operator 
  cout<<"a<<1 is :"<<(a<<1)<<endl;
  
  //Right shift operator
  cout<<"a>>1 is :"<<(a>>1)<<endl;
  
  //Complement operator
  cout<<"~(a) is "<<~(a)<<endl;
  
  return 0;
  
}

Output:

a | b is : 0
a | b is :14
a^b is :14
a<<1 is :20
a>>1 is :5
~(a) is -11

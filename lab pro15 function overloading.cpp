#include<iostream>
using namespace std;

//Function to add two integers
int add(int a, int b){
  return a+b;
}

//Overloading Function to add two double values
double add(double a, double b){
  return a+b;
}

int main(){
  
  //Using the add function with integers arguments
  int intResult = add(50, 30);
  cout<<"Sum of integers 50 and 30 is: "<<intResult<<endl;
  
  //Using the add function with double arguments
  double doubleResult = add(4.5, 5.9);
  cout<<"Sum of doubles 4.5 and 5.9 is: "<<doubleResult<<endl;
  
  return 0;
  
}
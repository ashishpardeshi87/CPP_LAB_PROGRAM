#include<iostream>
using namespace std;

//Function to swap two values using call by reference
void swap(int &a, int &b){
  
  int temp = a;      //store the value of 'a' in a temporary variable
  a = b;             //Assign the value of 'b' to 'a'
  b = temp;          //Assign the value of 'temp'(original 'a') to 'b'
  
}

int main(){
  
  int x, y;
  
  //Input two values from the user
  
  cout<<"Enter value of x: \n";
  cin>>x;
  cout<<"Enter value of y: \n";
  cin>>y;
  
  //Display the values before swapping
  cout<<"\nBefore swapping: \n";
  cout<<"x = "<<x<<", y = "<<y<<endl;
  
  //call the swap Function
  swap(x, y);
  
  //Display the values After swapping
  cout<<"\nAfter swapping: \n";
  cout<<"x = "<<x<<", y = "<<y<<endl;
  
  return 0;
  
}
  
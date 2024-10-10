#include <iostream>
#include <vector>
using namespace std;

int main(){
  //defined list of numbers
  vector<int> numbers={12, 7, 9, 4, 20, 15};
  
  //Variable to store sum , cout of numbers , and count of odds
  int sum=0 , evencount=0 , oddcount=0;
  
  //Loop to analyze numbers
  for (int num : numbers){
    sum +=num;
    if(num%2==0){
      ++evencount;
    }
    else{
      ++oddcount;
    }
  }
  
  //Calculate average
  double average=static_cast<double>(sum)/numbers.size();
  
  //Display the result
  cout<<"List of numbers: "<<endl;
  for(int num:numbers){
    cout<<num<<" ";
  }
  
  cout<<"Analysis results:"<<endl;
  cout<<"Sum:"<<endl;
  cout<<"Average:"<<endl;
  cout<<"Count of even numbers:"<<evencount<<endl;
  cout<<"Count of odd numbers:"<<oddcount<<endl;
  
  return 0;
  
}


Output:

List of numbers: 
12 7 9 4 20 15 Analysis results:
Sum:
Average:
Count of even numbers:3
Count of odd numbers:3

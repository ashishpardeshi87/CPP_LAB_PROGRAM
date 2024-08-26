/*here we are going to code a program to get 
info about different cars using class*/

#include<iostream>
#include<string>
using namespace std;

class cars{
  public:
  //properties of cars (data members)
  string brand;
  string model;
  string type;
  int topspeed;
  int mileage;
  string price;
  
  //Function to display Cars Specifications
  void displayInfo(){
  cout<<"Brand: "<<brand<<endl;
  cout<<"Model: "<<model<<endl;
  cout<<"Type: "<<type<<endl;
  cout<<"Top Speed: "<<topspeed<<" km/hr"<<endl;
  cout<<"Mileage: "<<mileage<<" km/ltr"<<endl;
  cout<<"Price: "<<price<<" USD"<<endl;
  }
};

int main(){
  //Create objects of Cars
  cars c1;
  cars c2;
  
  //Set specification of first car
  c1.brand="koenigsegg";
  c1.model="Agera";
  c1.type="Sports";
  c1.topspeed=443;
  c1.mileage=7;
  c1.price="4.75 million";
  
  //Set specifications of second car
  c2.brand="Mercedes";
  c2.model="G wagon";
  c2.type="SUV";
  c2.topspeed=220;
  c2.mileage=9;
  c2.price="1 million";
  
  //Display info for each car
  cout<<"Car 1 information:"<<endl;
  c1.displayInfo();
  cout<<endl;
  
  cout<<"Car 2 information:";
  c2.displayInfo();
  cout<<endl;
  
  return 0;
}
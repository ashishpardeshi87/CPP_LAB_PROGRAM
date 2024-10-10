#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle(){
    cout<<"I am a vehicle"<<endl;
  }
};

//Derived class fourWheeler(inherits from vehicle)
class FourWheeler : public Vehicle{
  public:
  void fourWheeler(){
    cout<<"I have four wheels"<<endl;
  }
};

//Derived class car(inherits form fourWheeler)
class Car : public FourWheeler{
  public:
  void car(){
    cout<<"I am a car"<<endl;
  }
};

int main(){
  Car mycar;
  
  //call methods of  car, fourWheeler and vehicle through car object
  
  mycar.car();          //Car's method
  mycar.fourWheeler();  //fourWheeler's method
  mycar.vehicle();      //vehicle's method;
  
  return 0;
  
}
  
  
  
  
  

  
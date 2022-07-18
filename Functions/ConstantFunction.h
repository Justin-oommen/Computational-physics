#ifndef ConstantFunction_h  //if not defined then define ConstantFunction.h
#define ConstantFunction_h  

#include<iostream>
#include "Function.h" //Base class where we Inheriting from

//Defining the class ConstantFunction
//In order to inherit the properties of the base class we use the syntax ": public Function" along with the Class defintion of ConstatnFunction

class ConstantFunction : public Function{

 public:
  //Creating a regular Constructor
  ConstantFunction(const std::string& name, double value);
  //Creating a virtual destructors--> Ensure memory leaks doesn't occur when delete an object via base-class pointer
  virtual ~ConstantFunction();
  //Return the value_
  virtual double value(double x) const;
  //Declare the derivative
  virtual double derivative(double x) const;
  //Declaring the integration
  virtual double integrate (double xlow, double xhigh) const;
  //Print function
  virtual void print() const;
  

 private: 
  double value_; //have only one parameter
  


};


#endif

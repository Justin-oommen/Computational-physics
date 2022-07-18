//ConstantFunction.cc

#include<iostream>
#include "ConstantFunction.h"

//Initialization of the value and also since the name is an inherited atribute from the base class Function, therefore it is implemented in this way.(General Syntax is this)
ConstantFunction::ConstantFunction(const std::string& name, double value) : Function(name){
  value_=value;
}
//Implementing the virtual destructors
virtual ~ConstantFunction()
double ConstantFunction::value(double x) const{
  return value_;
}

double ConstantFunction::derivative(double x) const{
  return 0;
}

double ConstantFunction::integrate(double xlow, double xhigh) const{
  return (xhigh-xlow)*value_;
}

void ConstantFunction::print() const{
  std::cout<< "Constant Function with name: "<< name() << "F(x) = "<< value_<<std::endl;
}

//ExponentialFunction.cc

#include<iostream>
#include<cmath>
#include "ExponentialFunction.h"

ExponentialFunction::ExponentialFunction(const std::string& name, double value) : Function(name){
  value_= value;
}

double ExponentialFunction::value(double x) const{
  double y = exp(x);
  return y;
}

double ExponentialFunction::derivative(double x) const{
  double dy = exp(x);
  return dy;
}

//double ExponentialFunction::integrate(double xlow, double xhigh) const {
  
//}

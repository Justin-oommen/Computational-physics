#ifndef ExponentialFunction_h
#define ExponentialFunction_h

#include<iostream>
#include "Function.h"

class ExponentialFunction : public Function{
public:
  ExponentialFunction(const std::string& name, double value);
  // virtual ~ExponentialFunction();
  virtual double value(double x) const;
  virtual double derivative(double x) const;
  virtual double integrate(double xlow, double xhigh) const;
  virtual void print() const;
private:
  double value_;
  
};


#endif

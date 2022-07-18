#ifndef Polynomial_h
#define Polynomial_h

#include "Function.h"
#include<vector>

class Polynomial : public Function{
  
 public:
  Polynomial(const std::string& name, double degree, double value);
  // virtual ~Polynomial();
  // virtual double value(double x) const;
  //virtual double derivative(double x) const;
  //virtual double integrate(double xlow, double xhigh) const;
  virtual void print() const;
  

 private:
  // std::vector<double> coeff_; //number of coefficients
  double degree_; //number of degrees
  double value_; //value of x 
};
#endif

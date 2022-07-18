//Function.h
#ifndef Function_h
#define Function_h

#include<iostream>

class Function{

 public:
  Function();
  Function(const std::string& name);
  //virtual ~Function();
  // virtual double value(double x) const = 0;
  //virtual double derivative(double x) const = 0;
  //virtual double integrate(double xlow, double xhigh ) const = 0;
  virtual void print() const;
  // virtual std::string name() const{ return name_;}
  

 private:
  std::string name_;
};
#endif

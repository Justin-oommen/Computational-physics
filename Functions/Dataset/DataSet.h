//DataSet.h

#ifndef DataSet_h
#define DataSet_h

#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using std::vector;
using std::string;
using std::fstream;
using std::ifstream;

class DataSet{

 public:
  
  std::vector<double> data;
  
  //constructor
  DataSet(const string& name, const double& N, const ifstream& filepath);

  //copy constructor
  

  //setup to create n rela numbers
  void setup(const double& N);
  void filetocall(const ifstream& filepath);
  //add and remove method
  void add_element(double* num);
  void remove_element();

  //print
  virtual void print() const;
  //getter
  string name() const {return name_;}
  //double dataset_size() const {return N_;}
  //ifstream filepath() const {return filepath_;}
  //mean
  virtual void mean(double N) const = 0 ;
  
 private:

  string name_;
  double N_;
  ifstream filepath_;
  

};


#endif

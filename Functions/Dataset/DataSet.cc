//DataSet.cpp

#include "DataSet.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::vector;

//vector<double> data;

DataSet::DataSet(const string& name, const double& N, const ifstream& filepath){
  name_ = name;
  N_ = N;
  filepath_ = filepath;
  setup(N_);
  filetocall(filepath_);

}


void DataSet::setup(const double& N){
  data.clear();
  ofstream file;
  file.open("test.txt");
  for (int i =1; i<=N; ++i){
    file<< data.push_back(i)<<endl;;
  }
  file.close();
}

void DataSet::filetocall(const ifstream& filepath){
   //reading the text file
  ifstream file;
  file.open("test.txt");
  double dataset;
  while (getline(filepath,data)){
    data.push_back(dataset);
  }
  file.close();

}


//add
void DataSet::add_element(double* num){
  data.push_back(*num);
}

//remove
void DataSet::remove_element(double* num){
  data.erase(data.begin()+*num);
}

void DataSet::print() const {
  cout<<"name: "<<name()<<"\t dataset size: "<<setup().size()<<endl;
  //"\t file path: "<<filepath()<<endl;
  cout<<"======== Data ======== "<<endl;
  for (int i =0; i<data.size(); ++i){
    cout<<data[i];
  }
  cout<<endl;
}




//Composite Particle.h

#ifndef CompositeParticle_h
#define CompositeParticle_h

#include<iostream>
#include<string>
#include<list>

#include "Particle.h"
#include "TLorentzVector.h"

using std::string;
using std::list;
using std::ostream;

class CompositeParticle : public Particle{
 public:
  
  //constructor
  CompositeParticle(const string& name);

  //add and remove
  void add(Particle* part);
  void remove(Particle* part);

  virtual double energy() const;
  virtual double momentum() const;
  virtual void print() const;
  friend ostream& operator<<(ostream& os, const CompositeParticle& p);
  CompositeParticle operator+(Particle& rhs) const;
  CompositeParticle operator+(CompositeParticle& rhs) const;
  friend CompositeParticle operator+(Particle& lhs, CompositeParticle& rhs);
  friend CompositeParticle operator+(Particle& lhs, Particle& rhs);

  
  
 private:
  list<Particle*> particles_;
};

#endif

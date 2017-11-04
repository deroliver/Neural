#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
using namespace std;

class Neuron
{
public:
  // Fast sigmoid function
  void activate();

private:
  double val;
  double activatedVal;
  double derivedVal;
};

#endif
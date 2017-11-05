#include <iostream>

#include "../include/Neuron.hpp"

using namespace std;

int main(int argc, char **argv) {
  Neuron *n = new Neuron(0.9);
  cout << "Val: " << n->getVal() << std::endl;
  cout << "Activated Val: " << n->getActivatedVal() << std::endl;
  cout << "Derived Val: " << n->getDerivedVal() << std::endl;
}
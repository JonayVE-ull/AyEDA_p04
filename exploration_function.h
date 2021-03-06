#ifndef _EXPLORATION_FUNCTION_
#define _EXPLORATION_FUNCTION_

template <class Key>
class ExplorationFunction {
 public:
  // Constructores
  ExplorationFunction() {};
  // Métodos virtuales
  virtual unsigned operator()(const Key& k, unsigned i) const = 0;
};

#endif  // _EXPLORATION_FUNCTION_
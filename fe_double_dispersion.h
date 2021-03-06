#ifndef _FE_DOUBLE_DISPERSION_
#define _FE_DOUBLE_DISPERSION_

#include "dispersion_fuction.h"
#include "exploration_function.h"

template <class Key>
class feDoubleDispersion : public ExplorationFunction<Key> {
 public:
  // Constructores
  feDoubleDispersion(DispersionFunction<Key>& fd) : fd_(fd) {}
  // Sobrecarga del operador ()
  unsigned operator()(const Key& k, unsigned i) const { return i * fd_(k); }

 private:
  DispersionFunction<Key>& fd_; // Función de dispersión
};

#endif  // _FE_DOUBLE_DISPERSION_
#include "memory/allocation.hpp"
#include "utilities/ostream.hpp"

#ifndef PRODUCT

void AllocatedObj::print() const {print_on(tty);}
void AllocatedObj::print_value() const{print_value_on(tty);}

void AllocatedObj::print_on(outputStream* st) const {
  //st->print_cr("AllocatedObj(" INTPTR_FORMAT ")", p2i(this));
}

void AllocatedObj::print_value_on(outputStream* st) const {
  //st->print("AllocatedObj(" INTPTR_FORMAT ")", p2i(this));
}
#endif

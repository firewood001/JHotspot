#ifndef SHARE_VM_MEMORY_ALLOCATION_HPP
#define SHARE_VM_MEMORY_ALLOCATION_HPP

#include "utilities/ostream.hpp"

#ifdef PRODUCT
#define ALLOCATION_SUPER_CLASS_SPEC
#else
#define ALLOCATION_SUPER_CLASS_SPEC : public AllocatedObj
class AllocatedObj{
    public:
        //Printing support
        void print() const;
        void print_value() const;

        virtual void print_on(outputStream* st) const;
        virtual void print_value_on(outputStream* st) const;
};

class ResourceObj ALLOCATION_SUPER_CLASS_SPEC{

};ß
#endif
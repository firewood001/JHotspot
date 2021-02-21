#include "allocation_test.hpp"

void Allocation_test::initialize()
{
    
}

void Allocation_test::test_print()
{
    AllocatedObj *obj = new AllocatedObj();
    obj->print();
}
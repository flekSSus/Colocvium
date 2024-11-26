#include <iostream>
#include "Factorial.h"

int main()
{
   int value(3);
   Factorial fact(value);
    long long* arr;

   arr=fact.Calculate();

   for(int i(0);i<value+1;++i)
        std::cout<<arr[i];
}

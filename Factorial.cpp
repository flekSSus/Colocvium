#include "Factorial.h"

Factorial::Factorial():value(0){}
Factorial::Factorial(int value):value(value){}

long long* Factorial::Calculate()
{
    long long * facts= new long long[value+1];
    facts[0]=1;
    for(int i(1),tmp(1);i<value+1;++i)
    {
        facts[i]=facts[i-1]*i;
    }

    return facts;
    
}

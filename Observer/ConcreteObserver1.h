#ifndef CONCRETEOBSERVER1
#define CONCRETEOBSERVER1

#include <iostream>
#include "ConcreteObservable.h"


class ConcreteObserver1 : public IObserver
{
public:
    void handleEvent(const ConcreteObservable& ref)
    {
    	std::cout << ref.get() << std::endl;
    }
};

#endif //CONCRETEOBSERVER1
#ifndef CONCRETEOBSERVER2
#define CONCRETEOBSERVER2

#include <iostream>
#include "ConcreteObservable.h"


class ConcreteObserver2 : public IObserver
{
public:
    void handleEvent(const ConcreteObservable& ref)
    {
    	std::cout << "length = " << ref.get().length() << std::endl;
    }
};

#endif //CONCRETEOBSERVER2
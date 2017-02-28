#ifndef IOBSERVER
#define IOBSERVER

#include "ConcreteObservable.h"

class ConcreteObservable;

class IObserver
{
public:
    virtual void handleEvent(const ConcreteObservable&) = 0;
};

#endif //IOBSERVER
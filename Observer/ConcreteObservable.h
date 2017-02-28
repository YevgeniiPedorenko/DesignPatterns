#ifndef CONCRETEOBSERVABLE
#define CONCRETEOBSERVABLE

#include <string>
#include <list>
#include "IObserver.h"
#include "IObservable.h"

class ConcreteObservable : public IObservable
{
    std::string _str;
    std::list<IObserver*> _observers;
 
    void _Notify()
    {
        for(std::list<IObserver*>::iterator iter = _observers.begin(); iter != _observers.end(); ++iter)
        {
            (*iter)->handleEvent(*this);
        }
    }
 
public:
    void add(IObserver& ref)
    {
        _observers.push_back(&ref);
    }
 
    void remove(IObserver& ref)
    {
        _observers.remove(&ref);
    }
 
    const std::string& get() const
    {
        return _str;
    }
 
    void reset(std::string str)
    {
        _str = str;
        _Notify();
    }
};

#endif //CONCRETEOBSERVABLE
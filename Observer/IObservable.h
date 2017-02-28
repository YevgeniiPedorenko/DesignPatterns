#ifndef IOBSERVABLE
#define IOBSERVABLE

#include <string>

class IObservable
{ 
    virtual void _Notify() = 0;
 
public:
    virtual void add(IObserver& ref) = 0;

    virtual void remove(IObserver& ref) = 0;
 
    virtual const std::string& get() const = 0;

    virtual void reset(std::string str) = 0;
};

#endif //IOBSERVABLE
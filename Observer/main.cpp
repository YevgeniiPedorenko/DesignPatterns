#include <iostream>

#include "ConcreteObservable.h"
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"

using namespace std;

int main()
{
	ConcreteObservable _observable;
	ConcreteObserver1  _observer1;
	ConcreteObserver2  _observer2;

	_observable.reset("First");
	
	_observable.add(_observer1);
	_observable.reset("Second");

	cout << "---------------------------" << endl;

	_observable.add(_observer2);
	_observable.reset("Thrid");

	cout << "---------------------------" << endl;

	_observable.add(_observer1);
	_observable.add(_observer2);
	_observable.reset("VVWVWVV");

	cout << "---------------------------" << endl;

	_observable.remove(_observer2);
	_observable.reset("After REMOVE");	

	cout << "---------------------------" << endl;

	_observable.remove(_observer1);
	_observable.reset("After REMOVE AFTER REMOVE");

    return 0;
}
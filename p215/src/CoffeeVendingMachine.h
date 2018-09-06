#ifndef COFFEEVENDINGMACHINE_H_
#define COFFEEVENDINGMACHINE_H_
#include "Container.h"

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEpresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

#endif /* COFFEEVENDINGMACHINE_H_ */

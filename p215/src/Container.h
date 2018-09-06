#ifndef CONTAINER_H_
#define CONTAINER_H_

class Container {
	int size;
public:
	Container(){
		size = 10;
	}
	void fill();
	void consum();
	int getSize();

};

#endif /* CONTAINER_H_ */

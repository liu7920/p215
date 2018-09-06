#include "Container.h"

void Container::fill(){
	size = 10;
}
void Container::consum(){
	size = size-1;
}
int Container::getSize(){
	return size;
}

#include "../includes/Float.hpp"

Float::Float() {}

Float::Float(const Float &fl) {
	*this = fl;
}

Float::~Float(void) {}

Float		&Float::operator= (const Float &fl) {

	if (this != &fl) {
		this->number = fl.number;
	}
	return *this;
}

void		Float::setNumber(float number) {

	this->number = number;
}

float		Float::getNumber(void) const {

	return this->number;
}

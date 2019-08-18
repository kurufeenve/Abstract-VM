#include "../includes/Int8.hpp"

Int8::Int8() {}

Int8::Int8(const Int8 &int8) {
	*this = int8;
}

Int8::~Int8(void) {}

Int8		&Int8::operator= (const Int8 &int8) {

	if (this != &int8) {
		this->number = int8.number;
	}
	return *this;
}

void		Int8::setNumber(int8_t number) {

	this->number = number;
}

int8_t		Int8::getNumber(void) const {

	return this->number;
}

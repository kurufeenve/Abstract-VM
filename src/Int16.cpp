#include "../includes/Int16.hpp"

Int16::Int16() {}

Int16::Int16(const Int16 &int16) {
	*this = int16;
}

Int16::~Int16(void) {}

Int16		&Int16::operator= (const Int16 &int16) {

	if (this != &int16) {
		this->number = int16.number;
	}
	return *this;
}

void		Int16::setNumber(int16_t number) {

	this->number = number;
}

int16_t		Int16::getNumber(void) const {

	return this->number;
}

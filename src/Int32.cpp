#include "../includes/Int32.hpp"

Int32::Int32() {}

Int32::Int32(const Int32 &int32) {
	*this = int32;
}

Int32::~Int32(void) {}

Int32		&Int32::operator= (const Int32 &int32) {

	if (this != &int32) {
		this->number = int32.number;
	}
	return *this;
}

void		Int32::setNumber(int32_t number) {

	this->number = number;
}

int32_t		Int32::getNumber(void) const {

	return this->number;
}

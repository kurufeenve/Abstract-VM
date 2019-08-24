#include "../includes/Double.hpp"

Double::Double() {}

Double::Double(const Double &db) {
	*this = db;
}

Double::~Double(void) {}

Double		&Double::operator= (const Double &db) {

	if (this != &db) {
		this->number = db.number;
	}
	return *this;
}

void		Double::setNumber(double number) {

	this->number = number;
}

double		Double::getNumber(void) const {

	return this->number;
}

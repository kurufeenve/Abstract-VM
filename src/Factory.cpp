#include "../includes/Factory.hpp"
#include "../includes/Operand.hpp"

IOperand const * Factory::createInt8( std::string const & value ) const {

	int64_t val = std::stoi(value);
	if (val < std::numeric_limits<int8_t>::min() || val > std::numeric_limits<int8_t>::max()) {
		// throw exeption
	}
	return new Operand<int8_t>(eOperandType::INT8, val); 
}

IOperand const * Factory::createInt16( std::string const & value ) const {

	int64_t val = std::stoi(value);
	if (val < std::numeric_limits<int16_t>::min() || val > std::numeric_limits<int16_t>::max()) {
		// throw exeption
	}
	return new Operand<int16_t>(eOperandType::INT16, val);
}

IOperand const * Factory::createInt32( std::string const & value ) const {

	int32_t val = std::stoi(value);
	return new Operand<int32_t>(eOperandType::INT32, val);
}

IOperand const * Factory::createFloat( std::string const & value ) const {

	float	val = std::stof(value);
	return new Operand<float>(eOperandType::FLOAT, val);
}

IOperand const * Factory::createDouble( std::string const & value ) const {

	double	val = std::stod(value);
	return new Operand<double>(eOperandType::DOUBLE, val);
}

Factory::Factory() {

	this->_methods.emplace(eOperandType::INT8, &Factory::createInt8);
}

Factory::Factory(const Factory &Fac) {
	
	*this = Fac;
}

Factory	&Factory::operator= (const Factory &Fac){

	if (this != &Fac) {
		
	}
	return *this;
}

Factory::~Factory() {}

IOperand const * Factory::createOperand( eOperandType type, std::string const & value ) const {

	// const IOperand *(Factory::*pFunction)(std::string const &) const;

	// pFunction = this->_methods.at(type);
	// return (this->*pFunction)(value);
	return (this->*(_methods.at(type)))(value);
}

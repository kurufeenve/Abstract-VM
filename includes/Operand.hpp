#pragma once

//external
#include <string>

//internal
#include "IOperand.hpp"
#include "eOperandType.hpp"
#include "Factory.hpp"

class Factory;

template <class T>
class Operand: public IOperand
{
private:

	Factory			*_F = new Factory();
	T				_value;
	int				_precision;
	eOperandType	_type;
	Operand() {}
	Operand(const Operand<T> &Op) {
		*this = Op;
	}
	~Operand() {}
	
public:

	Operand(eOperandType type, T val) {

		this->_type = type;
		this->_value = val;
		this->_precision = 0;
	}

	int getPrecision( void ) const {

		return this->_precision;
	}

	eOperandType getType( void ) const {

		return this->_type;
	}

	T			getValue() const {

		return this->_value;
	}

	Operand<T>	&operator= (const Operand<T> &Op) {
		
		if (this != &Op) {
			this->_type = Op._type;
			this->_value = Op._value;
			this->_precision = Op._precision;
		}
		return *this;
	}

	IOperand const * operator+( IOperand const & rhs ) const {
		
		// if(this->_precision >= rhs.getPrecision()) {
		// 	return new F.createOperand(this->_type, std::to_string(this->_value + rhs.getValue()));
		// }
		// else {
		// 	return new F.createOperand(rhs.getType(), std::to_string(this->_value + rhs.getValue()));
		// }
		return &rhs;
	}
	
	IOperand const * operator-( IOperand const & rhs ) const {

		return &rhs;
	}

	IOperand const * operator*( IOperand const & rhs ) const {

		return &rhs;
	}

	IOperand const * operator/( IOperand const & rhs ) const {

		return &rhs;
	}

	IOperand const * operator%( IOperand const & rhs ) const {

		return &rhs;
	}

	std::string const & toString( void ) const {

		static const std::string ret = std::to_string(this->_value);
		return ret;
	}
};

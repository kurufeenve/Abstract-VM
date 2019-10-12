#ifndef OPERAND_HPP
#define OPERAND_HPP

//internal
#include "IOperand.hpp"

enum class eOperandType {
	INT8_T,
	INT16_T,
	INT32_T,
	FLOAT,
	DOUBLE
};

template <class T>
class Operand: public IOperand
{
private:

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

	int getPrecision( void ) const; {

		return this->_precision;
	}

	eOperandType getType( void ) const; // Type of the instance

	Operand<T>	&operator= (const Operand<T> &Op) {
		
		if (this != &Op) {
			this->_type = Op._type;
			this->_value = Op._value;
			this->_precision = Op._precision;
		}
		return *this;
	}

	IOperand const * operator+( IOperand const & rhs ) const {

		
	}

	IOperand const * operator-( IOperand const & rhs ) const;
	IOperand const * operator*( IOperand const & rhs ) const; // Product
	IOperand const * operator/( IOperand const & rhs ) const; // Quotient
	IOperand const * operator%( IOperand const & rhs ) const; // Modulo
	std::string const & toString( void ) const; // String representation of the instance
};

#endif

#ifndef OPERAND_HPP
#define OPERAND_HPP

//internal
#include "IOperand.hpp"

template <class T>
class Operand: public IOperand
{
private:
	<T>	value;
	int	precision;
	
public:
	Operand(/* args */);
	~Operand();
	int getPrecision( void ) const = 0; {

		return this->_precision;
	}
	eOperandType getType( void ) const = 0; // Type of the instance
	IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	std::string const & toString( void ) const = 0; // String representation of the instance
};

#endif

#ifndef FACTORY_HPP
#define FACTORY_HPP

//external
#include <map>
#include <limits>
#include <functional>

//internal
#include "Operand.hpp"

class Factory {

private:

	std::map<eOperandType, IOperand const *(Factory::*)(std::string const &) const>	_methods;
	IOperand const * createInt8( std::string const & value ) const;
	IOperand const * createInt16( std::string const & value ) const;
	IOperand const * createInt32( std::string const & value ) const;
	IOperand const * createFloat( std::string const & value ) const;
	IOperand const * createDouble( std::string const & value ) const;

public:

			Factory();
			Factory(const Factory &Fac);
	Factory	&operator= (const Factory &Fac);
			~Factory();
	IOperand const * createOperand( eOperandType type, std::string const & value ) const;
	
};

#endif

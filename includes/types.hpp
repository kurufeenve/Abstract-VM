#ifndef TYPES_HPP
#define TYPES_HPP

#include "IOperand.hpp"

enum class eOperandType {

	INT8 = 0x00,
	INT16 = 0x01,
	INT32 = 0x02,
	FLOAT = 0x03,
	DOUBLE = 0x04,
	UNDEFINED = 0xFF
};

template <typename T>
class Value {
	private:
		eOperandType	_type;
		T				_value;

	public:
		Value<T>() : _type(eOperandType::UNDEFINED) {
			
			return ;
		}

		Value<T>(const Value<T> &V) {

			*this = V;
		}

		virtual ~Value() {

			return ;
		}

		Value<T> &operator= (const Value<T> &V) {

			if (this != &V) {
				this->_type = V._type;
				this->_precision = V._precision;
			}
			return (*this);
		}

		void	setValue(T val) {

			this->_value = val;
			if (T == )
		}


		
};

#endif

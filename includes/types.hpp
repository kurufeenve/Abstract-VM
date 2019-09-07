#ifndef TYPES_HPP
#define TYPES_HPP

#include "IOperand.hpp"

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
			//if (T == )
		}


		
};

#endif

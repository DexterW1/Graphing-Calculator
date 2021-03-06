#ifndef _TAN_HPP_
#define _TAN_HPP_

#include "base.hpp"

class Tan : public Base {
	public:
		Tan(Base* deg);
		virtual double evaluate();
		virtual int evaluateInt(){};
		virtual std::string stringify();
		virtual std::string stringifyInt(){};
                virtual int associative(){};
                virtual int precedence(){};

	private:
		Base* degree;
};

#endif

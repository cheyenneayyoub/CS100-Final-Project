#ifndef __ORDER_HPP__
#define __ORDER_HPP__

#include <string>


using namespace std;

class Order {
private:

public:
	
	virtual ~Order() {}
	virtual bool organize(const Task* tasks) const;
	
	
};

#endif //__ORDER_HPP__

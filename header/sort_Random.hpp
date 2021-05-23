#ifndef __Sort_Random__
#define __Sort_Random__

#include <string>


using namespace std;

class Sort_Random{
private:

public:
//	 Order* item1;
	virtual ~Sort_Random() {}
	Sort_Random() {}
	virtual bool organize(const Task* tasks) const;
	
	
};

#endif //__Sort_Random_HPP__

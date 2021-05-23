#ifndef __Sort_Ascending__
#define __Sort_Ascending__

#include <string>


using namespace std;

class Sort_Ascending{
private:

public:
//	 Order* item1;
	virtual ~Sort_Ascending() {}
	Sort_Ascending() {}
	virtual bool organize(const Task* tasks) const;
	
	
};

#endif //__Sort_Ascending_HPP__

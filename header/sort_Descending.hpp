#ifndef __Sort_Descending__
#define __Sort_Descending__

#include <string>


using namespace std;

class Sort_Descending{
private:

public:
//	 Order* item1;
	virtual ~Sort_Descending() {}
	Sort_Descending() {}
	virtual bool organize(const Task* tasks) const;
	
	
};

#endif //__Sort_Descending_HPP__

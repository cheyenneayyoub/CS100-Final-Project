#ifndef __INDIVTASK_HPP__
#define __INDIVTASK_HPP__

//#include "strategy.cpp"
#include "task.hpp"
#include "iostream"
#include "vector"

using namespace std;

class IndivTask : public Task {
	private:
		
	public:
		IndivTask(const string& dow, string title);
		//virtual ~IndivTask() {}
//		virtual void removeTask(int id);
		virtual void markComplete(int id);
		virtual void modifyTask(string dow, string title, int id);		

};



#endif //__INDIVTASK_HPP__


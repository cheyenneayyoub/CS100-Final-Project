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
//		Strategy* sort;
		string daysOfWeek;
		string title;
		bool complete;
		IndivTask(const string& dow, string title);

		//virtual ~IndivTask() {}
		
		virtual void remove();
		virtual void  markComplete();
		virtual string printToDo();
		virtual void modifyTask(const string& dow, string title);		
};

#endif //__INDIVTASK_HPP__


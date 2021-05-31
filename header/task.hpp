#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.cpp"

using namespace std;

class Task {
	public:
//		Strategy* sort;
		bool complete;
                string daysOfWeek;
                string title;
		static int nextId;
		int id;
		
		Task() { id = nextId++; }		
		//virtual ~Task() {}

		virtual void markComplete() = 0;
		virtual void modifyTask(const string& dow, string title) = 0;
};

int Task::nextId = 1;

#endif //__TASK_HPP__

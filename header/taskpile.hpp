#ifndef __TASKPILE_HPP__
#define __TASKPILE_HPP__

#include "task.hpp"
#include <vector>

using namespace std;


class TaskPile : public Task {
	public:
		vector<Task*> tasks;
		string name;
		virtual void markComplete(int id);
		TaskPile(string title);
		virtual void modifyTask(string dow, string title, int id);
//		virtual void removeTask(int id); //could be a function of task pile but would need an id
		void add_task(Task* task);
		~TaskPile();

};


#endif

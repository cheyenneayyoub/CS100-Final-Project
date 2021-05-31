#ifndef __SORT_RANDOM_HPP__
#define __SORT_RANDOM_HPP__

#include "order.hpp"
#include <algorithm>    
#include <vector>       
#include <ctime>        
#include <cstdlib>      
#include <string>
//based on Sid's code

class Sort_Random: public Order {
	public:
	Strategy* item3;
	unsigned int i;



	void swap(int x, int y) { 
		srand(unsigned(time(NULL)));
		Task* temp = nullptr; 
		temp = item3->todo.at(x); 

		if (rand() % 100 + 1 <= 50) {
			item3->todo.at(x) = item3->todo.at(y); 
			item3->todo.at(y) = temp;
		}
		else {

			
			item3->todo.at(x);
			item3->todo.at(y);

		}


	//	delete temp; 
	}

	virtual bool organize(){
		int i, j;
		for (i = 0; i < item3->todo.size() - 1; i++){
		
		for (j = 0; j < item3->todo.size() - i - 1; j++){
			if (item3->todo.at(j)->complete == false){
				swap(j, j + 1);
			}
		}
	return true;
	}	





//~Sort_Random{}





#endif//__SORT_RANDOM_HPP



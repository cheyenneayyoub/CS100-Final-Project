#ifndef __SORT_ASCENDING_HPP__
#define __SORT_ASCENDING_HPP__

#include "order.hpp"
#include "strategy.hpp"
#include <string>

class Sort_Ascending: public Order {
	public:
	Strategy* item1;
	unsigned int i;
		
	void swap(int x, int y){
		Task* temp = nullptr;
		temp = item1->todo.at(x);
	//	delete xp;
		
		item1->todo.at(x) = item1->todo.at(y);
		item1->todo.at(y) = temp;

	//	delete temp;
		
	}
		
	bool ascending_done(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
			if (item1->todo.at(j)->complete == false){
				swap(j, j + 1);
			}
		}
	}
	
	return true;		
	}
	
	bool ascending_dow(){
		int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++) { 
                        if ((item1->todo.at(j)->daysOfWeek).length() >  (item1->todo.at(j+1)->daysOfWeek).length()){
                                swap(j, j + 1);
                        }
                }
        }

        return true;		
	}

	bool ascending_title(){
                int i, j, k;
                unsigned int l1, l2;
		unsigned char tmp1, tmp2;
		unsigned int inc = 0;
		for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
			for (k = 0; k < (item1->todo.at(j)->title).length(); k++){
			tmp1 = (item1->todo.at(j)->title).at(k);
			tmp2 = (item1->todo.at(j + 1)->title).at(k);
			if (tmp1 > tmp2){
			inc++;
			}	
			if (inc != 0){ 
			swap(j, j + 1);
			inc = 0;
			}
			}
		}
		}        
               

        return true;
	}
	
	
	bool ascending_id(){
 	        int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
                        if (item1->todo.at(j)->id > item1->todo.at(j+1)->id){
                                swap(j, j + 1);
                        }
                }
        }

        return true;	
	}

	
	Sort_Ascending(int userChoice, Strategy* taskInit){
		i = userChoice;	
		item1 = taskInit;
	}


	~Sort_Ascending (){
		//delete item1;			
	}

	virtual bool organize() {
	bool func_compl = false;	
	if (i == 1)	
		func_compl = ascending_done();
	if (i == 2)
		func_compl = ascending_dow();
	if (i == 3)
		func_compl = ascending_title();
	if (i == 4)
		func_compl = ascending_id();
	  	
	return func_compl;				
	}
};

#endif //__SORT_ASCENDING_HPP__

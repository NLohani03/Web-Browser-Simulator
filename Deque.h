#include <iostream>
#include "Linked_List.h"
using namespace std; 


class Deque: public Linked_List { 
    private:
    int max_capacity; 
    
    public:
    Deque(); 
    Deque(int max_cap); 
    void push_front(string url_name, string url); 
    void push_back(string url_name, string url); 
    void pop_front(); 
    void pop_back(); 

};
#include <iostream>
#include "Node.h"
using namespace std; 

class Linked_List {
    protected:
    Node *head; 
    Node *tail;
    int list_size; 

    public:
    //constructor and deconstructor
    Linked_List(); 
    ~Linked_List(); 

    //accessors 
    int size() const; 
    void front() const;
    void back() const;  
    bool empty() const; 
    
    //mutators
    void insert_front(string url_name, string url); 
    void insert_end(string url_name, string url); 
    bool delete_front(); 
    bool delete_end(); 

    //linear run time
    void clear();
    void find(string urlname);  
    void print() const;
};

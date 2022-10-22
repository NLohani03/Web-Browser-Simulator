#include <iostream>
using namespace std; 

class Node { 
    private:
    string name; 
    string link; 
    Node *next;
    Node *prev;

    public:
    //constructors and deconstructors
    Node(); 
    Node(string nm, string lnk); 
    ~Node();  

    //deconstructor
    string getname() const; 
    string getlink() const; 

    void setname(string urlname); 
    void setlink(string urllink); 

    Node* getNext() const; 
    Node* getPrev()const; 

    void setNext(Node* nextNode); 
    void setPrev(Node* prevNode); 
};
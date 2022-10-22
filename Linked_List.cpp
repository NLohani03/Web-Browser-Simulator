#include "Linked_List.h"
#include <iostream>

/*----Constructors and Deconstructors----*/
Linked_List::Linked_List() { 
    head = nullptr; 
    tail = nullptr; 
    list_size = 0; 
}

Linked_List::~Linked_List() {  
    Node *temp = nullptr;
    while (head != nullptr) {
        temp = head; 
        head = head->getNext(); 
        delete temp;
    }
    delete head; 
    head = nullptr;
    delete temp;  
    tail = nullptr; 
    list_size = 0;   
}

/*----Accessors----*/
int Linked_List::size() const {
    return list_size; 
}

bool Linked_List::empty() const { 
    if(head == nullptr && tail == nullptr && list_size == 0) { 
        return true; 
    } else { 
        return false; 
    }
}

void Linked_List::front() const { 
    if (empty()) { 
        cout << "failure" << endl;
    } else { 
        string urlname = head->getname();
        string urllink = head->getlink();
        cout << "front is " << urlname << " " << urllink << endl;
    }
   
}

void Linked_List::back() const {
    if (empty()) { 
        cout << "failure" << endl;
    } else { 
        string urlname = tail->getname();
        string urllink = tail->getlink();
        cout << "back is " << urlname << " " << urllink << endl;
    }   
}

/*----Mutators----*/

//insertion at the front
void Linked_List::insert_front(string url_name, string url) { 
    Node *newNode = new Node(url_name, url); 
    if (empty()) { 
        head = newNode; 
        tail = newNode; 
    } else { 
        newNode->setNext(head); 
        newNode->setPrev(nullptr); 
        head->setPrev(newNode);
        head = newNode; 
    }
    list_size++; 
    cout << "success" << endl;
}

//insertion at the end 
void Linked_List::insert_end(string url_name, string url) { 
    Node *newNode = new Node(url_name, url); 
    if(empty()) { 
        head = newNode; 
        tail = newNode; 
    } else { 
        newNode->setNext(nullptr); 
        newNode->setPrev(tail); 
        tail->setNext(newNode);
        tail = newNode; 
    }
    list_size++; 
    cout << "success" << endl;
}

//deletion at the first node 
bool Linked_List::delete_front() { 
    bool deleted = false; 
    if (!empty()) { 
        Node *temp = head;  
        if (list_size == 1) { 
            delete head; 
            head = nullptr;
            tail = nullptr;
            list_size--;
            deleted = true; 
        } else { 
            head = head->getNext(); 
            delete temp; 
            head->setPrev(nullptr); 
            list_size--; 
            deleted = true; 
        }
    }
    return deleted; 
}

//deletion at the last node 
bool Linked_List::delete_end() { 
    bool deleted = false; 
    if (!empty()) { 
        Node *temp = tail;  
        if(list_size == 1) { 
            delete tail; 
            tail = nullptr; 
            head = nullptr; 
            list_size--; 
            deleted = true; 
        } else { 
            tail = tail->getPrev(); 
            delete temp; 
            tail->setNext(nullptr); 
            list_size--; 
            deleted = true; 
        } 
    }
    return deleted; 
}


/*----linear runtime----*/

void Linked_List::clear(){
    Node *temp = nullptr;
    while (head != nullptr) {
        temp = head; 
        head = head->getNext(); 
        delete temp;
    }
    head = nullptr; 
    tail = nullptr; 
    list_size = 0; 
    cout << "success" << endl;
}

void Linked_List::find(string url_name){
    
    if(head == nullptr) { 
        cout << "not found " << url_name << endl;
    } else { 
        Node *temp = head;
        if (temp->getname() == url_name) { 
            cout << "found " << temp->getname() << " " << temp->getname() << endl;
            return;
        }
        
        while (temp->getname() != url_name && temp->getNext() != nullptr) { 
            if(temp->getNext()->getname() == url_name) { 
                cout << "found " << temp->getNext()->getname() << " " << temp->getNext()->getlink() << endl;
                return;
            }
            temp = temp->getNext(); 
        }
        cout << "not found " << url_name << endl;
    }  
} 

void Linked_List::print() const{
    if (empty()) { 
        cout << "deque is empty" << endl;
    } else { 
        Node *temp = tail; 
        while(temp != nullptr) { 
            cout << temp->getname() << " " << temp->getlink() << "\n";
            temp = temp->getPrev(); 
        }
    } 
}
#include "Deque.h"
#include <iostream>
using namespace std; 

Deque::Deque() {
    head = nullptr; 
    tail = nullptr; 
}
Deque::Deque(int max_cap) { 
    head = nullptr; 
    tail = nullptr; 
    list_size = 0; 
    max_capacity = max_cap; 
    cout << "success" << endl;
} 

void Deque::push_front(string url_name, string url) { 
    if(size() < max_capacity) { 
        insert_front(url_name, url); 
    } else if (size() == max_capacity) { 
        if (delete_end()) { 
            insert_front(url_name, url); 
        } 
    }
}
    
void Deque::push_back(string url_name, string url) { 
    if(size() < max_capacity) { 
        insert_end(url_name, url); 
    } else if (size() == max_capacity) { 
        if (delete_front()) { 
            insert_end(url_name, url); 
        }    
    }
}

void Deque::pop_front() { 
    if (delete_front()) { 
        cout << "success" << endl; 
    } else { 
        cout << "failure" << endl;
    }
} 

void Deque::pop_back() { 
    if (delete_end()) { 
        cout << "success" << endl; 
    } else { 
        cout << "failure" << endl;
    }
}


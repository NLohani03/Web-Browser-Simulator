#include "Deque.h"
#include <iostream> 
using namespace std; 


//function declarations
int main() { 
    std::string input = "a";
    std::string command; 
    int parameter;

    while(getline(std::cin, input)) { 
        command = input.substr(0, input.find(" "));

        Deque *new_deque;  
        if(command == "m") { 
            parameter = stoi(input.substr(2));  
            if(parameter > 0) { 
                new_deque = new Deque(parameter); //create a dynamically allocated array
            }
        } else if (command == "push_front") { 
            string delimiter = " "; 
            int found, temp; 

            found = input.find(" ");
            temp = found;  
            found = input.find(" ", found+1, 1);  

            std::string url_name, url;
            url_name = input.substr(temp + 1, found-temp-1);
            url = input.substr(found + 1); 
            new_deque->push_front(url_name, url); 

        } else if (command == "push_back")   { 
            int found, temp; 
            found = input.find(" ");
            temp = found;  
            found = input.find(" ", found+1, 1);  

            std::string url_name, url;
            url_name = input.substr(temp + 1, found-temp-1);
            url = input.substr(found + 1); 
            new_deque->push_back(url_name, url); 
        
        } else if (command == "pop_front") { 
            new_deque->pop_front(); 

        } else if (command == "pop_back") { 
             new_deque->pop_back();

        } else if (command == "clear") { 
            new_deque->clear(); 

        } else if (command == "size") { 
            cout << "size is " << new_deque->size() << endl;

        } else if (command == "front") { 
             new_deque->front(); 

        } else if (command == "back") { 
           new_deque->back(); 

        } else if (command == "empty") { 
           if(new_deque->empty()) { 
            cout << "empty 1" << endl;
           } else { 
            cout << "empty 0" << endl;
           }

        } else if (command == "find") { 
            string delimiter = " "; 
            int found, temp; 

            found = input.find(" ");
            temp = found;  
            found = input.find(" ", found+1, 1);  
            
            std::string url_name;
            url_name = input.substr(temp + 1, found-temp-1);
            new_deque->find(url_name); 

        } else if (command == "print") { 
            new_deque->print(); 

        } else if (command == "exit") { 
            delete new_deque; 
            new_deque=nullptr;
            break;

        } else if (input.empty()) { 
            delete new_deque ;
            new_deque = nullptr; 
            break; //once user stops giving commands
        }
    }
    return 0; 
}


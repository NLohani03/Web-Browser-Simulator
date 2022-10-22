#include "Node.h"
#include <iostream>

Node::Node() { 
    next = nullptr; 
    prev = nullptr; 
}
Node::Node(string urlname, string url_link) { 
    next = nullptr; 
    prev = nullptr; 
    name = urlname; 
    link = url_link;
}

Node::~Node() { 
    next = nullptr; 
    prev = nullptr; 
}

string Node::getname() const{ 
    return name; 
}

string Node::getlink() const{ 
    return link; 
}

void Node::setname(string urlname){ 
    name = urlname;

}
void Node::setlink(string urllink){ 
    link = urllink;
} 

Node* Node::getNext() const{ 
    return next; 
}

Node* Node::getPrev() const{ 
    return prev; 
}

void Node::setNext(Node* nextNode){ 
    next = nextNode; 
}

void Node::setPrev(Node* prevNode){ 
    prev = prevNode; 
}
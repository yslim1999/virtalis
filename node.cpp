/**
    Virtalis C++ Code Challenge: Tree
    @file node.cpp
    @author Yin Shen
    @version 1.1 4/10/2021 
*/

#include <iostream>
#include "node.h"
using namespace std;


//Constructors for Node object depending on payload data type.
Node::Node(std::string name, int val_int){
    this->name = name;
    this->val_int = val_int;
};

Node::Node(std::string name, string val_string){
    this->name = name;
    this->val_string = val_string;
};

Node::Node(std::string name, bool val_bool){
    this->name = name;
    this->val_bool = val_bool;
};

Node::Node(std::string name, float val_float){
    this->name = name;
    this-> val_float = val_float;
};

//Return functions for name and the different data payloads.
string Node::getName(void){
    return name;
}

int Node::getIntValue(void){
    return val_int;
}

bool Node::getBoolValue(void){
    return val_bool;
}

float Node::getfloatValue(void){
    return val_float;
}
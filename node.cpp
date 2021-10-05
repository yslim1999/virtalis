/**
    Virtalis C++ Code Challenge: Tree
    @file node.cpp
    @author Yin Shen
    @version 1.1 4/10/2021 
*/

#include <iostream>
#include <queue>
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

vector<Node*> Node::getChildren(void){
    return children;
}

void Node::addChild(Node* node){
    children.push_back(node);
}

//Print all names of direct children of node.
void Node::printAllDirectChildren(void){
     for (auto it = children.begin(); it != children.end(); ++it){
        Node* currentNode = *it;
        cout << currentNode->getName() << endl;
     }
}

// Print the names of the nodes and names of all it's children nodes
// using level order traversal.
void Node::printTree(Node* root)
{
    // Base Case
    // Check if a node is empty.
    if (root == NULL)
        return;
    
    queue<Node *> q;
    //enqueue
    q.push(root);
    //cout << root->getName() << endl;

    while(!q.empty()){
        int nodeCount = q.size();

        //if current node has children
        while(nodeCount > 0){
            //Remove and print first node.
            Node* current = q.front();
            cout << current->getName() << " ";
            q.pop();

            //Enqueue all children of current node.
            for(auto &child : current->children){
                q.push(child);
            }

            nodeCount--;
            // for(int i = 0; i < current->children.size();i++){
            //     q.push(current)
            // }
        }

        cout << endl;
    }
}
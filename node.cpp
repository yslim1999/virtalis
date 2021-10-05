/**
    Virtalis C++ Code Challenge: Tree
    @file node.cpp
    @author Yin Shen
    @version 1.1 4/10/2021 
*/

#include<string.h>
#include "node.h"
using namespace std;


//Constructors for Node object depending on payload data type.
Node::Node(){};

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

string Node::getStringValue(void){
    return val_string;
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

/**
    Print the names of the nodes and names of all it's children nodes
    using level order traversal.
    @param root node of the tree.
*/
void Node::printTree(Node* root)
{
    // Base Case
    // Check if a node is empty.
    if (root == NULL)
        return;
    
    queue<Node *> q;
    //enqueue root.
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

            //reevaluate the number of nodes.
            nodeCount--;

            //repeat until no children left.
        }

        cout << endl;
    }
}

/**
    Function performs preorder Depth First Search starting from the root node,
    traversing the search down to the left most node, and would make its
    to the right.
    @param root of the Node, name of node to search for.
    @return the Node object that matches the name that was searched for 
    or an empty Node if the search is unsucessful.
*/
Node* Node::depth_first_search(Node* root, string name_to_find){

    stack<Node*> stack;
    vector<Node*> currentChildren;
    Node* current;

    //Put root on the stack
    stack.push(root);

    while(!stack.empty()){
        current = stack.top();
        //cout << current->getName() << endl;

        //mark as visit.
        stack.pop();

        //check if current node is the one we are looking for.
        if(current->getName().compare(name_to_find) == 0){
            return current;
        }

        //if not go to children
        currentChildren = current->getChildren();
        //reverse the order as stack is FIFO, so we want the left most node
        //to be the last one pushed on the stack.
        reverse(currentChildren.begin(),currentChildren.end());

        for(auto &child : currentChildren){
                stack.push(child);
        }

    }

    //return empty Node if search was not successful.
    return new Node();
}


//Obtains payload data of node and prints the name of the node and data. 
//Assuming nodes would not carry any other data type but strings and ints.
//If node does not have string value, it must have the int value.
void Node::getPayload(void){
    cout << "Name of Node: " << getName() << endl;
    if(getStringValue().empty()){
        cout << "Value of Node: "<< getIntValue() << endl;
    }else{
        cout << "Value of Node: "<< getStringValue() << endl;
    }
}
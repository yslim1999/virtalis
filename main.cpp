#include <iostream>
#include "node.h"
using namespace std;

int main(){
    // Node node_A = Node("A", 5);
    // Node node_B = Node("B", 6);
    // Node node_C = Node("C", 7);
    // node_A.addChild(&node_B);
    // node_A.addChild(&node_C);
    // cout << "Node_A's name is: "<< node_A.getName() << "\n";
    // cout << "Node_A's value is: " << node_A.getIntValue() << "\n";
    // cout << "Node_A's child is: ";
    // node_A.printAllDirectChildren();
    // node_A.printTree(&node_A);

    //Tree where odd nodes holding ints
    //and even nodesholding strings.
    Node node_A = Node("A", "apple");
    Node node_B = Node("B", 1);
    Node node_C = Node("C", "orange");
    Node node_D = Node("D", 2);
    Node node_I = Node("I", "peach");
    node_A.addChild(&node_B);
    node_A.addChild(&node_C);
    node_A.addChild(&node_D);
    node_B.addChild(new Node("E", "mango"));
    node_B.addChild(new Node("F", 3));
    node_B.addChild(new Node("G", "grape"));
    node_C.addChild(new Node("H", 4));
    node_D.addChild(&node_I);
    node_D.addChild(new Node("J", 5));
    node_I.addChild(new Node("K", "pear"));
    node_I.addChild(new Node("L", 6));
    node_I.addChild(new Node("M", "cherry"));

    node_A.printTree(&node_A);
} 
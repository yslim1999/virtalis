#include "node.h"
using namespace std;

int main(){
    //Tree where odd nodes holding ints
    //and even nodesholding strings.
    Node node_A = Node("A", (string) "apple");
    Node node_B = Node("B", 1);
    Node node_C = Node("C", (string) "orange");
    Node node_D = Node("D", 2);
    Node node_I = Node("I", (string) "peach");
    node_A.addChild(&node_B);
    node_A.addChild(&node_C);
    node_A.addChild(&node_D);
    node_B.addChild(new Node("E", (string) "mango"));
    node_B.addChild(new Node("F", 3));
    node_B.addChild(new Node("G", (string) "grape"));
    node_C.addChild(new Node("H", 4));
    node_D.addChild(&node_I);
    node_D.addChild(new Node("J", 5));
    node_I.addChild(new Node("K", (string) "pear"));
    node_I.addChild(new Node("L", 6)); 
    node_I.addChild(new Node("M", (string) "cherry"));
    //Printing the entire tree.
    cout << "Printing whole tree:" << endl;
    node_A.printTree(&node_A);
    Node* search_up_1 = node_A.depth_first_search(&node_A, (string)"A");
    Node* search_up_2 = node_A.depth_first_search(&node_A, (string)"F");
    Node* search_up_3 = node_A.depth_first_search(&node_A, (string)"L");
    search_up_1->getPayload();
    search_up_2->getPayload();
    search_up_3->getPayload();
} 
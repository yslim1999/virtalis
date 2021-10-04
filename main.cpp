#include <iostream>
#include "node.h"
using namespace std;

int main(){
    Node newNode = Node("B", 5);
    cout << newNode.getName() << "\n";
    cout << newNode.getIntValue() << "\n";
} 
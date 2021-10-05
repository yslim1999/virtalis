#ifndef node_H
#define node_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node{
    private:
        std::string name;
        int val_int;
        std::string val_string;
        bool val_bool;
        float val_float;
        vector<Node*> children;

    public: 
        Node();

        Node(std::string name, int val_int);

        Node(std::string name, std::string val_string);

        Node(std::string name, bool val_bool);

        Node(std::string name, float val_float);

        std::string getName(void);

        int getIntValue(void);

        bool getBoolValue(void);

        float getfloatValue(void);

        vector<Node*> getChildren(void);

        void addChild(Node* node);

        void printAllDirectChildren(void);

        void printTree(Node* root);
};
#endif

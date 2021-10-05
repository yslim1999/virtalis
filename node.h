#ifndef node_H
#define node_H
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
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

        string getName(void);

        int getIntValue(void);
        
        std::string getStringValue(void);

        bool getBoolValue(void);

        float getfloatValue(void);

        vector<Node*> getChildren(void);

        void addChild(Node* node);

        void printAllDirectChildren(void);

        void printTree(Node* root);

        Node* depth_first_search(Node* root, std::string name);

        void getPayload(void);
};
#endif

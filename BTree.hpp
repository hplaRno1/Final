#ifndef BTREE_HPP
#define BTREE_HPP

#include "Students.hpp"
#include <stack>
#include <memory>

struct Node {
    Students student;
    unique_ptr<Students> left;
    unique_ptr<Students> right;
}

class BTree{

    private:
        unique_ptr<Node> root;
    
    public:
        BTree() : root(nullptr) {}

        ~BTree() {
            delete root;
        }

        void insertNode(Students this_Student) {
            // Fix this to maintain the tree
            
        }

        void BFS(vector<Students>& result) {


        }

        void DFS(vector<Students>& result) {
            
            stack this_stack;
            vector<bool> check;

            Node* start;

            //use the first as the starting point
            start = root;
            
            for (int i = 0; i < )

        }

        void inorder(Node* node, vector<Students>& result) {


            //use recursive function to use inorder

            //base case
            if (node == nullptr) { return; }

            //append to result
            result.push_back(*node);

            inorder(node, result);

            inorder(node, result);
        }
};

#endif
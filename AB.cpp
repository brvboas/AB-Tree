#include "AB.h"

Binary_tree::Binary_tree() {
    /* Post: An empty binary tree has been created. */
    root = NULL;
}

bool Binary_tree::empty() const {
    /* Post: A result of true is returned if the binary tree is empty. Otherwise, false is returned. */
    return root == NULL;
}

void Binary_tree::print() {
    if (root->left != NULL){

    }

}

void inorder(Binary_node *root);
/* 
 * File:   AB.h
 * Author: Bruno
 *
 * Created on 18 de Novembro de 2009, 10:03
 */
#include <iostream>
#ifndef _AB_H
#define	_AB_H
typedef int Node_entry;
struct Binary_node{
    Node_entry key;
    Binary_node *left;
    Binary_node *right;
};

class Binary_tree {
private:
    // Add auxiliary function prototypes here.
    Binary_node *root;
public:
    Binary_tree( );
    bool empty( ) const;
    void preorder(Binary_node *root);
    void print();
    void inorder(Binary_node *root);
//    void postorder(Binary_node *root);
//    int size( ) const;
//    void clear( );
//    void insert(const Entry &);
//    Binary_tree (const Binary_tree &original);
//    Binary_tree & operator = (const Binary_tree &original);Binary_tree( );
};

#endif	/* _AB_H */


//
//  stack.cpp
//  stack
//
//  Created by Afnan Enayet on 11/12/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#include "stack.hpp"

stack::stack() {
    this -> topNode = nullptr;
}
void stack::push(int data)
{
    node * tempNode = new node;
    tempNode -> value = data;
    
    if (topNode == nullptr)
    {
        tempNode -> linkedNode = nullptr;
        topNode = tempNode;
    }
    
    else
    {
        tempNode -> linkedNode = topNode;
        topNode = tempNode;
    }
}

void stack::pop()
{
    topNode = topNode -> linkedNode;
}

int stack::top()
{
    return topNode -> value;
}
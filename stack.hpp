//
//  stack.hpp
//  stack
//
//  Created by Afnan Enayet on 11/12/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

template <class genericType>
class stack{
    struct node {
        genericType value;
        node * linkedNode;
    };
    
private:
    node * topNode;

public:
    inline stack()
    {
        this -> topNode = nullptr;
    }
    
    void pop()
    {
        topNode = topNode -> linkedNode;
    }
    
    inline void push(genericType data)
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
    
    inline genericType top()
    {
        return topNode -> value;
    }
    
    inline ~stack()
    {
        delete topNode;
    }
};

#endif /* stack_hpp */
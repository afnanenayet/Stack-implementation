//
//  stack.hpp
//  stack
//
//  Created by Afnan Enayet on 11/12/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

//template <class genericType>
class stack{
    struct node {
        int value;
        node * linkedNode;
    };
    
private:
    node * topNode;

public:
    stack();
    void push(int);
    void pop();
    int top();
};

#endif /* stack_hpp */
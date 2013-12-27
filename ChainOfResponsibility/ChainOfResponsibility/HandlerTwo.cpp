//
//  HandlerTwo.cpp
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "HandlerTwo.h"
HandlerTwo::HandlerTwo(){
    
}
HandlerTwo::~HandlerTwo(){
    
}
//    virtual method
void HandlerTwo::handler(int n){
    std::cout<<"Hanlder TWO :"<<n<<std::endl;
    if (_base) {
        _base->handler(n);
    }
}
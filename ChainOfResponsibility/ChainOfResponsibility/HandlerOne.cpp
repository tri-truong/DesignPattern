//
//  HandlerOne.cpp
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "HandlerOne.h"
//    Constructor Destructor
HandlerOne::HandlerOne(){
    
}
HandlerOne::~HandlerOne(){
    
}
//    virtual Method
void HandlerOne::handler (int n){
    std::cout<<"Hanlder ONE :"<<n<<std::endl;
    if (_base) {
        _base->handler(n);
    }
}
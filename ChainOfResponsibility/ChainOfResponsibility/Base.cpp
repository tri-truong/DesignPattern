//
//  Base.cpp
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Base.h"
//    Constructor Destructor
Base::Base(){
    _base = NULL;
}
Base::~Base(){
    if (_base != NULL) {
        delete _base;
    }
}
//    Methods
void Base::setBase (Base* base){
    _base = base;
}
void Base::addBase (Base* base){
    if (_base!=NULL) {
        _base->addBase(base);
    }else{
        _base = base;
    }
}
//    virtual Method
void Base::handler (int n){
    std::cout<<"Handler BASE "<<n<<std::endl;
    if (_base) {
        _base->handler(n);
    }
}
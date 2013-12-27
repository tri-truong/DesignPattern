//
//  Component.cpp
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Component.h"
//    Create Func
Component* Component::create (){
    return new Component();
}
//    Constructor
Component::Component(){
    
}
Component::~Component(){
    
}
//    virtual method
void Component::render (){
    cout<<"render COMPONENT"<<endl;
}
//
//  Static.cpp
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Static.h"
Static::Static(){
    
}
Static::~Static(){
    
}

Object* Static::clone (){
    return new Static();
}
void Static::render (){
    cout<<"Render STATIC"<<endl;
}
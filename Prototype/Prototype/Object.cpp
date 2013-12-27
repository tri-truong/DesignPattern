//
//  Object.cpp
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Object.h"
Object::Object(){
    
}
Object::~Object(){
    
}
//    method
Object* Object::clone (){
    return new Object();
}
void Object::render (){
    cout<<"Render Object"<<endl;
}
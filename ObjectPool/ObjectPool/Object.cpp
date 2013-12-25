//
//  Object.cpp
//  ObjectPool
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Object.h"
//   Constructor Destructor
Object::Object(){
    _isUse = true;
    cout<<"Constructor Object"<<endl;
}
Object::~Object (){
    cout<<"Destructor Object"<<endl;
}
//    method
bool Object::isUse (){
    return _isUse;
}
//    virtual method
void Object::init (){
    cout<<"Object Init"<<endl;
}
void Object::destroy (){
    cout<<" Object Destroy"<<endl;
}
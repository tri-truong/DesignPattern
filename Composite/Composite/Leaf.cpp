//
//  Leaf.cpp
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Leaf.h"
//    create function
Leaf* Leaf::create (int value){
    Leaf* leaf = new Leaf();
    leaf->setValue(value);
    return leaf;
}
//    Constructor + Destructor
Leaf::Leaf(){
    
}
Leaf::~Leaf(){
    
}
//    method
void Leaf::setValue (int value){
    _value = value;
}
int Leaf::getValue (){
    return _value;
}
//    virtual method
void Leaf::render (){
    cout<<"render LEAF value = "<<_value<<endl;
}
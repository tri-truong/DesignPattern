//
//  Dynamic.cpp
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Dynamic.h"
Dynamic::Dynamic(){
    
}
Dynamic::~Dynamic(){
    
}

Object* Dynamic::clone (){
    return new Dynamic();
}
void Dynamic::render (){
    cout<<"Render DYNAMIC"<<endl;
}
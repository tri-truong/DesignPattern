//
//  GameObject.cpp
//  FactoryMethod
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "GameObject.h"

#include "Dynamic.h"
#include "Static.h"

GameObject* GameObject::create(int type){
    if (type == 0) {
        return new GameObject ();
    }else if (type == 1){
        return new Dynamic();
    }else {
        return new Static();
    }
    return NULL;
}
GameObject::GameObject  (){
    
}
GameObject::~GameObject (){
    
}
void GameObject::render (){
    cout<<"This is game object";
}
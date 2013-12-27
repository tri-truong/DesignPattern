//
//  Composite.cpp
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Composite.h"
//    Create Func
Composite* Composite::create (){
    return new Composite();
}
//    Constructor Destructor
Composite::Composite(){
    _components = new vector<Component*>();
}
Composite::~Composite(){
    delete _components;
}
//    Method
void Composite::addComponent (Component* component){
    _components->push_back(component);
}
void Composite::removeComponent (Component* component){
    auto it = find(_components->begin(), _components->end(), component);
    if (it != _components->end()) {
        _components->erase(it);
    }
}
//    Virtual
void Composite::render (){
    cout<<"render COMPOSITE"<<endl;
    for (int i = 0; i < _components->size(); i++) {
        _components->at(i)->render();
    }
}
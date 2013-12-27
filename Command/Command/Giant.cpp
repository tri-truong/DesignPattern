//
//  Giant.cpp
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Giant.h"
int Giant::_countID = 0;
Giant::Giant(){
    _id = _countID++;
}
Giant::~Giant (){
    
}
//
void  Giant::fee (){
    std::cout<<_id<<" : FEE"<<std::endl;
}
void  Giant::phi (){
    std::cout<<_id<<" : PHI"<<std::endl;
}
void  Giant::pheaux (){
    std::cout<<_id<<" : PHEAUX"<<std::endl;
}
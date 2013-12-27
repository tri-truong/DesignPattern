//
//  Giant.h
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Command__Giant__
#define __Command__Giant__

#include <iostream>
class Giant {
public:
//    Constructor Destructor
    Giant();
    virtual ~Giant ();
//
    void fee ();
    void phi ();
    void pheaux ();
protected:
    int _id;
    static int _countID;
};
#endif /* defined(__Command__Giant__) */

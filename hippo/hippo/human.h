//
//  human.h
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#ifndef __hippo__human__
#define __hippo__human__

#include "preferences.h"

class Human {
    
private:
    int id;
    Preferences p;
    
public:
    Human(int id, const Preferences & p);
    
};

#endif /* defined(__hippo__human__) */

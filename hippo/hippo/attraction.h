//
//  attraction.h
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#ifndef __hippo__attraction__
#define __hippo__attraction__

#include <stdio.h>

class Attraction {
private:
    int id;
    int attractiveness;
    
public:
    int getID() { return id; }
    int getAttractiveness() { return attractiveness; }
    
};

#endif /* defined(__hippo__attraction__) */

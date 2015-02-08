//
//  quadrant.h
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#ifndef __hippo__quadrant__
#define __hippo__quadrant__

#include "human.h"
#include "attraction.h"
#include <vector>

class Quadrant {
private:
    short id;
    int capacity;
    // something like size / traversal time?
    
    std::vector<Human &> people;
    std::vector<Attraction &> attractions;
    
    
    
};
#endif /* defined(__hippo__quadrant__) */

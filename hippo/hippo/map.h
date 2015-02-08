//
//  map.h
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#ifndef __hippo__map__
#define __hippo__map__


#include <vector>
#include <unordered_map>
#include "quadrant.h"

class parkMap {
    // master list of quadrants
    std::vector<Quadrant> allQuadrants;
    
    // adjancy lists of quadrant IDs
    std::unordered_map<short, short> adj;
    
    //path info
    std::unordered_map<short, std::unordered_map<short, short>> paths;
    
    
};
#endif /* defined(__hippo__map__) */

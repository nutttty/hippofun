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
#include "quadrant.h"
class parkMap {
    // master list of quadrants
    std::vector<Quadrant> allQuadrants;
    
    // adjancy lists of quadrant IDs
    std::vector<std::vector<short>> adj;
    
    //path info
        
};
#endif /* defined(__hippo__map__) */

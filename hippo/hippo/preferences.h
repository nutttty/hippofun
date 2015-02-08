//
//  preferences.h
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#ifndef __hippo__preferences__
#define __hippo__preferences__

#include <unordered_map>
#include <list>
#include "attraction.h"

class Preferences {
private:
    std::unordered_map<int, int> prefs;
    
public:
    Preferences(std::list<Attraction> & attrs);
    
    Preferences(const Preferences & p);
    
};

#endif /* defined(__hippo__preferences__) */

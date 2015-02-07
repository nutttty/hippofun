//
//  preferences.cpp
//  hippo
//
//  Created by Kelsey on 2/7/15.
//  Copyright (c) 2015 Kelsey. All rights reserved.
//

#include "preferences.h"

Preferences::Preferences(std::list<Attraction> & attrs){
    
    for (auto a: attrs) {
        prefs.emplace(a.getID(), a.getAttractiveness());
    }
    
}


Preferences::Preferences(const Preferences & p){
    prefs = p.prefs;
}
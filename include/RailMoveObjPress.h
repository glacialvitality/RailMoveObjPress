#pragma once

#include "syati.h"

class RailMoveObjPress : public RailMoveObj {
public:
    RailMoveObjPress(const char*);

    virtual ~RailMoveObjPress();
    virtual void init(const JMapInfoIter&);
};
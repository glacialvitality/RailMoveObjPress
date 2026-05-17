#include "RailMoveObjPress.h"

RailMoveObjPress::RailMoveObjPress(const char* pName) : RailMoveObj(pName) {}

void RailMoveObjPress::init(const JMapInfoIter& rIter) {
    RailMoveObj::init(rIter);
    MR::setBodySensorType(this, 0x76);
}
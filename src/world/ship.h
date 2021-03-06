////////////////////////////////////////////////////////////////////////////////////////////////////
// (temporary header comment)
// Project Pirates by USPGameDev
// Filename: ship.h
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef PIRATES_WORLD_SHIP_H_
#define PIRATES_WORLD_SHIP_H_

#include "lpoint3.h"
#include "pandaFramework.h"
#include "world/worldactor.h"

namespace pirates {

namespace world {

class Ship : public WorldActor {
    
  public :
   
    Ship();

    LVector3f dir;

    LPoint3f node_pos() { return ship_node_.get_pos(); }

    AsyncTask::DoneStatus moveShip(GenericAsyncTask* task);

    void taskInitialize(AsyncTaskManager& taskMgr);
    
  private :

    NodePath ship_node_;

};

} // namespace world
} // namespace pirates
#endif

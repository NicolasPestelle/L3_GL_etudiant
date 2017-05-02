#include "Route.hpp"

bool Route::operator==(const Route & r) const {

    // TODO
  bool t = false;
  
  if (r.villeA_ == villeA_ &&  r.villeB_ == villeB_ && r.distance_ == distance_){
    t = true;
  }
  
    return t;
}

bool Route::operator!=(const Route & r) const {

    // TODO
  bool t = false;
  if(r.villeA_ != villeA_ || r.villeB_ != villeB_ || r.distance_ != distance_){
    t = true;
  }
    
    return t;
}


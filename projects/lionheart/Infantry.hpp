#ifndef LIONHEART_INFANTRY_HPP
#define LIONHEART_INFANTRY_HPP

#include "Unit.hpp"

namespace lionheart
{
  class Infantry:public Unit
  {
    public:
      const int STARTING_HP = 4;
      Infantry(Map::Location l,Direction d):Unit(l,d,STARTING_HP){}
      bool hasArmor() const override{return false;}
      AttackType attackType() const override{return AttackType::AXE;}
      int getMoveSpeed() const override{return 1;}
      UnitType getType() const{return type;}
      const static UnitType type = INFANTRY;
  };
}

#endif

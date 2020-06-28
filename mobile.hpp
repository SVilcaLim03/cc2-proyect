#include "natural_number.hpp"
#include "entity.hpp"
class Mobile
{
private:
    using Location=std::pair<int,int>;
public:
    virtual void Move(Location location)=0;
    virtual void Attack(Entity entity)=0;

};



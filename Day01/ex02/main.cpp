#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
    Zombie      *zombie_1;
    Zombie      *zombie_2;
    ZombieEvent event;

    event.setZombieType("type 1");
    zombie_1 = event.randomChump();
    delete zombie_1;
    event.setZombieType("type 2");
    zombie_2 = event.randomChump();
    delete zombie_2;
    return (0);
}
#include "Zombie.h"

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

void Zombie::init(float speed, glm::vec2 position) {
	_speed = speed;
	_color.set(255, 255, 0, 255);
	_position = position;
}

void Zombie::update(const std::vector<std::string>& levelData) {

}
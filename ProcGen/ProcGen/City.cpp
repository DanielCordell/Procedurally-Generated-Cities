#include "City.h"
#include <iostream>

City::City(sf::Vector2i position, sf::Texture& tex, CitySize size)
{
	sprite.setTexture(tex);
	sprite.setScale(static_cast<int>(size) * 0.3, static_cast<int>(size) * 0.3);
	sprite.setOrigin(sprite.getGlobalBounds().width / 2.f, sprite.getGlobalBounds().height / 2.f);
	sprite.setPosition(position.x, position.y);
}

void City::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
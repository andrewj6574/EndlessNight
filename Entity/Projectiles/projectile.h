#pragma once

#include "../entity.h"

class Projectile : public Entity
{
public:
	Projectile(int x, int y, Level& level);

	void update() override;
	void render() override;
	bool collision(std::vector<Entity*> objects) override;

private:
	void calcProjectileDir();

private:
	float m_Dx;
	float m_Dy;

	float m_ProjectileSpeed;

	int m_Life;

};
#include "Enemy.h"

Enemy::Enemy() { }
Enemy::~Enemy() { }


void Enemy::Initialize()
{
	strKey = "Enemy";
}

void Enemy::Update()
{

}

void Enemy::Render()
{
	Message(strKey);
}

void Enemy::Release()
{

}
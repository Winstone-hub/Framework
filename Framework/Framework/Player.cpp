#include "Player.h"
#include "InputManager.h"

Player::Player() 
	: Horizontal(0), Vertical(0) { }
Player::Player(Transform _Info) : Object(_Info) { }
Player::~Player() { }


void Player::Initialize()
{
	strKey = "Player";

	Horizontal = 0;
	Vertical = 0;
}

void Player::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KEY_UP)
		Vertical += 1;

	if (dwKey & KEY_DOWN)
		Vertical -= 1;

	if (dwKey & KEY_LEFT)
		Horizontal -= 1;
	
	if (dwKey & KEY_RIGHT)
		Horizontal += 1;
}

void Player::Render()
{
	cout << strKey << endl;
	cout << "X : " << Horizontal << endl;
	cout << "Y : " << Vertical << endl << endl;
}

void Player::Release()
{

}
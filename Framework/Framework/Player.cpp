#include "Player.h"

Player::Player() { }
Player::~Player() { }


void Player::Initialize()
{

}

void Player::Update()
{
	/*
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_UP)
		cout << "KYE_UP" << endl;

	if (dwKey & KYE_DOWN)
		cout << "KYE_DOWN" << endl;

	if (dwKey & KYE_LEFT)
		cout << "KYE_LEFT" << endl;

	if (dwKey & KYE_RIGHT)
		cout << "KYE_RIGHT" << endl;

	if (dwKey & KYE_SPACE)
		cout << "KYE_SPACE" << endl;

	if (dwKey & KYE_CTRL)
		cout << "KYE_CTRL" << endl;

	if (dwKey & KYE_ALT)
		cout << "KYE_ALT" << endl;
	*/
}

void Player::Render()
{
	Message("Player");
}

void Player::Release()
{

}
#pragma once

class MainUpdate
{
private:
	int Count;
	int SceneState;
public:
	void Initialize();
	void Update();
	void Render();
	void Release();
public:
	MainUpdate();
	~MainUpdate();
};


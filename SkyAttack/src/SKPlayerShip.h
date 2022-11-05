#pragma once
#include "SKState.h"
#include "SKShip.h"

class SKPlayerShip : SKShip
{
public:
	SKPlayerShip(SKState*);
	~SKPlayerShip();

	void UpdateFrame() override;
private:
	Camera2D m_camera;
};

#ifndef GRAPHICSCLASS_H
#define GRAPHICSCLASS_H

#include <Windows.h>
#include "D3dClass.h"
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:
	D3dClass *m_Direct3D;
};

#endif // !GRAPHICSCLASS_H



#pragma once
#include "Prerrequisites.h"

class
BlendState {
public:
	BlendState() = default;
	~BlendState() = default;

	void
	init(ID3D11Device* device);

	void
	update();

	void
	render(ID3D11DeviceContext* deviceContext);

	void
	destroy();

private:
	ID3D11BlendState* m_blendState = nullptr;
};

#pragma once
#include "Prerrequisites.h"

class
Rasterizer {
public:
    ~Rasterizer() = default;
    Rasterizer() = default;

    void
    init(ID3D11Device* device);

    void
    update();

    void
    render(ID3D11DeviceContext* deviceContext);

    void
    destroy();

private:
    ID3D11RasterizerState* m_rasterizerState = nullptr;    
};

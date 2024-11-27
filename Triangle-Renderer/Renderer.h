#ifndef RENDERER_H
#define RENDERER_H

#include "VertexArray.h"
#include "Shader.h"

class Renderer {
public:
    void Draw(const VertexArray& vao, const Shader& shader, unsigned int count) const;
};

#endif
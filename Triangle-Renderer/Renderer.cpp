#include "Renderer.h"
#include <glad/glad.h>

void Renderer::Draw(const VertexArray& vao, const Shader& shader, unsigned int count) const {
    shader.Bind();
    vao.Bind();
    glDrawArrays(GL_TRIANGLES, 0, count);
}
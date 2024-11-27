#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <glad/glad.h>

class Shader {
public:
    Shader(const std::string& vertexSrc, const std::string& fragmentSrc);
    ~Shader();

    void Bind() const;
    void Unbind() const;

private:
    unsigned int m_ID;
    unsigned int CompileShader(unsigned int type, const std::string& source);
};

#endif
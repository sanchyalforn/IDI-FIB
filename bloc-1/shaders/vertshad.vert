#version 330 core

in vec3 vertex;
//uniform float val; <- per l'scale
uniform mat4 TG; // <- rotation

void main()  {
    //gl_Position = vec4 (vertex *val, 1.0); <- scale
    gl_Position = TG * vec4 (vertex,1.0); // <- rotation
    
}

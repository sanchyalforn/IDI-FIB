#version 330 core

in vec3 vertex;
in vec3 normal;

in vec3 matamb;
in vec3 matdiff;
in vec3 matspec;
in float matshin;

out vec3 matamb1;
out vec3 matdiff1;
out vec3 matspec1;
out float matshin1;

out vec3 L;
out vec4 vertexSCO;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;

// Valors per als components que necessitem dels focus de llum
vec3 colFocus = vec3(0.8, 0.8, 0.8);
vec3 llumAmbient = vec3(0.2, 0.2, 0.2);
vec3 posFocus = vec3(1, 1, 1);  // en SCA

out vec3 fcolor;

void main() {	
    fcolor = matdiff;
    gl_Position = proj * view * TG * vec4 (vertex, 1.0);
    
    matamb1  = matamb;
    matdiff1 = matdiff;
    matspec1 = matspec;
    matshin1 = matshin;
    vertexSCO = view * TG * vec4 (vertex, 1.0);
    L = vec3(posFocus - vertexSCO);
}

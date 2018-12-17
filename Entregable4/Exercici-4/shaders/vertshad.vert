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
out vec3 NormSCO;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;

uniform vec3 colFocus;
uniform vec3 llumAmbient;
uniform vec4 posFocus;
out vec3 fcolor;

uniform int vista;


void main() {	
    fcolor = colFocus;
    gl_Position = proj * view * TG * vec4 (vertex, 1.0);
    
    matamb1  = matamb;
    matdiff1 = matdiff;
    matspec1 = matspec;
    matshin1 = matshin;
    
    vertexSCO = view * TG * vec4 (vertex, 1.0);
    
    if (vista == 0) {
		L = vec3(posFocus - vertexSCO);
	}
    else {
		vec4 posFocusAux = view * posFocus;
		L = vec3(posFocusAux - vertexSCO);
	}
    NormSCO = inverse(transpose(mat3(view * TG))) * normal;
}

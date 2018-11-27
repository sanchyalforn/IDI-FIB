#version 330 core

in vec3 fcolor;
out vec4 FragColor;

in vec3 PosFocus;
in vec3 vertexSCO;
in vec3 


vec3 Lambert (vec3 NormSCO, vec3 L)  {
    // S'assumeix que els vectors que es reben com a paràmetres estan normalitzats

    // Inicialitzem color a component ambient
    vec3 colRes = llumAmbient * matamb;

    // Afegim component difusa, si n'hi ha
    if (dot (L, NormSCO) > 0)
      colRes = colRes + colFocus * matdiff * dot (L, NormSCO);
    return (colRes);
}

void main() {	
	FragColor = vec4(fcolor,1);	
	
}

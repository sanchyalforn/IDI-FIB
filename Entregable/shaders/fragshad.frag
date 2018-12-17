#version 330 core

in vec3 fcolor;
out vec4 FragColor;

in vec3 matdiff1;
in vec3 matspec1;
in float matshin1;
in vec3 matamb1;

in vec3 L;
in vec4 vertexSCO;
in vec3 NormSCO;

uniform vec3 colFocus;
uniform vec4 posFocus;
uniform vec3 llumAmbient;

vec3 Lambert (vec3 NormSCO, vec3 L) 
{
    // S'assumeix que els vectors que es reben com a paràmetres estan normalitzats

    // Inicialitzem color a component ambient
    vec3 colRes = llumAmbient * matamb1;

    // Afegim component difusa, si n'hi ha
    if (dot (L, NormSCO) > 0)
      colRes = colRes + colFocus * matdiff1 * dot (L, NormSCO);
    return (colRes);
}

vec3 Phong (vec3 NormSCO, vec3 L, vec4 vertSCO) 
{
    // Els vectors estan normalitzats

    // Inicialitzem color a Lambert
    vec3 colRes = Lambert (NormSCO, L);

    // Calculem R i V
    if (dot(NormSCO,L) < 0)
      return colRes;  // no hi ha component especular

    vec3 R = reflect(-L, NormSCO); // equival a: normalize (2.0*dot(NormSCO,L)*NormSCO - L);
    vec3 V = normalize(-vertSCO.xyz);

    if ((dot(R, V) < 0) || (matshin1 == 0))
      return colRes;  // no hi ha component especular
    
    // Afegim la component especular
    float shine = pow(max(0.0, dot(R, V)), matshin1);
    return (colRes + matspec1 * colFocus * shine); 
}

void main()
{	

	vec3 L2, NormSCO2;
	vec3 f2;
	
	L2 = normalize(L);
    NormSCO2 = normalize(NormSCO);

    f2 = Phong(NormSCO2, L2, vertexSCO);
	FragColor = vec4(f2,1);	
}

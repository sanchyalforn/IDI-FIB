#version 330 core

out vec4 FragColor;

int aux = 355;

void main() {
    FragColor = vec4(1.);

    /***********
     EXERCICI 1
    ************
    if(gl_FragCoord.y<aux && gl_FragCoord.x<aux)
        FragColor= vec4(1.,1.,0.,1.);
    else if(gl_FragCoord.y<aux && gl_FragCoord.x>=aux)
        FragColor= vec4(0.,1.,0.,1.);
    else if(gl_FragCoord.y>=aux && gl_FragCoord.x>=aux)
        FragColor= vec4(0.,0.,1.,0.);
    else if(gl_FragCoord.y>=aux && gl_FragCoord.x<aux)
        FragColor= vec4(1.,0.,0.,1.);        

    */

    /***********
     EXERCICI 2
    ************
    
        if (int(gl_FragCoord.y)%10 <= 5) {
        if(gl_FragCoord.y<aux && gl_FragCoord.x<aux)
            FragColor= vec4(1.,1.,0.,1.);
        else if(gl_FragCoord.y<aux && gl_FragCoord.x>=aux)
            FragColor= vec4(0.,1.,0.,1.);
        else if(gl_FragCoord.y>=aux && gl_FragCoord.x>=aux)
            FragColor= vec4(0.,0.,1.,0.);
        else if(gl_FragCoord.y>=aux && gl_FragCoord.x<aux)
            FragColor= vec4(1.,0.,0.,1.);  
    
    }
    */
    
    /***********
     EXERCICI 3
    ************
    
    if(gl_FragCoord.y<aux && gl_FragCoord.x<aux)
        FragColor= vec4(1.,1.,0.,1.);
    else if(gl_FragCoord.y<aux && gl_FragCoord.x>=aux)
        FragColor= vec4(0.,1.,0.,1.);
    else if(gl_FragCoord.y>=aux && gl_FragCoord.x>=aux)
        FragColor= vec4(0.,0.,1.,0.);
    else if(gl_FragCoord.y>=aux && gl_FragCoord.x<aux)
        FragColor= vec4(1.,0.,0.,1.);        

    */

}


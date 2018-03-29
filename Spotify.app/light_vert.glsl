#version 300 es

uniform mat4 uMvMatrix;
uniform mat4 uProjMatrix;

in vec2 aPosition;
in vec2 aTexCoord;

out vec2 vTexCoord;

void main(void) {
    gl_Position = uProjMatrix * uMvMatrix * vec4(aPosition, 0.5, 1.0);
//    gl_Position = vec4(aPosition, 0.5, 1.0);
//    gl_Position = uProjMatrix * vec4(aPosition, 0.5, 1.0);
//        gl_Position = uMvMatrix * vec4(aPosition, 0.5, 1.0);
//    gl_Position = transpose(uMvMatrix) * vec4(aPosition, 0.5, 1.0);
    vTexCoord = aTexCoord;
}

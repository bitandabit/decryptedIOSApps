#version 300 es

precision mediump float;

uniform sampler2D uTexture;

in vec2 vTexCoord;

out vec4 oColor;

void main(void) {
    vec4 tex = texture(uTexture, vTexCoord);
    oColor = vec4(tex.rgb * 0.5, tex.a);
//    oColor = vec4(vTexCoord, 0.0, 1.0);
}

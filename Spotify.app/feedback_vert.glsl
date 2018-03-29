#version 300 es

const float TERMINAL_VELOCITY = 0.00015;

uniform float uTime;
uniform float uTop;
uniform float uWidth;
uniform vec2 uGravity;
uniform float uWind;

in vec2 aPosition;
in vec2 aVelocity;
in float aSize;
in float aDepth;
in float aSeed;

out vec2 position;
out vec2 velocity;
out float size;
out float depth;
out float seed;

void main(void) {
    size = aSize;
    depth = aDepth;
    seed = aSeed;

    vec2 gravityForce = uGravity / 10000.0;
    vec2 gravityPerp = normalize(vec2(uGravity.y, -uGravity.x));
    vec2 windForce = gravityPerp * (uWind / 10000.0 / aSize / 2.0f);
    vec2 individualForce = gravityPerp * (sin(uTime * 2.0 + seed * 3.14) / 2000.0);

    vec2 acceleration = gravityForce + windForce + individualForce;

    vec2 newVelocity = aVelocity + acceleration;
    vec2 termVelocity = normalize(newVelocity) * TERMINAL_VELOCITY;
    velocity = length(newVelocity) > length(termVelocity) ? termVelocity : newVelocity;
    position = aPosition + velocity;

    if (position.x > uWidth) position.x = 0.0;
    if (position.x < 0.0) position.x = uWidth;
    if (position.y < 0.0) position.y = uTop;
    if (position.y > uTop) position.y = 0.0;
}

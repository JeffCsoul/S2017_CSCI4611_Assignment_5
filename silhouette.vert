#version 150

uniform mat4 modelViewMatrix;
uniform mat4 normalMatrix;
uniform mat4 projectionMatrix;
uniform float thickness;

in vec3 vertex;
in vec3 direction;
in vec3 leftNormal;
in vec3 rightNormal;

void main() {

    vec3 displacedVertex = vertex;

    // TODO: Compute the eye vector pointing towards the camera, and check
    // if dot(leftNormal, eye) and dot(rightNormal, eye) have opposite signs.
    // If so, displace the vertex by thickness*direction.
    vec3 normalLeft = (normalMatrix * vec4(leftNormal, 0)).xyz;
    vec3 normalRight = (normalMatrix * vec4(rightNormal, 0)).xyz;

    vec3 eyeDirection = -(modelViewMatrix * vec4(vertex, 1)).xyz;

    if (((dot(normalLeft, eyeDirection) >= 0) &&
         (dot(normalRight, eyeDirection) < 0)) ||
        ((dot(normalLeft, eyeDirection) < 0) &&
         (dot(normalRight, eyeDirection) >= 0))) {
      displacedVertex += thickness * direction;
    }
    
    gl_Position = projectionMatrix * modelViewMatrix * vec4(displacedVertex,1);

}

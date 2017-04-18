#version 150

uniform vec4 Ia;
uniform vec4 Id;
uniform vec4 Is;
uniform vec4 ka;
uniform vec4 kd;
uniform vec4 ks;
uniform float s;

uniform sampler2D diffuseRamp;
uniform sampler2D specularRamp;

uniform vec4 lightInViewSpace;

in vec3 vertexInEyeSpace;
in vec3 normalInEyeSpace;

out vec4 color;

void main() {

    // We'll start with black, then add various lighting terms to it
    // as we calculate them.
    vec3 finalColor = vec3(0.0, 0.0, 0.0);

    // TODO: Calculate ambient, diffuse, and specular lighting for this pixel
    // based on its position, normal, etc.
    // // Lighting
    // vec3 Ia = vec3(0.3, 0.3, 0.3);
    // vec3 Id = vec3(0.7, 0.7, 0.7);
    // vec3 Is = vec3(1.0, 1.0, 1.0);
    // // Material parameters
    // vec3 ka = vec3(1.0, 0.0, 0.0);
    // vec3 kd = vec3(1.0, 0.0, 0.0);
    // vec3 ks = vec3(1.0, 1.0, 1.0);
    // float s = 50;

    // vec3 vertexInEyeSpace = (modelViewMatrix*vec4(vertex,1)).xyz;

    vec3 n = normalize(normalInEyeSpace);
    vec3 l = normalize(lightInViewSpace.xyz - vertexInEyeSpace);
    vec3 e = normalize(-vertexInEyeSpace);
    vec3 h = normalize(l + e);

    finalColor = vec3(0.0, 0.0, 0.0);
    finalColor += (ka*Ia).xyz;
    finalColor += (kd*Id *
                   texture(diffuseRamp, vec2(max(0.5 * dot(n, l) + 0.5, 0), 0))
                  ).xyz;
    finalColor += (ks*Is *
                   texture(specularRamp, vec2(pow(max(dot(n,h), 0), s), 0))
                  ).xyz;

    // Use the R,G,B components of finalColor for the output color of this
    // fragment, and set the alpha component to 1.0 (completely opaque).
    color.rgb = finalColor;
    color.a = 1.0;

}

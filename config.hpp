#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <glm/glm.hpp>

namespace Config {

    const std::string dataDir = "/home/zhou0745/Github_repo/4611/CSCI4611_Project_05/data";
    const std::string codeDir = "/home/zhou0745/Github_repo/4611/CSCI4611_Project_05";

    // Shaders
    const std::string phongVert = codeDir + "/phong.vert";
    const std::string phongFrag = codeDir + "/phong.frag";
    const std::string silhouetteVert = codeDir + "/silhouette.vert";
    const std::string silhouetteFrag = codeDir + "/silhouette.frag";

    // Mesh and ramps
    const std::string mesh = dataDir + "/cow.obj";
    const std::string diffuseRamp = dataDir + "/standardDiffuse.bmp";
    const std::string specularRamp = dataDir + "/standardSpecular.bmp";

    const std::string meshList[8] = {
      dataDir + "/cow.obj",
      dataDir + "/bunny.obj",
      dataDir + "/bunnyLowres.obj",
      dataDir + "/chamferedCube.obj",
      dataDir + "/hippo.obj",
      dataDir + "/maxplanck.obj",
      dataDir + "/sphere.obj",
      dataDir + "/teapot.obj"
    };
    const std::string diffuseList[4] = {
      dataDir + "/toonDiffuse.bmp",
      dataDir + "/standardDiffuse.bmp",
      dataDir + "/goochDiffuse.bmp",
      dataDir + "/tf2Diffuse.bmp"
    };

    const std::string specularList[3] = {
      dataDir + "/toonSpecular.bmp",
      dataDir + "/standardSpecular.bmp",
      dataDir + "/iridescentSpecular.bmp"
    };

    // Shader parameters.
    // TODO: Pass them into your shaders using uniform variables.

    // Lighting
    glm::vec4 Ia(0.3, 0.3, 0.3, 1);
    glm::vec4 Id(0.7, 0.7, 0.7, 1);
    glm::vec4 Is(1.0, 1.0, 1.0, 1);
    // Material parameters
    glm::vec4 ka(1.0, 0.4, 0.4, 1);
    glm::vec4 kd(1.0, 0.4, 0.4, 1);
    glm::vec4 ks(0.6, 0.6, 0.6, 1);
    float s = 50;

    // Outline parameters
    float thickness = 0.01;

}

#endif

# CSCI4611_Project_05
## Information
* Name: Tiannan Zhou
* Student ID: 5232494
* Email: zhou0745@umn.edu

## Config
Please replace the value of `dataDir` and `codeDir` in `config.hpp` file with the full path of your data folder and the source code folder to make sure that the program can find the data and related code properly for displaying the Blinn-Phong model.

## Compile
This program is based on Linux and you just need to use GNU Makefile to compile the whole project.
```
make
```
The recommended environment for compiling this project is CSELAB Ubuntu Linux 16.04.

## Run
You can find a executive program which is named `ArtisticRendering` in the folder where the source code located in. You also can simply run command `./ArtisticRendering` in terminal to start the program.

## Description
1. This project is based on OpenGL and GLM libiary.
2. I applied the parameters mentioned in the handout on the code from demo program used in class to create the Blinn-Phong model.
3. I used two help-vectors to consider whether this pixel is located in the boundary by the eye and the normal vector at this pixel, which is used to determine whether we should display the silhouette.
4. Although reflection vector will be more accurate but it will slow down the calculation. Thus, we use half vector to optimize the calculation speed, and the appearance is still acceptable.

## Additional Features:
I bundled two hot keys for switching diffuse and specular, and another hot key for turning on or off silhouette line's display, and hot key `M` for switching models.
1. Hot key `D`: Switching diffuse applied on the model between four different diffuses. The default one is `toonDiffuse`.
2. Hot key `S`: Switching specular applied on the model between three different speculars. The default one is `toonSpecular`.
3. Hot Key `B`: Turning on/off the display of silhouette. The default status is `on`.
4. Hot Key `M`: Switching model among `cow`, `bunny`, `bunnyLowres` ,`chamferedCube`,  `hippo`, `maxplanck`, `sphere` and `teapot`
You can use this feature to control and self-design the appearance of the model.

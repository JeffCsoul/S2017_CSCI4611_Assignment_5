ArtisticRendering: camera.hpp engine.hpp config.hpp mesh.hpp shader.hpp graphics.hpp phong.frag silhouette.frag draw.hpp main.cpp phong.vert silhouette.vert
	g++ main.cpp -o ArtisticRendering `pkg-config --cflags --libs sdl2 glew` -I./glm-0.9.8.4 -std=c++11

clean:
	rm ArtisticRendering

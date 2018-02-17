#include <iostream>
#include "debug.h"
#include "Engine.h"


#include <GL/glew.h>
#include <GL/freeglut.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <SOIL.h>
#include "shader_utils.h"

namespace Engine
{
  bool initialized = false;
  bool running = false;

}
void Engine::Init(int argc, char ** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_ALPHA|GLUT_DOUBLE|GLUT_DEPTH);
  glutInitWindowSize(800, 600);
  glutCreateWindow("My First Open GL Triangle");
  initialized = true;
}

/* Todo:

  glutDisplayFunc(g_ondisplay);
  glutReshapeFunc(g_onreshape);
  glutIdleFunc(g_onidle);

*/


void Engine::Run()
{
  ErrorIf(!initialized, "Engine uninitialized");
  
  glutMainLoop();
}

#include <windows.h>
#include <GL/glut.h>
#include <math.h>


float cableCarX = -100.0f;
float cloudX = -300.0f;
float cloudX2 = 200.0f;
bool isDay = true;
bool isTurbineRotating = false;
float turbineAngle = 0.0f;
float globalSpeed = 1.0f;
float busX = -250.0f;
float car2X  = 120.0f;
float carX = 0.0f;




void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();


	}


//obj1
void drawMountain()
{
    // Mountain 1
    glColor3f(0.15f, 0.25f, 0.45f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-350.0f, -80.0f);
        glVertex2f(-150.0f, 120.0f);
        glVertex2f(50.0f, -80.0f);
    glEnd();

    // Snow
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-150.0f, 120.0f);
        glVertex2f(-185.0f, 85.0f);
        glVertex2f(-115.0f, 85.0f);
    glEnd();


    // Mountain 2
    glColor3f(0.0f, 0.3f, 0.5f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-200.0f, -80.0f);
        glVertex2f(50.0f, 170.0f);
        glVertex2f(300.0f, -80.0f);
    glEnd();

    // Snow
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(50.0f, 170.0f);
        glVertex2f(10.0f, 130.0f);
        glVertex2f(90.0f, 130.0f);
    glEnd();


    // Mountain 3
    glColor3f(0.15f, 0.25f, 0.45f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, -80.0f);
        glVertex2f(200.0f, 100.0f);
        glVertex2f(400.0f, -80.0f);
    glEnd();

    // Snow
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(200.0f, 100.0f);
        glVertex2f(165.0f, 69.0f);
        glVertex2f(235.0f, 69.0f);
    glEnd();
}

//obj2
void drawRoad()
{
    // Grass
    glColor3f(0.2f, 0.58f, 0.2f);

    glBegin(GL_QUADS);
        glVertex2f(-250.0f, -120.0f);
        glVertex2f(250.0f, -120.0f);
        glVertex2f(250.0f, -40.0f);
        glVertex2f(-250.0f, -40.0f);
    glEnd();


    // Main road
    glColor3f(0.15f, 0.15f, 0.15f);

    glBegin(GL_QUADS);
        glVertex2f(-250.0f, -250.0f);
        glVertex2f(250.0f, -250.0f);
        glVertex2f(250.0f, -120.0f);
        glVertex2f(-250.0f, -120.0f);
    glEnd();


    // Road center lines
   glColor3f(1.0f, 1.0f, 1.0f);

   // Line 1
   glBegin(GL_QUADS);
    glVertex2f(-220.0f, -187.0f);
    glVertex2f(-170.0f, -187.0f);
    glVertex2f(-170.0f, -183.0f);
    glVertex2f(-220.0f, -183.0f);
   glEnd();

   // Line 2
   glBegin(GL_QUADS);
    glVertex2f(-140.0f, -187.0f);
    glVertex2f(-90.0f, -187.0f);
    glVertex2f(-90.0f, -183.0f);
    glVertex2f(-140.0f, -183.0f);
   glEnd();

   // Line 3
   glBegin(GL_QUADS);
    glVertex2f(-60.0f, -187.0f);
    glVertex2f(-10.0f, -187.0f);
    glVertex2f(-10.0f, -183.0f);
    glVertex2f(-60.0f, -183.0f);
  glEnd();

  // Line 4
  glBegin(GL_QUADS);
    glVertex2f(20.0f, -187.0f);
    glVertex2f(70.0f, -187.0f);
    glVertex2f(70.0f, -183.0f);
    glVertex2f(20.0f, -183.0f);
  glEnd();

  // Line 5
  glBegin(GL_QUADS);
    glVertex2f(100.0f, -187.0f);
    glVertex2f(150.0f, -187.0f);
    glVertex2f(150.0f, -183.0f);
    glVertex2f(100.0f, -183.0f);
 glEnd();

  // Line 6
  glBegin(GL_QUADS);
    glVertex2f(180.0f, -187.0f);
    glVertex2f(230.0f, -187.0f);
    glVertex2f(230.0f, -183.0f);
    glVertex2f(180.0f, -183.0f);
  glEnd();
}

//obj3
void drawSky()
{
    glBegin(GL_QUADS);

    if (isDay)
    {
        glColor3f(0.4f, 0.7f, 1.0f);
        glVertex2f(-250.0f, 250.0f);
        glVertex2f(250.0f, 250.0f);

        glColor3f(0.8f, 0.9f, 1.0f);
        glVertex2f(250.0f, -100.0f);
        glVertex2f(-250.0f, -100.0f);
    }
    else
    {
        glColor3f(0.02f, 0.02f, 0.1f);
        glVertex2f(-250.0f, 250.0f);
        glVertex2f(250.0f, 250.0f);

        glColor3f(0.1f, 0.05f, 0.2f);
        glVertex2f(250.0f, -100.0f);
        glVertex2f(-250.0f, -100.0f);
    }

    glEnd();


    //  STARS
    if (!isDay)
    {
        glColor3f(1.0f, 1.0f, 1.0f);

        glPointSize(3.0f);

        glBegin(GL_POINTS);

            glVertex2f(-220.0f, 180.0f);
            glVertex2f(-180.0f, 220.0f);
            glVertex2f(-120.0f, 160.0f);
            glVertex2f(-70.0f, 210.0f);
            glVertex2f(-20.0f, 180.0f);
            glVertex2f(30.0f, 220.0f);
            glVertex2f(90.0f, 170.0f);
            glVertex2f(140.0f, 210.0f);
            glVertex2f(190.0f, 160.0f);
            glVertex2f(230.0f, 220.0f);

            glVertex2f(-200.0f, 130.0f);
            glVertex2f(-150.0f, 190.0f);
            glVertex2f(-90.0f, 120.0f);
            glVertex2f(-40.0f, 150.0f);
            glVertex2f(20.0f, 130.0f);
            glVertex2f(80.0f, 200.0f);
            glVertex2f(130.0f, 140.0f);
            glVertex2f(180.0f, 190.0f);

        glEnd();
    }
}

//obj4
void drawHouse()
{
    // House 1

    // House body
    glColor3f(0.92f, 0.82f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(-190, -50);
        glVertex2f(-150, -50);
        glVertex2f(-150, -20);
        glVertex2f(-190, -20);
    glEnd();

    // Roof
    glColor3f(0.45f, 0.18f, 0.12f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-170, -2);
        glVertex2f(-196, -20);
        glVertex2f(-144, -20);
    glEnd();

    // Door
    glColor3f(0.35f, 0.16f, 0.14f);

    glBegin(GL_QUADS);
        glVertex2f(-175, -50);
        glVertex2f(-165, -50);
        glVertex2f(-165, -30);
        glVertex2f(-175, -30);
    glEnd();

    // Windows
    glColor3f(0.2f, 0.2f, 0.25f);

    glBegin(GL_QUADS);
        glVertex2f(-186, -35);
        glVertex2f(-179, -35);
        glVertex2f(-179, -23);
        glVertex2f(-186, -23);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-161, -35);
        glVertex2f(-154, -35);
        glVertex2f(-154, -23);
        glVertex2f(-161, -23);
    glEnd();


    // House 2

    // House body
    glColor3f(0.92f, 0.82f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(-120, -90);
        glVertex2f(-80, -90);
        glVertex2f(-80, -60);
        glVertex2f(-120, -60);
    glEnd();

    // Roof
    glColor3f(0.45f, 0.18f, 0.12f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-100, -42);
        glVertex2f(-126, -60);
        glVertex2f(-74, -60);
    glEnd();


    // Door
    glColor3f(0.35f, 0.16f, 0.14f);

    glBegin(GL_QUADS);
        glVertex2f(-105, -90);
        glVertex2f(-95, -90);
        glVertex2f(-95, -70);
        glVertex2f(-105, -70);
    glEnd();

    // Windows
    glColor3f(0.2f, 0.2f, 0.25f);

    glBegin(GL_QUADS);
        glVertex2f(-116, -75);
        glVertex2f(-109, -75);
        glVertex2f(-109, -63);
        glVertex2f(-116, -63);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-91, -75);
        glVertex2f(-84, -75);
        glVertex2f(-84, -63);
        glVertex2f(-91, -63);
    glEnd();


    // House 3

    // House body
    glColor3f(0.92f, 0.82f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(-35, -45);
        glVertex2f(5, -45);
        glVertex2f(5, -15);
        glVertex2f(-35, -15);
    glEnd();

    // Roof
    glColor3f(0.45f, 0.18f, 0.12f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-15, 3);
        glVertex2f(-41, -15);
        glVertex2f(11, -15);
    glEnd();


    // Door
    glColor3f(0.35f, 0.16f, 0.14f);

    glBegin(GL_QUADS);
        glVertex2f(-20, -45);
        glVertex2f(-10, -45);
        glVertex2f(-10, -25);
        glVertex2f(-20, -25);
    glEnd();

    // Windows
    glColor3f(0.2f, 0.2f, 0.25f);

    glBegin(GL_QUADS);
        glVertex2f(-31, -30);
        glVertex2f(-24, -30);
        glVertex2f(-24, -18);
        glVertex2f(-31, -18);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-6, -30);
        glVertex2f(1, -30);
        glVertex2f(1, -18);
        glVertex2f(-6, -18);
    glEnd();


    // House 4

    // House body
    glColor3f(0.92f, 0.82f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(60, -80);
        glVertex2f(100, -80);
        glVertex2f(100, -50);
        glVertex2f(60, -50);
    glEnd();

    // Roof
    glColor3f(0.45f, 0.18f, 0.12f);

    glBegin(GL_TRIANGLES);
        glVertex2f(80, -32);
        glVertex2f(54, -50);
        glVertex2f(106, -50);
    glEnd();


    // Door
    glColor3f(0.35f, 0.16f, 0.14f);

    glBegin(GL_QUADS);
        glVertex2f(75, -80);
        glVertex2f(85, -80);
        glVertex2f(85, -60);
        glVertex2f(75, -60);
    glEnd();

    // Windows
    glColor3f(0.2f, 0.2f, 0.25f);

    glBegin(GL_QUADS);
        glVertex2f(64, -65);
        glVertex2f(71, -65);
        glVertex2f(71, -53);
        glVertex2f(64, -53);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(89, -65);
        glVertex2f(96, -65);
        glVertex2f(96, -53);
        glVertex2f(89, -53);
    glEnd();


    // House 5

    // House body
    glColor3f(0.92f, 0.82f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(170, -40);
        glVertex2f(210, -40);
        glVertex2f(210, -10);
        glVertex2f(170, -10);
    glEnd();

    // Roof
    glColor3f(0.45f, 0.18f, 0.12f);

    glBegin(GL_TRIANGLES);
        glVertex2f(190, 8);
        glVertex2f(164, -10);
        glVertex2f(216, -10);
    glEnd();


    // Door
    glColor3f(0.35f, 0.16f, 0.14f);

    glBegin(GL_QUADS);
        glVertex2f(185, -40);
        glVertex2f(195, -40);
        glVertex2f(195, -20);
        glVertex2f(185, -20);
    glEnd();

    // Windows
    glColor3f(0.2f, 0.2f, 0.25f);

    glBegin(GL_QUADS);
        glVertex2f(174, -25);
        glVertex2f(181, -25);
        glVertex2f(181, -13);
        glVertex2f(174, -13);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(199, -25);
        glVertex2f(206, -25);
        glVertex2f(206, -13);
        glVertex2f(199, -13);
    glEnd();
}


//obj5
void drawPineTree()
{

    // TREE 1 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-233.45f, -70.0f);
        glVertex2f(-226.55f, -70.0f);
        glVertex2f(-226.55f, -58.5f);
        glVertex2f(-233.45f, -58.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-230.0f, -29.75f);
        glVertex2f(-253.0f, -58.5f);
        glVertex2f(-207.0f, -58.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-230.0f, -18.25f);
        glVertex2f(-248.4f, -44.7f);
        glVertex2f(-211.6f, -44.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-230.0f, -6.75f);
        glVertex2f(-243.8f, -33.2f);
        glVertex2f(-216.2f, -33.2f);
    glEnd();


    // TREE 2 - small

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-202.55f, -90.0f);
        glVertex2f(-197.45f, -90.0f);
        glVertex2f(-197.45f, -81.5f);
        glVertex2f(-202.55f, -81.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-200.0f, -60.25f);
        glVertex2f(-217.0f, -81.5f);
        glVertex2f(-183.0f, -81.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-200.0f, -51.75f);
        glVertex2f(-213.6f, -71.3f);
        glVertex2f(-186.4f, -71.3f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-200.0f, -43.25f);
        glVertex2f(-210.2f, -62.8f);
        glVertex2f(-189.8f, -62.8f);
    glEnd();


    // TREE 3 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-153.45f, -40.0f);
        glVertex2f(-146.55f, -40.0f);
        glVertex2f(-146.55f, -28.5f);
        glVertex2f(-153.45f, -28.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-150.0f, 0.25f);
        glVertex2f(-173.0f, -28.5f);
        glVertex2f(-127.0f, -28.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-150.0f, 11.75f);
        glVertex2f(-168.4f, -14.7f);
        glVertex2f(-131.6f, -14.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-150.0f, 23.25f);
        glVertex2f(-163.8f, -3.2f);
        glVertex2f(-136.2f, -3.2f);
    glEnd();


    // TREE 4 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-133.45f, -80.0f);
        glVertex2f(-126.55f, -80.0f);
        glVertex2f(-126.55f, -68.5f);
        glVertex2f(-133.45f, -68.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-130.0f, -39.75f);
        glVertex2f(-153.0f, -68.5f);
        glVertex2f(-107.0f, -68.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-130.0f, -28.25f);
        glVertex2f(-148.4f, -54.7f);
        glVertex2f(-111.6f, -54.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-130.0f, -16.75f);
        glVertex2f(-143.8f, -43.2f);
        glVertex2f(-116.2f, -43.2f);
    glEnd();


    // TREE 5 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-102.55f, -45.0f);
        glVertex2f(-97.45f, -45.0f);
        glVertex2f(-97.45f, -36.5f);
        glVertex2f(-102.55f, -36.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-100.0f, -15.25f);
        glVertex2f(-117.0f, -36.5f);
        glVertex2f(-83.0f, -36.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-100.0f, -6.75f);
        glVertex2f(-113.6f, -26.3f);
        glVertex2f(-86.4f, -26.3f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-100.0f, 1.75f);
        glVertex2f(-110.2f, -17.8f);
        glVertex2f(-89.8f, -17.8f);
    glEnd();


    // TREE 6 - FRONT - SMALL

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(-32.55f, -100.0f);
        glVertex2f(-27.45f, -100.0f);
        glVertex2f(-27.45f, -91.5f);
        glVertex2f(-32.55f, -91.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-30.0f, -70.25f);
        glVertex2f(-47.0f, -91.5f);
        glVertex2f(-13.0f, -91.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-30.0f, -61.75f);
        glVertex2f(-43.6f, -81.3f);
        glVertex2f(-16.4f, -81.3f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(-30.0f, -53.25f);
        glVertex2f(-40.2f, -72.8f);
        glVertex2f(-19.8f, -72.8f);
    glEnd();


    // TREE 7 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(36.55f, -40.0f);
        glVertex2f(43.45f, -40.0f);
        glVertex2f(43.45f, -28.5f);
        glVertex2f(36.55f, -28.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(40.0f, 0.25f);
        glVertex2f(17.0f, -28.5f);
        glVertex2f(63.0f, -28.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(40.0f, 11.75f);
        glVertex2f(21.6f, -14.7f);
        glVertex2f(58.4f, -14.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(40.0f, 23.25f);
        glVertex2f(26.2f, -3.2f);
        glVertex2f(53.8f, -3.2f);
    glEnd();


    // TREE 8 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(16.55f, -80.0f);
        glVertex2f(23.45f, -80.0f);
        glVertex2f(23.45f, -68.5f);
        glVertex2f(16.55f, -68.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(20.0f, -39.75f);
        glVertex2f(-3.0f, -68.5f);
        glVertex2f(43.0f, -68.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(20.0f, -28.25f);
        glVertex2f(1.6f, -54.7f);
        glVertex2f(38.4f, -54.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(20.0f, -16.75f);
        glVertex2f(6.2f, -43.2f);
        glVertex2f(33.8f, -43.2f);
    glEnd();


    // TREE 9 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(161.55f, -40.0f);
        glVertex2f(168.45f, -40.0f);
        glVertex2f(168.45f, -28.5f);
        glVertex2f(161.55f, -28.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(165.0f, 0.25f);
        glVertex2f(142.0f, -28.5f);
        glVertex2f(188.0f, -28.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(165.0f, 11.75f);
        glVertex2f(146.6f, -14.7f);
        glVertex2f(183.4f, -14.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(165.0f, 23.25f);
        glVertex2f(151.2f, -3.2f);
        glVertex2f(178.8f, -3.2f);
    glEnd();


    // TREE 10 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(96.55f, -80.0f);
        glVertex2f(103.45f, -80.0f);
        glVertex2f(103.45f, -68.5f);
        glVertex2f(96.55f, -68.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(100.0f, -39.75f);
        glVertex2f(77.0f, -68.5f);
        glVertex2f(123.0f, -68.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(100.0f, -28.25f);
        glVertex2f(81.6f, -54.7f);
        glVertex2f(118.4f, -54.7f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(100.0f, -16.75f);
        glVertex2f(86.2f, -43.2f);
        glVertex2f(113.8f, -43.2f);
    glEnd();


    // TREE 11 - FRONT - SMALL

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(157.45f, -100.0f);
        glVertex2f(162.55f, -100.0f);
        glVertex2f(162.55f, -91.5f);
        glVertex2f(157.45f, -91.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(160.0f, -70.25f);
        glVertex2f(143.0f, -91.5f);
        glVertex2f(177.0f, -91.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(160.0f, -61.75f);
        glVertex2f(146.4f, -81.3f);
        glVertex2f(173.6f, -81.3f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(160.0f, -53.25f);
        glVertex2f(149.8f, -72.8f);
        glVertex2f(170.2f, -72.8f);
    glEnd();


    // TREE 12 - BACKGROUND - LARGE

    // Trunk
    glColor3f(0.25f, 0.12f, 0.05f);

    glBegin(GL_QUADS);
        glVertex2f(227.45f, -50.0f);
        glVertex2f(232.55f, -50.0f);
        glVertex2f(232.55f, -41.5f);
        glVertex2f(227.45f, -41.5f);
    glEnd();

    // Bottom leaves
    glColor3f(0.0f, 0.5f, 0.15f);

    glBegin(GL_TRIANGLES);
        glVertex2f(230.0f, -20.25f);
        glVertex2f(213.0f, -41.5f);
        glVertex2f(247.0f, -41.5f);
    glEnd();

    // Middle leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(230.0f, -11.75f);
        glVertex2f(216.4f, -31.3f);
        glVertex2f(243.6f, -31.3f);
    glEnd();

    // Top leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(230.0f, -3.25f);
        glVertex2f(219.8f, -22.8f);
        glVertex2f(240.2f, -22.8f);
    glEnd();
}


//obj6
void drawFlag()
{
    // Pole
    glColor3f(0.3f, 0.3f, 0.3f);

    glBegin(GL_QUADS);
        glVertex2f(129.0f, -60.0f);
        glVertex2f(131.0f, -60.0f);
        glVertex2f(131.0f, -10.0f);
        glVertex2f(129.0f, -10.0f);
    glEnd();


    // Flag
    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(131.0f, -10.0f);
        glVertex2f(151.0f, -10.0f);
        glVertex2f(151.0f, -35.0f);
        glVertex2f(131.0f, -35.0f);
    glEnd();


    // White cross - vertical
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_QUADS);
        glVertex2f(139.0f, -13.0f);
        glVertex2f(143.0f, -13.0f);
        glVertex2f(143.0f, -32.0f);
        glVertex2f(139.0f, -32.0f);
    glEnd();


    // White cross - horizontal
    glBegin(GL_QUADS);
        glVertex2f(135.0f, -25.0f);
        glVertex2f(147.0f, -25.0f);
        glVertex2f(147.0f, -20.0f);
        glVertex2f(135.0f, -20.0f);
    glEnd();
}


//obj7
void drawTowers()
{

    // CLOCK TOWER

    // Tower body
    glColor3f(0.7f, 0.7f, 0.65f);

    glBegin(GL_QUADS);
        glVertex2f(-85.0f, -60.0f);
        glVertex2f(-45.0f, -60.0f);
        glVertex2f(-45.0f, 30.0f);
        glVertex2f(-85.0f, 30.0f);
    glEnd();


    // Clock
    circle(12.0f, -65.0f, 10.0f, 255, 255, 255);


    // Clock hands
    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_LINES);

        // Minute hand
        glVertex2f(-65.0f, 10.0f);
        glVertex2f(-65.0f, 18.0f);

        // Hour hand
        glVertex2f(-65.0f, 10.0f);
        glVertex2f(-60.0f, 10.0f);

    glEnd();


    // Roof
    glColor3f(0.4f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-90.0f, 30.0f);
        glVertex2f(-40.0f, 30.0f);
        glVertex2f(-65.0f, 70.0f);
    glEnd();



    //  WINDOWS

    glColor3f(0.2f, 0.2f, 0.2f);

    // Upper window
    glBegin(GL_QUADS);
        glVertex2f(-70.0f, -20.0f);
        glVertex2f(-60.0f, -20.0f);
        glVertex2f(-60.0f, -5.0f);
        glVertex2f(-70.0f, -5.0f);
    glEnd();

    // Lower window
    glBegin(GL_QUADS);
        glVertex2f(-70.0f, -40.0f);
        glVertex2f(-60.0f, -40.0f);
        glVertex2f(-60.0f, -25.0f);
        glVertex2f(-70.0f, -25.0f);
    glEnd();


    //  DOOR

    glColor3f(0.3f, 0.2f, 0.1f);

    glBegin(GL_QUADS);
        glVertex2f(-73.0f, -60.0f);
        glVertex2f(-57.0f, -60.0f);
        glVertex2f(-57.0f, -45.0f);
        glVertex2f(-73.0f, -45.0f);
    glEnd();

    glPopMatrix();



    // SECOND TOWER


    // Tower body
    glColor3f(0.75f, 0.72f, 0.66f);

    glBegin(GL_QUADS);
        glVertex2f(47.4f, -45.0f);
        glVertex2f(72.6f, -45.0f);
        glVertex2f(72.6f, 14.5f);
        glVertex2f(47.4f, 14.5f);
    glEnd();


    // Roof
    glColor3f(0.45f, 0.12f, 0.1f);

    glBegin(GL_TRIANGLES);
        glVertex2f(44.6f, 14.5f);
        glVertex2f(75.4f, 14.5f);
        glVertex2f(60.0f, 39.0f);
    glEnd();


    // WINDOWS

    glColor3f(0.2f, 0.2f, 0.2f);

    // Upper window
    glBegin(GL_QUADS);
        glVertex2f(55.8f, -6.5f);
        glVertex2f(64.2f, -6.5f);
        glVertex2f(64.2f, 4.0f);
        glVertex2f(55.8f, 4.0f);
    glEnd();

    // Lower window
    glBegin(GL_QUADS);
        glVertex2f(55.8f, -24.0f);
        glVertex2f(64.2f, -24.0f);
        glVertex2f(64.2f, -13.5f);
        glVertex2f(55.8f, -13.5f);
    glEnd();


    // DOOR

    glColor3f(0.35f, 0.2f, 0.1f);

    glBegin(GL_QUADS);
        glVertex2f(55.1f, -45.0f);
        glVertex2f(64.9f, -45.0f);
        glVertex2f(64.9f, -34.5f);
        glVertex2f(55.1f, -34.5f);
    glEnd();

    glPopMatrix();
}


//obj8
void drawFence()
{
    glColor3f(0.4f, 0.2f, 0.1f);

    // Horizontal bar 1
    glBegin(GL_QUADS);
        glVertex2f(-250.0f, -110.0f);
        glVertex2f(250.0f, -110.0f);
        glVertex2f(250.0f, -108.0f);
        glVertex2f(-250.0f, -108.0f);
    glEnd();

    // Horizontal bar 2
    glBegin(GL_QUADS);
        glVertex2f(-250.0f, -116.0f);
        glVertex2f(250.0f, -116.0f);
        glVertex2f(250.0f, -114.0f);
        glVertex2f(-250.0f, -114.0f);
    glEnd();


    // Vertical post 1
    glBegin(GL_QUADS);
        glVertex2f(-250.0f, -120.0f);
        glVertex2f(-246.0f, -120.0f);
        glVertex2f(-246.0f, -105.0f);
        glVertex2f(-250.0f, -105.0f);
    glEnd();

    // Vertical post 2
    glBegin(GL_QUADS);
        glVertex2f(-200.0f, -120.0f);
        glVertex2f(-196.0f, -120.0f);
        glVertex2f(-196.0f, -105.0f);
        glVertex2f(-200.0f, -105.0f);
    glEnd();

    // Vertical post 3
    glBegin(GL_QUADS);
        glVertex2f(-150.0f, -120.0f);
        glVertex2f(-146.0f, -120.0f);
        glVertex2f(-146.0f, -105.0f);
        glVertex2f(-150.0f, -105.0f);
    glEnd();

    // Vertical post 4
    glBegin(GL_QUADS);
        glVertex2f(-100.0f, -120.0f);
        glVertex2f(-96.0f, -120.0f);
        glVertex2f(-96.0f, -105.0f);
        glVertex2f(-100.0f, -105.0f);
    glEnd();

    // Vertical post 5
    glBegin(GL_QUADS);
        glVertex2f(-50.0f, -120.0f);
        glVertex2f(-46.0f, -120.0f);
        glVertex2f(-46.0f, -105.0f);
        glVertex2f(-50.0f, -105.0f);
    glEnd();

    // Vertical post 6
    glBegin(GL_QUADS);
        glVertex2f(0.0f, -120.0f);
        glVertex2f(4.0f, -120.0f);
        glVertex2f(4.0f, -105.0f);
        glVertex2f(0.0f, -105.0f);
    glEnd();

    // Vertical post 7
    glBegin(GL_QUADS);
        glVertex2f(50.0f, -120.0f);
        glVertex2f(54.0f, -120.0f);
        glVertex2f(54.0f, -105.0f);
        glVertex2f(50.0f, -105.0f);
    glEnd();

    // Vertical post 8
    glBegin(GL_QUADS);
        glVertex2f(100.0f, -120.0f);
        glVertex2f(104.0f, -120.0f);
        glVertex2f(104.0f, -105.0f);
        glVertex2f(100.0f, -105.0f);
    glEnd();

    // Vertical post 9
    glBegin(GL_QUADS);
        glVertex2f(150.0f, -120.0f);
        glVertex2f(154.0f, -120.0f);
        glVertex2f(154.0f, -105.0f);
        glVertex2f(150.0f, -105.0f);
    glEnd();

    // Vertical post 10
    glBegin(GL_QUADS);
        glVertex2f(200.0f, -120.0f);
        glVertex2f(204.0f, -120.0f);
        glVertex2f(204.0f, -105.0f);
        glVertex2f(200.0f, -105.0f);
    glEnd();

    // Vertical post 11
    glBegin(GL_QUADS);
        glVertex2f(246.0f, -120.0f);
        glVertex2f(250.0f, -120.0f);
        glVertex2f(250.0f, -105.0f);
        glVertex2f(246.0f, -105.0f);
    glEnd();
}

//obj9
void drawCableCar()
{
    // Cable line
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(2.0f);

    glBegin(GL_LINES);
        glVertex2f(-250.0f, 150.0f);
        glVertex2f(250.0f, 150.0f);
    glEnd();


    // Cable car
    glPushMatrix();
    glTranslatef(cableCarX, 140.0f, 0.0f);


    // Connecting pole
    glColor3f(0.2f, 0.2f, 0.2f);

    glBegin(GL_QUADS);
        glVertex2f(-2.0f, 0.0f);
        glVertex2f(2.0f, 0.0f);
        glVertex2f(2.0f, 12.0f);
        glVertex2f(-2.0f, 12.0f);
    glEnd();


   // Cable car body
glColor3f(1.0f, 0.5f, 0.0f);

glBegin(GL_QUADS);
    glVertex2f(-20.0f, 0.0f);
    glVertex2f(20.0f, 0.0f);
    glVertex2f(20.0f, -35.0f);
    glVertex2f(-20.0f, -35.0f);
glEnd();


    // Window
    glColor3f(0.5f, 0.8f, 0.9f);

    glBegin(GL_QUADS);
        glVertex2f(-12.0f, -5.0f);
        glVertex2f(12.0f, -5.0f);
        glVertex2f(12.0f, -25.0f);
        glVertex2f(-12.0f, -25.0f);
    glEnd();



    // Small door
    glBegin(GL_QUADS);
        glVertex2f(-8.0f, -25.0f);
        glVertex2f(-4.0f, -25.0f);
        glVertex2f(-4.0f, -18.0f);
        glVertex2f(-8.0f, -18.0f);
    glEnd();


    // Window dividers
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(1.0f);

    glBegin(GL_LINES);
        glVertex2f(0.0f, -5.0f);
        glVertex2f(0.0f, -25.0f);

        glVertex2f(-12.0f, -15.0f);
        glVertex2f(12.0f, -15.0f);
    glEnd();


    // Bottom border
    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_QUADS);
        glVertex2f(-16.0f, -35.0f);
        glVertex2f(16.0f, -35.0f);
        glVertex2f(16.0f, -38.0f);
        glVertex2f(-16.0f, -38.0f);
    glEnd();

    glPopMatrix();
}


//obj10
void drawSun()
{
    if (isDay)
    {
        // Sun
        circle(22.0f, 180.0f, 180.0f, 255.0f, 220.0f, 0.0f);
    }
    else
    {
        // Moon
        circle(18.0f, 180.0f, 180.0f, 230.0f, 230.0f, 204.0f);


    }
}


//////////////////////////////obj11
void drawTurbine()
{
    // TURBINE 1 - SMALL

    glPushMatrix();


    glTranslatef(-200.0f, -40.0f, 0.0f);
    glScalef(0.90f, 1.0f, 1.0f);

    // Pole
    glColor3f(0.7f, 0.7f, 0.7f);

    glBegin(GL_QUADS);
        glVertex2f(-2.0f, 0.0f);
        glVertex2f(2.0f, 0.0f);
        glVertex2f(2.0f, 48.0f);
        glVertex2f(-2.0f, 48.0f);
    glEnd();

    // Blades
    glPushMatrix();

    glTranslatef(0.0f, 48.0f, 0.0f);

    glRotatef(turbineAngle, 0.0f, 0.0f, 1.0f);

    glColor3f(0.9f, 0.9f, 0.9f);

    // Blade 1
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-4.0f, 24.0f);
        glVertex2f(4.0f, 24.0f);
    glEnd();

    // Blade 2
    glRotatef(120.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-4.0f, 24.0f);
        glVertex2f(4.0f, 24.0f);
    glEnd();

    // Blade 3
    glRotatef(120.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-4.0f, 24.0f);
        glVertex2f(4.0f, 24.0f);
    glEnd();

    glPopMatrix();

    // Center
    circle(3.0f, 0.0f, 48.0f, 220, 220, 220);

    glPopMatrix();


    //  TURBINE 2 - LARGE

    glPushMatrix();


    glTranslatef(120.0f, -40.0f, 0.0f);
    glScalef(1.0f, 1.0f, 1.2f);

    // Pole
    glColor3f(0.7f, 0.7f, 0.7f);

    glBegin(GL_QUADS);
        glVertex2f(-2.0f, 0.0f);
        glVertex2f(2.0f, 0.0f);
        glVertex2f(2.0f, 60.0f);
        glVertex2f(-2.0f, 60.0f);
    glEnd();

    // Blades
    glPushMatrix();

    glTranslatef(0.0f, 60.0f, 0.0f);

    glRotatef(turbineAngle, 0.0f, 0.0f, 1.0f);

    glColor3f(0.9f, 0.9f, 0.9f);

    // Blade 1
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-5.0f, 30.0f);
        glVertex2f(5.0f, 30.0f);
    glEnd();

    // Blade 2
    glRotatef(120.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-5.0f, 30.0f);
        glVertex2f(5.0f, 30.0f);
    glEnd();

    // Blade 3
    glRotatef(120.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-5.0f, 30.0f);
        glVertex2f(5.0f, 30.0f);
    glEnd();

    glPopMatrix();

    // Center
    circle(3.0f, 0.0f, 60.0f, 220, 220, 220);

    glPopMatrix();
}

//obj12
void drawBus()
{
    // Bus

    // Bus body
    glPushMatrix();
    glTranslatef(busX, -220.0f, 0.0f);

    glColor3f(0.9f, 0.7f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(80.0f, 0.0f);
        glVertex2f(80.0f, 35.0f);
        glVertex2f(0.0f, 35.0f);
    glEnd();

    // Window 1
    glColor3f(0.2f, 0.2f, 0.2f);

    glBegin(GL_QUADS);
        glVertex2f(5.0f, 20.0f);
        glVertex2f(15.0f, 20.0f);
        glVertex2f(15.0f, 30.0f);
        glVertex2f(5.0f, 30.0f);
    glEnd();

    // Window 2
    glBegin(GL_QUADS);
        glVertex2f(20.0f, 20.0f);
        glVertex2f(30.0f, 20.0f);
        glVertex2f(30.0f, 30.0f);
        glVertex2f(20.0f, 30.0f);
    glEnd();

    // Window 3
    glBegin(GL_QUADS);
        glVertex2f(35.0f, 20.0f);
        glVertex2f(45.0f, 20.0f);
        glVertex2f(45.0f, 30.0f);
        glVertex2f(35.0f, 30.0f);
    glEnd();

    // Window 4
    glBegin(GL_QUADS);
        glVertex2f(50.0f, 20.0f);
        glVertex2f(60.0f, 20.0f);
        glVertex2f(60.0f, 30.0f);
        glVertex2f(50.0f, 30.0f);
    glEnd();

    // Window 5
    glBegin(GL_QUADS);
        glVertex2f(65.0f, 20.0f);
        glVertex2f(75.0f, 20.0f);
        glVertex2f(75.0f, 30.0f);
        glVertex2f(65.0f, 30.0f);
    glEnd();

    // Wheels
    circle(8.0f, 15.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    circle(8.0f, 65.0f, 0.0f, 0.0f, 0.0f, 0.0f);

    glPopMatrix();
}


//========obj13
void drawCar()
{
    glPushMatrix();
    glTranslatef(carX, -170.0f, 0.0f);

    // Car body
    glColor3f(0.8f, 0.1f, 0.1f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(55.0f, 0.0f);
        glVertex2f(55.0f, 18.0f);
        glVertex2f(0.0f, 18.0f);
    glEnd();


    // Car roof
    glColor3f(0.7f, 0.1f, 0.1f);

    glBegin(GL_POLYGON);
        glVertex2f(7.0f, 18.0f);
        glVertex2f(15.0f, 32.0f);
        glVertex2f(40.0f, 32.0f);
        glVertex2f(47.0f, 18.0f);
    glEnd();


    // Windows
    glColor3f(0.6f, 0.8f, 1.0f);

    glBegin(GL_POLYGON);
        glVertex2f(11.0f, 20.0f);
        glVertex2f(17.0f, 30.0f);
        glVertex2f(38.0f, 30.0f);
        glVertex2f(43.0f, 20.0f);
    glEnd();


    // Wheels
    circle(8.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    circle(8.0f, 43.0f, 0.0f, 0.0f, 0.0f, 0.0f);

    // Wheel centers
    circle(3.5f, 12.0f, 0.0f, 180.0f, 180.0f, 180.0f);
    circle(3.5f, 43.0f, 0.0f, 180.0f, 180.0f, 180.0f);


    // Front light
    glColor3f(0.9f, 0.9f, 0.9f);

    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 10.0f);
        glVertex2f(2.0f, 10.0f);
        glVertex2f(2.0f, 16.0f);
        glVertex2f(-1.0f, 16.0f);
    glEnd();


    // Back light
    glColor3f(1.0f, 0.5f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(53.0f, 10.0f);
        glVertex2f(56.0f, 10.0f);
        glVertex2f(56.0f, 16.0f);
        glVertex2f(53.0f, 16.0f);
    glEnd();


    // Door handle
    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(25.0f, 12.0f);
        glVertex2f(30.0f, 12.0f);
        glVertex2f(30.0f, 14.0f);
        glVertex2f(25.0f, 14.0f);
    glEnd();

    glPopMatrix();
}


//obj14
void drawCar2()
{
    glPushMatrix();
    glTranslatef(car2X, -150.0f, 0.0f);

    // Car body
    glColor3f(0.0f, 0.3f, 0.8f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(55.0f, 0.0f);
        glVertex2f(55.0f, 18.0f);
        glVertex2f(0.0f, 18.0f);
    glEnd();

    // Car roof
    glBegin(GL_POLYGON);
        glVertex2f(7.0f, 18.0f);
        glVertex2f(15.0f, 32.0f);
        glVertex2f(40.0f, 32.0f);
        glVertex2f(47.0f, 18.0f);
    glEnd();

    // Windows
    glColor3f(0.6f, 0.8f, 1.0f);

    glBegin(GL_POLYGON);
        glVertex2f(11.0f, 20.0f);
        glVertex2f(17.0f, 30.0f);
        glVertex2f(38.0f, 30.0f);
        glVertex2f(43.0f, 20.0f);
    glEnd();

    // Wheels
    circle(8.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    circle(8.0f, 43.0f, 0.0f, 0.0f, 0.0f, 0.0f);

    // Wheel centers
    circle(3.5f, 12.0f, 0.0f, 180.0f, 180.0f, 180.0f);
    circle(3.5f, 43.0f, 0.0f, 180.0f, 180.0f, 180.0f);

    // Front light
    glColor3f(0.9f, 0.9f, 0.9f);

    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 10.0f);
        glVertex2f(2.0f, 10.0f);
        glVertex2f(2.0f, 16.0f);
        glVertex2f(-1.0f, 16.0f);
    glEnd();

    // Back light
    glColor3f(1.0f, 0.5f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(53.0f, 10.0f);
        glVertex2f(56.0f, 10.0f);
        glVertex2f(56.0f, 16.0f);
        glVertex2f(53.0f, 16.0f);
    glEnd();

    // Door handle
    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(25.0f, 12.0f);
        glVertex2f(30.0f, 12.0f);
        glVertex2f(30.0f, 14.0f);
        glVertex2f(25.0f, 14.0f);
    glEnd();

    glPopMatrix();
}


//obj15
void drawCloud()
{
    // Cloud 1
    glPushMatrix();

    glTranslatef(cloudX, 180.0f, 0.0f);

    circle(15.0f, 0.0f, 0.0f, 255, 255, 255);
    circle(20.0f, 20.0f, 5.0f, 255, 255, 255);
    circle(15.0f, 40.0f, 0.0f, 255, 255, 255);
    circle(15.0f, 60.0f, 0.0f, 255, 255, 255);

    glPopMatrix();


    // Cloud 2
    glPushMatrix();

    glTranslatef(cloudX2, 140.0f, 0.0f);

    circle(12.0f, -50.0f, 0.0f, 245, 245, 245);
    circle(15.0f, -35.0f, 5.0f, 245, 245, 245);
    circle(12.0f, -20.0f, 0.0f, 245, 245, 245);

    glPopMatrix();
}


//Ani1
void update(int value) {


    cloudX += 0.06f * globalSpeed;

if (cloudX > 300.0f){
    cloudX = -350.0f;}


cloudX2 += 0.06f * globalSpeed;
if (cloudX2 > 300.0f){
    cloudX2 = -350.0f;}


    if (isTurbineRotating) {
        turbineAngle += 0.9f * globalSpeed;
        if (turbineAngle > 360) turbineAngle -= 360;
    }

     cableCarX += 0.4f * globalSpeed;
    if (cableCarX > 300)
        {cableCarX = -350;}

        busX += 1.2f * globalSpeed;
    if (busX > 400)
        {busX = -400;}

          carX -= 1.5f * globalSpeed;
    if (carX < -350)
        {carX = 300;}

    car2X -= 1.4f * globalSpeed;
    if (car2X < -400)
        {car2X = 400;}



   glutPostRedisplay();
   glutTimerFunc(16, update, 0);
}



//Ani2
void keyboard(unsigned char key, int x, int y) {

    switch (key) {
        case 'n': case 'N':
            isDay = false;
            break;
        case 'd': case 'D':
            isDay = true;
            break;
         case 'r':case 'R':
            isTurbineRotating = true;
            break;
        case 's':case 'S':
            isTurbineRotating = false;
            break;


          }

}


//Ani3
void handleMouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            globalSpeed += 0.5f;
        }
        if (button == GLUT_RIGHT_BUTTON) {
            if (globalSpeed > 0.5f)
                globalSpeed -= 0.5f;
        }
    }
    glutPostRedisplay();
}




void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawSky();
    drawSun();
    drawCloud();
    drawMountain();
    drawTurbine();
    drawRoad();
    drawPineTree();
    drawTowers();
    drawHouse();
    drawFlag();
    drawFence();
    drawCableCar();
    drawBus();
    drawCar2();
    drawCar();


    glutSwapBuffers();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Switzerlandd Scene");
    gluOrtho2D(-250, 250, -250, 250);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(handleMouse);
    glutTimerFunc(0, update, 0);
    glutMainLoop();

    return 0;
}






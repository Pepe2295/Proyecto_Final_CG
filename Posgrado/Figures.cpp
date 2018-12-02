///// figures de Antonio

#include "Figures.h"

Figures::Figures()
{
	t_ini = 0.0;
	t_fin = 0.0;
}
const double PI = 3.1415926535897;
float text_der = 1.0;
float text_izq = 0.0;
void Figures::l_prisma(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, -1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}


void Figures::l_prisma_agua(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, -1, 0);
		glTexCoord2f(t_ini, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(t_fin, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(t_fin, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(t_ini, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(t_ini, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(t_fin, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(t_fin, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(t_ini, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}



void Figures::l_prisma_alberca(const GLuint &t1)
{
	GLfloat vertices[8][3] =
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	};

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.5, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.5, 1.5); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.5); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(3.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(3.0, 1.5); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.5); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.5, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.5, 1.5); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.5); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(3.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(3.0, 1.5); glVertex3fv(vertices[3]);
	glTexCoord2f(0.0, 1.5); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	/*glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();*/

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(3.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(3.0, 1.5); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.5); glVertex3fv(vertices[5]);
	glEnd();

}
void Figures::l_prisma_escalera_alberca(const GLuint &t1, const GLuint &t2)
{
	glPushMatrix();
	glTranslatef(4.7, -7.8, -9.5);
	u_cilindro(0.1, 11, 20, t1);
	glPushMatrix();
	glRotatef(-90, 0, 0, 1);
	glTranslatef(-0.1, 00, 0);
	u_cilindro(0.1, 0.5, 20, t1);
	glTranslatef(-5.5, 0, 0);
	u_cilindro(0.1, 0.3, 20, t1);
	glTranslatef(-5.5, -0.1, 0);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0.9, 0);
	glRotatef(-60, 0, 0, t1);
	u_cilindro(0.1, 4, 20, t1);
	glPopMatrix();
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glTranslatef(0, 0, -0.50);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0, -2);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0, -2);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0, -2);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0, -2);
	u_cilindro(0.1, 1, 20, t1);
	glPopMatrix();
	glTranslatef(0, 0, 1);
	u_cilindro(0.1, 11, 20, t1);
	glPushMatrix();
	glRotatef(-90, 0, 0, 1);
	glTranslatef(-0.1, 00, 0);
	u_cilindro(0.1, 0.5, 20, t1);
	glTranslatef(-5.5, 0, 0);
	u_cilindro(0.1, 0.3, 20, t1);
	glTranslatef(-5.5, -0.1, 0);
	u_cilindro(0.1, 1, 20, t1);
	glTranslatef(0, 0.9, 0);
	glRotatef(-60, 0, 0, 1);
	u_cilindro(0.1, 4, 20, t1);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//
				   //glTranslatef(-5, 8, 7.5);
	glScalef(20, 0.1, 30);
	u_prisma_patio(t2);
	glPopMatrix();

}





void Figures::u_prisma(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::ventana(const GLuint &t1, bool frontal, bool superior, 
	bool inferior, bool trasera, bool izquierda, bool derecha)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glDisable(GL_LIGHTING);
	glBindTexture(GL_TEXTURE_2D, t1);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	if(frontal){
		//	Frontal (0123)
		glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
		glEnd();
	}

	if(derecha){
		//	Derecha (1562)
		glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
		glEnd();
	}

	if(trasera){
		//	Atrás (5476)
		glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
		glEnd();
	}

	if(izquierda){
		//	Izquierda (4037)
		glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
		glEnd();
	}

	if(superior){
		//	Arriba (3267)
		glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
		glEnd();
	}

	if(inferior){
		//	Abajo (1045)
		glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
		glEnd();
	}

	glDisable(GL_ALPHA_TEST);
	glDisable(GL_BLEND);
	glEnable(GL_LIGHTING);

}

void Figures::puerta(const GLuint &t1, bool frontales, bool laterales)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glDisable(GL_LIGHTING);
	glBindTexture(GL_TEXTURE_2D, t1);
	//glEnable(GL_ALPHA_TEST);
	//glAlphaFunc(GL_GREATER, 0.1);
	//glEnable(GL_BLEND);
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	if(frontales){
		//	Frontal (0123)
		glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
		glEnd();

		//	Atrás (5476)
		glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
		glEnd();
	}

	if(laterales){
		//	Derecha (1562)
		glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
		glEnd();

		//	Izquierda (4037)
		glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
		glEnd();
	}

	glEnable(GL_LIGHTING);

}


void Figures::u_prisma_garage(const GLuint &t1, const GLuint &t2, const GLuint &t3)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t2);

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t3);
	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::l_prisma_garage(const GLuint &t1, const GLuint &t2, const GLuint &t3)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t2);

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, -1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t3);
	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::mueble(const GLuint &t1, const GLuint &t2)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t2);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::u_prisma_escalera(const GLuint &t1, const GLuint &t2)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t2);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(0.5, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(0.5, 0.2); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 0.2); glVertex3fv(vertices[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::u_prisma_patio(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(4.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(4.0, 4.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 4.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0,-1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::u_prisma_trapecio(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas Vértice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 4 V4
		{ 0.5*largo ,0.25*altura , 0.15*profundidad },    //Coordenadas Vértice 5 V5
		{ 0.5*largo ,0.25*altura , -0.15*profundidad },    //Coordenadas Vértice 6 V6
		{ -0.5*largo ,0.25*altura , -0.15*profundidad },    //Coordenadas Vértice 7 V7
		{ -0.5*largo ,0.25*altura , 0.15*profundidad },    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
										  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[3]);
	glEnd();


	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();



	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glEnd();

	//glBindTexture(GL_TEXTURE_2D, text2);
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glEnd();
}

void Figures::u_prisma_tele(float altura, float largo, float profundidad, GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas Vértice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 4 V4
		{ 0.5*largo ,0.25*altura , 0.15*profundidad },    //Coordenadas Vértice 5 V5
		{ 0.5*largo ,0.25*altura , -0.15*profundidad },    //Coordenadas Vértice 6 V6
		{ -0.5*largo ,0.25*altura , -0.15*profundidad },    //Coordenadas Vértice 7 V7
		{ -0.5*largo ,0.25*altura , 0.15*profundidad },    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
										  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[3]);
	glEnd();


	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();



	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glEnd();

	//glBindTexture(GL_TEXTURE_2D, text2);
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, text2);

	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
	glEnd();
}


void Figures::u_cono(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[3][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (fijo)
		{ 0.f, 0.f, 0.f }		// V2 (variable)
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res; i++)
	{
		//	Punto actual y siguiente
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		//	Reiniciar altura
		vertices[1][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[1]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[2]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[1][1] = h;

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(vertices[0][0], h, vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::l_cono(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[3][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (fijo)
		{ 0.f, 0.f, 0.f }		// V2 (variable)
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res; i++)
	{
		//	Punto actual y siguiente
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		//	Reiniciar altura
		vertices[1][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[2]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[1][1] = h;

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(-vertices[0][0], -h, -vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::u_piramide(const GLfloat &l, const GLfloat &w, const GLfloat &h, const GLuint &t1)
{
	//	l -> x; w -> z, h -> y
	GLfloat vertices[5][3] =
	{
		{ -0.5 * l, 0.0, -0.5 * w },		//	0 - A
		{ 0.5 * l, 0.0, -0.5 * w},			//	1 - B
		{ 0.5 * l, 0.0, 0.5 * w}, 			//	2 - C
		{ -0.5 * l, 0.0, 0.5 * w},			//	3 - D
		{ 0.0, h, 0.0 }						//	4 - E
	};

	//	Base del techo:
	glBindTexture(GL_TEXTURE_2D, t1);

	glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0, 1); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 1); glVertex3fv(vertices[3]);	//	D
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(1, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(1, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();


}

void Figures::u_unit_piramide(const GLuint &t1)
{
	GLfloat vertices[5][3] =
	{
		{ -0.5, 0.0, -0.5 },		//	0 - A
		{ 0.5, 0.0, -0.5 },			//	1 - B
		{ 0.5, 0.0, 0.5 }, 			//	2 - C
		{ -0.5, 0.0, 0.5 },			//	3 - D
		{ 0.0, 1 / sqrt(2), 0.0 }	//	4 - E
	};

	//	Base del techo:
	glBindTexture(GL_TEXTURE_2D, t1);

	glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0, 1); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 1); glVertex3fv(vertices[3]);	//	D
	glEnd();


	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(1, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(1, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();
}

void Figures::l_piramide(const GLfloat &l, const GLfloat &w, const GLfloat &h, const GLuint &t1)
{
	//	l -> x; w -> z, h -> y
	GLfloat vertices[5][3] =
	{
		{ -0.5 * l, 0.0, -0.5 * w },		//	0 - A
		{ 0.5 * l, 0.0, -0.5 * w},			//	1 - B
		{ 0.5 * l, 0.0, 0.5 * w}, 			//	2 - C
		{ -0.5 * l, 0.0, 0.5 * w},			//	3 - D
		{ 0.0, h, 0.0 }						//	4 - E
	};

	//	Base del techo:
	glBindTexture(GL_TEXTURE_2D, t1);

	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glTexCoord2f(0, 1); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 1); glVertex3fv(vertices[3]);	//	D
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(1, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(1, 0, 0);
	glTexCoord2f(1, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();


}

void Figures::l_unit_piramide(const GLuint &t1)
{
	GLfloat vertices[5][3] =
	{
		{ -0.5, 0.0, -0.5 },		//	0 - A
		{ 0.5, 0.0, -0.5 },			//	1 - B
		{ 0.5, 0.0, 0.5 }, 			//	2 - C
		{ -0.5, 0.0, 0.5 },			//	3 - D
		{ 0.0, 1 / sqrt(2), 0.0 }	//	4 - E
	};

	//	Base del techo:
	glBindTexture(GL_TEXTURE_2D, t1);

	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glTexCoord2f(0, 1); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 1); glVertex3fv(vertices[3]);	//	D
	glEnd();


	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(1, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(1, 0, 0);
	glTexCoord2f(1, 0); glVertex3fv(vertices[0]);	//	A
	glTexCoord2f(0, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(0, 0); glVertex3fv(vertices[1]);	//	B
	glTexCoord2f(1, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0, 0); glVertex3fv(vertices[2]);	//	C
	glTexCoord2f(1, 0); glVertex3fv(vertices[3]);	//	D
	glTexCoord2f(0.5, 1); glVertex3fv(vertices[4]);	//	E
	glEnd();
}


void Figures::u_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(vertices[0][0], h, vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::u_medio_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res/2; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[3]);
		glEnd();

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(vertices[0][0], h, vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::u_medio_cilindro_sin_tapa(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res/2; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		/*glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[3]);
		glEnd();*/

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(vertices[0][0], h, vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}
void Figures::u_cuarto_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res/4; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[3]);
		glEnd();

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(vertices[0][0], h, vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}
void Figures::l_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[2]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[3]);
		glEnd();

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(-vertices[0][0], -h, -vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::l_cilindro_sin_tapa(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1)
{

	//	Dibujar triángulo a triángulo
	GLfloat vertices[5][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, h, 0.f },		// V2 (variable)
		{ 0.f, h, 0.f },		// V3 (variable)
		{ 0.f, 0.f, 0.f }		// V4 (fijo (origen))
	};

	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat alfa = (2 * PI) / res;

	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < res; i++)
	{
		//	Punto actual y siguiente (inferiores)
		vertices[0][0] = r * cos(i * alfa);
		vertices[0][2] = r * sin(i * alfa);

		vertices[1][0] = r * cos((i + 1) * alfa);
		vertices[1][2] = r * sin((i + 1) * alfa);

		//	Punto actual y siguiente (superior)
		vertices[2][0] = r * cos((i + 1) * alfa);
		vertices[2][2] = r * sin((i + 1) * alfa);

		vertices[3][0] = r * cos(i * alfa);
		vertices[3][2] = r * sin(i * alfa);


		//	Reiniciar altura
		vertices[4][1] = 0.f;

		GLfloat c_text = 1.0 / res;

		//	Construir base (inferior) con textura.
		glBegin(GL_POLYGON);
			glNormal3f(0, 1, 0);
			glTexCoord2f(0.5 + 0.5 * cos(i * alfa), 0.5 + 0.5 * sin(i * alfa)); 	glVertex3fv(vertices[0]);
			glTexCoord2f(0.5, 0.5); 	glVertex3fv(vertices[4]);
			glTexCoord2f(0.5 + 0.5 * cos((i + 1) * alfa), 0.5 + 0.5 * sin((i + 1) * alfa)); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			//glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
		glEnd();

		//	Actualizar vértice central para la altura
		vertices[4][1] = h;

		//	Construir base (superior) con textura.
		/*glBegin(GL_POLYGON);
			glNormal3f(0, -1, 0);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0.5, 1); 	glVertex3fv(vertices[4]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[3]);
		glEnd();*/

		//	Construir superficie con textura
		glBegin(GL_POLYGON);
			glNormal3f(-vertices[0][0], -h, -vertices[0][2]);
			glTexCoord2f(0, 0); 	glVertex3fv(vertices[0]);
			glTexCoord2f(1, 0); 	glVertex3fv(vertices[1]);
			glTexCoord2f(1, 1); 	glVertex3fv(vertices[2]);
			glTexCoord2f(0, 1); 	glVertex3fv(vertices[3]);
			//glTexCoord2f(c_text * i, 0); 	glVertex3fv(vertices[0]);
			//glTexCoord2f(c_text * i, 1); 	glVertex3fv(vertices[1]);
			//glTexCoord2f(c_text * (i + 1), 0); 	glVertex3fv(vertices[2]);
		glEnd();
	}
}

void Figures::u_esfera(const GLfloat &r, const GLuint &meridianos, 
	const GLuint &paralelos, const GLuint &t1)
{
	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat theta = (2 * PI) / meridianos;
	const GLfloat alfa = PI / paralelos; 

	//	Texturizado
	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	//	Dibujar triángulo a triángulo
	GLfloat vertices[4][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, 0.f, 0.f },		// V2 (variable)
		{ 0.f, 0.f, 0.f },		// V3 (variable)
	};

	//	Aplicar textura
	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < meridianos; i++)
	{
		for(int j = 0; j < paralelos; j++)
		{
			//	Actual (inferior)
			vertices[0][0] = r * sin(alfa * j) * cos(theta * i);
			vertices[0][1] = r * cos(alfa * j);
			vertices[0][2] = r * sin(alfa * j) * sin(theta * i);

			//	Actual (superior)
			vertices[1][0] = r * sin(alfa * (j + 1)) * cos(theta * i);
			vertices[1][1] = r * cos(alfa * (j + 1));
			vertices[1][2] = r * sin(alfa * (j + 1)) * sin(theta * i);

			//	Siguiente (superior)
			vertices[2][0] = r * sin(alfa * (j + 1)) * cos(theta * (i + 1));
			vertices[2][1] = r * cos(alfa * (j + 1));
			vertices[2][2] = r * sin(alfa * (j + 1)) * sin(theta * (i + 1));

			//	Siguiente (inferior)
			vertices[3][0] = r * sin(alfa * j) * cos(theta * (i + 1));
			vertices[3][1] = r * cos(alfa * j);
			vertices[3][2] = r * sin(alfa * j) * sin(theta * (i + 1));

			glBegin(GL_POLYGON);
			//glNormal3f(vertices[0][0], vertices[1][1], vertices[0][2]);
			/*glNormal3fv(vertices[0]);
			glTexCoord2f(0, 0); glVertex3fv(vertices[0]);
			glNormal3fv(vertices[1]);
			glTexCoord2f(0, 1); glVertex3fv(vertices[1]);
			glNormal3fv(vertices[2]);
			glTexCoord2f(1, 1); glVertex3fv(vertices[2]);
			glNormal3fv(vertices[3]);
			glTexCoord2f(1, 0); glVertex3fv(vertices[3]);*/
			glNormal3fv(vertices[0]);
			glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[0]);
			glNormal3fv(vertices[1]);
			glTexCoord2f(ctext_s*i, -ctext_t*(j + 1)); glVertex3fv(vertices[1]);
			glNormal3fv(vertices[2]);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t*(j + 1)); glVertex3fv(vertices[2]);
			glNormal3fv(vertices[3]);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t*j); glVertex3fv(vertices[3]);
			glEnd();
			
		}
	}
}

void Figures::u_media_esfera(const GLfloat &r, const GLuint &meridianos, 
	const GLuint &paralelos, const GLuint &t1)
{
	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat theta = (PI) / meridianos;
	const GLfloat alfa = PI / paralelos; 

	//	Texturizado
	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	//	Dibujar triángulo a triángulo
	GLfloat vertices[4][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, 0.f, 0.f },		// V2 (variable)
		{ 0.f, 0.f, 0.f },		// V3 (variable)
	};

	//	Aplicar textura
	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < meridianos; i++)
	{
		for(int j = 0; j < paralelos; j++)
		{
			//	Actual (inferior)
			vertices[0][0] = r * sin(alfa * j) * cos(theta * i);
			vertices[0][1] = r * cos(alfa * j);
			vertices[0][2] = r * sin(alfa * j) * sin(theta * i);

			//	Actual (superior)
			vertices[1][0] = r * sin(alfa * (j + 1)) * cos(theta * i);
			vertices[1][1] = r * cos(alfa * (j + 1));
			vertices[1][2] = r * sin(alfa * (j + 1)) * sin(theta * i);

			//	Siguiente (superior)
			vertices[2][0] = r * sin(alfa * (j + 1)) * cos(theta * (i + 1));
			vertices[2][1] = r * cos(alfa * (j + 1));
			vertices[2][2] = r * sin(alfa * (j + 1)) * sin(theta * (i + 1));

			//	Siguiente (inferior)
			vertices[3][0] = r * sin(alfa * j) * cos(theta * (i + 1));
			vertices[3][1] = r * cos(alfa * j);
			vertices[3][2] = r * sin(alfa * j) * sin(theta * (i + 1));

			glBegin(GL_POLYGON);
			//glNormal3f(vertices[0][0], vertices[1][1], vertices[0][2]);
			/*glNormal3fv(vertices[0]);
			glTexCoord2f(0, 0); glVertex3fv(vertices[0]);
			glNormal3fv(vertices[1]);
			glTexCoord2f(0, 1); glVertex3fv(vertices[1]);
			glNormal3fv(vertices[2]);
			glTexCoord2f(1, 1); glVertex3fv(vertices[2]);
			glNormal3fv(vertices[3]);
			glTexCoord2f(1, 0); glVertex3fv(vertices[3]);*/
			glNormal3fv(vertices[0]);
			glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[0]);
			glNormal3fv(vertices[1]);
			glTexCoord2f(ctext_s*i, -ctext_t*(j + 1)); glVertex3fv(vertices[1]);
			glNormal3fv(vertices[2]);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t*(j + 1)); glVertex3fv(vertices[2]);
			glNormal3fv(vertices[3]);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t*j); glVertex3fv(vertices[3]);
			glEnd();
			
		}
	}
}

void Figures::l_esfera(const GLfloat &r, const GLuint &meridianos, 
	const GLuint &paralelos, const GLuint &t1)
{
	//	Calcular la resolución
	const double PI = 3.1415926535897;
	const GLfloat theta = (2 * PI) / meridianos;
	const GLfloat alfa = PI / paralelos; 

	//	Texturizado
	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	//	Dibujar triángulo a triángulo
	GLfloat vertices[4][3] = 
	{ 							//  { x, y, z }
		{ 0.f, 0.f, 0.f },		// V0 (variable)
		{ 0.f, 0.f, 0.f },		// V1 (variable)
		{ 0.f, 0.f, 0.f },		// V2 (variable)
		{ 0.f, 0.f, 0.f },		// V3 (variable)
	};

	//	Aplicar textura
	glBindTexture(GL_TEXTURE_2D, t1);

	for(int i = 0; i < meridianos; i++)
	{
		for(int j = 0; j < paralelos; j++)
		{
			//	Actual (inferior)
			vertices[0][0] = r * sin(alfa * j) * cos(theta * i);
			vertices[0][1] = r * cos(alfa * j);
			vertices[0][2] = r * sin(alfa * j) * sin(theta * i);

			//	Actual (superior)
			vertices[1][0] = r * sin(alfa * (j + 1)) * cos(theta * i);
			vertices[1][1] = r * cos(alfa * (j + 1));
			vertices[1][2] = r * sin(alfa * (j + 1)) * sin(theta * i);

			//	Siguiente (superior)
			vertices[2][0] = r * sin(alfa * (j + 1)) * cos(theta * (i + 1));
			vertices[2][1] = r * cos(alfa * (j + 1));
			vertices[2][2] = r * sin(alfa * (j + 1)) * sin(theta * (i + 1));

			//	Siguiente (inferior)
			vertices[3][0] = r * sin(alfa * j) * cos(theta * (i + 1));
			vertices[3][1] = r * cos(alfa * j);
			vertices[3][2] = r * sin(alfa * j) * sin(theta * (i + 1));

			glBegin(GL_POLYGON);
				//glNormal3f(-vertices[0][0], -vertices[1][1], -vertices[0][2]);
				/*glNormal3f(-vertices[0][0], -vertices[0][1], -vertices[0][2]);
				glTexCoord2f(0, 0); glVertex3fv(vertices[0]);
				glNormal3f(-vertices[1][0], -vertices[1][1], -vertices[1][2]);
				glTexCoord2f(0, 1); glVertex3fv(vertices[1]);
				glNormal3f(-vertices[2][0], -vertices[2][1], -vertices[2][2]);
				glTexCoord2f(1, 1); glVertex3fv(vertices[2]);
				glNormal3f(-vertices[3][0], -vertices[3][1], -vertices[3][2]);
				glTexCoord2f(1, 0); glVertex3fv(vertices[3]);*/
				glNormal3f(-vertices[0][0], -vertices[0][1], -vertices[0][2]);
				glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[0]);
				glNormal3f(-vertices[1][0], -vertices[1][1], -vertices[1][2]);
				glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[1]);
				glNormal3f(-vertices[2][0], -vertices[2][1], -vertices[2][2]);
				glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[2]);
				glNormal3f(-vertices[3][0], -vertices[3][1], -vertices[3][2]);
				glTexCoord2f(ctext_s*i, -ctext_t*j); glVertex3fv(vertices[3]);
			glEnd();
			
		}
	}	
}


void Figures::u_prisma_no_derecha(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0,-1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::u_prisma_no_izquierda(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();


	//	Arriba (3267)
	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0,-1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::l_prisma_no_derecha(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0,1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::l_prisma_no_derecha(const GLuint &t1, const GLuint &t2)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
	glNormal3f(1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Arriba (3267)
	glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, t2);

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0,1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}

void Figures::l_prisma_no_izquierda(const GLuint &t1)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, -1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Derecha (1562)
	glBegin(GL_POLYGON);
	glNormal3f(-1, 0, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();


	//	Arriba (3267)
	glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Abajo (1045)
	glBegin(GL_POLYGON);
	glNormal3f(0,1, 0);
	glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
	glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
	glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[4]);
	glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[5]);
	glEnd();

}






void Figures::skybox(const GLuint &t1, const GLuint &t2, const GLuint &t3, const GLuint &t4)
{
	GLfloat vertices[8][3] = 
	{
		{ -0.5, -0.5, +0.5 },		//	V0
		{ +0.5, -0.5, +0.5 },		//	V1
		{ +0.5, +0.5, +0.5 },		//	V2
		{ -0.5, +0.5, +0.5 },		//	V3
		{ -0.5, -0.5, -0.5 },		//	V4
		{ +0.5, -0.5, -0.5 },		//	V5
		{ +0.5, +0.5, -0.5 },		//	V6
		{ -0.5, +0.5, -0.5 }		//	V7
	}; 


	glBindTexture(GL_TEXTURE_2D, t3);

	//	Arriba (3267)
	glBegin(GL_POLYGON);
		glNormal3f(0, -1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[3]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[2]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();

	//	Color azul
	glColor3f(0.1764, 0.4235, 0.7960);

	glBindTexture(GL_TEXTURE_2D, t1);

	//	Frontal (0123)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, -1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[2]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[3]);
	glEnd();

	//	Atrás (5476)
	glBegin(GL_POLYGON);
		glNormal3f(0, 0, 1);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[7]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[6]);
	glEnd();


	glBindTexture(GL_TEXTURE_2D, t2);

	//	Derecha (1562)
	glBegin(GL_POLYGON);
		glNormal3f(-1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[5]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[6]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[2]);
	glEnd();

	//	Izquierda (4037)
	glBegin(GL_POLYGON);
		glNormal3f(1, 0, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[4]);
		glTexCoord2f(1.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(1.0, 1.0); glVertex3fv(vertices[3]);
		glTexCoord2f(0.0, 1.0); glVertex3fv(vertices[7]);
	glEnd();


	glBindTexture(GL_TEXTURE_2D, t4);

	//	Volver a blanco
	glColor3f(1, 1, 1);

	//	Abajo (1045)
	glBegin(GL_POLYGON);
		glNormal3f(0, 1, 0);
		glTexCoord2f(0.0, 0.0); glVertex3fv(vertices[1]);
		glTexCoord2f(40.0, 0.0); glVertex3fv(vertices[0]);
		glTexCoord2f(40.0, 40.0); glVertex3fv(vertices[4]);
		glTexCoord2f(0.0, 40.0); glVertex3fv(vertices[5]);
	glEnd();

}


void Figures::skybox(float largo, float altura, float profundidad, GLuint text)  //Funcion creacion cielo
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
        	glVertex3fv(vertice[7]);
		glEnd();
}

void Figures::skybox2 (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();
}



void Figures::prisma (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void Figures::prisma2 (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void Figures::prisma_anun (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
		glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(text_der, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(text_der, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(text_izq, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(text_izq, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}


void Figures::esfera(GLfloat radio, int meridianos, int paralelos, GLuint text )
{
	GLdouble theta, phi;

	float ctext_s = 1.0/meridianos;
	float ctext_t = 1.0/paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	int i, j;
	float angulom, angulop;
	angulom=2*3.141592654/meridianos;
	angulop=3.141592654/paralelos; 
	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radio*cos(angulom*i)*sin(angulop*j);
			v1[1]=radio*cos(angulop*j);
			v1[2]=radio*sin(angulom*i)*sin(angulop*j);
			
			v2[0]=radio*cos(angulom*i)*sin(angulop*(j+1));
			v2[1]=radio*cos(angulop*(j+1));
			v2[2]=radio*sin(angulom*i)*sin(angulop*(j+1));
			
			v3[0]=radio*cos(angulom*(i+1))*sin(angulop*(j+1));
			v3[1]=radio*cos(angulop*(j+1));
			v3[2]=radio*sin(angulom*(i+1))*sin(angulop*(j+1));

			v4[0]=radio*cos(angulom*(i+1))*sin(angulop*j);
			v4[1]=radio*cos(angulop*j);
			v4[2]=radio*sin(angulom*(i+1))*sin(angulop*j);
			
			glBegin(GL_POLYGON);
				glNormal3fv(v1);
				glTexCoord2f(ctext_s*i, -ctext_t*j);	
				glVertex3fv(v1);
				glNormal3fv(v2);
				glTexCoord2f(ctext_s*i, -ctext_t*(j+1));	
				glVertex3fv(v2);
				glNormal3fv(v3);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*(j+1));	
				glVertex3fv(v3);
				glNormal3fv(v4);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*j);	
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void Figures::torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos )
{

	float R = 0;
	float r = 0;

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	r = (radioM - radiom)/2;
	R = radiom + r;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			
			v1[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*j);
			v1[2]=R*sin(angulom*i)+ r*sin(angulom*i)*cos(angulop*j);
			v1[1]=r*sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);
			
			v2[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*(j+1));
			v2[2]=R*sin(angulom*i) + r*sin(angulom*i)*cos(angulop*(j+1));
			v2[1]=r*sin(angulop*(j+1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*(j+1));
			v3[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*(j+1));
			v3[1]=r*sin(angulop*(j+1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*j);
			v4[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*j);
			v4[1]=r*sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);
			
			glBegin(GL_POLYGON);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void Figures::cono(float altura, float radio, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;
	float ctext_s = 1.0/resolucion;
	
	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	for(int i=0; i <resolucion; i++)
	{
		
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
		
		//glBegin(GL_LINE_LOOP);
        glBegin(GL_POLYGON); //Construye Base
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();


		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_TRIANGLES);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*i, 1.0f);	glVertex3f(0.0,altura,0.0);
		glEnd();
	}
}

void Figures::cilindro(float radio, float altura, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	float v5[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;

	//float ctext_s = 1/resolucion-1;
	float ctext_s = 1.0/resolucion;
	float ctext_t = 0.0;

	
	for(int i=0; i <resolucion; i++)
	{
		 
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
	
		v4[0]=radio*cos(angulo*i);
		v4[1]=altura;
		v4[2]=radio*sin(angulo*i);

		v5[0]=radio*cos(angulo*(i+1));
		v5[1]=altura;
		v5[2]=radio*sin(angulo*(i+1));

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3f(0.0,altura,0.0);
			glVertex3fv(v4);
			glVertex3fv(v5);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_POLYGON);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*(i+1), 1.0f);	glVertex3fv(v5);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
}	

void Figures::prisma_tv(float altura, float largo, float profundidad, GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas Vértice 1 V1
	{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 2 V2
	{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 3 V3
	{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 4 V4
	{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 5 V5
	{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 6 V6
	{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 7 V7
	{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
										  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glEnd();


	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();


	glBindTexture(GL_TEXTURE_2D, text);
	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();


	glBindTexture(GL_TEXTURE_2D, text2);
	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, text);
	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();
}

void Figures::muro(float largo, float alto, float ancho, const GLuint &t1)
{
	glEnable(GL_TEXTURE_2D);

	glPushMatrix();
	glEnable(GL_LIGHTING);
//	glBindTexture(GL_TEXTURE_2D, t1);

	glBegin(GL_QUADS);
	//cara superior

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(0.0f, alto, 0.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(0.0f, alto, ancho);
	glTexCoord2f(1.0, 1.0); glVertex3f(largo, alto, ancho);
	glTexCoord2f(1.0, 0.0); glVertex3f(largo, alto, 0.0f);
	//base
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(0.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0, 0.0); glVertex3f(largo, 0.0f, 0.0f);
	glTexCoord2f(1.0, 1.0); glVertex3f(largo, 0.0f, ancho);
	glTexCoord2f(0.0, 1.0); glVertex3f(0.0f, 0.0f, ancho);

	//cara interior (paralela a eje x)
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(0.0f, 0.0f, ancho);
	glTexCoord2f(1.0, 0.0); glVertex3f(largo, 0.0f, ancho);
	glTexCoord2f(1.0, 1.0); glVertex3f(largo, alto, ancho);
	glTexCoord2f(0.0, 1.0); glVertex3f(0.0f, alto, ancho);

	glEnd();
	glDisable(GL_LIGHTING);
	//glBindTexture(GL_TEXTURE_2D, t2);

	glBegin(GL_QUADS);
	//cara izq (sobre eje Z)
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(0.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(0.0f, 0.0f, ancho);
	glTexCoord2f(1.0, 1.0); glVertex3f(0.0f, alto, ancho);
	glTexCoord2f(1.0, 0.0); glVertex3f(0.0f, alto, 0.0f);

	//cara derecha(paralelo a eje z)
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(largo, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(largo, alto, 0.0f);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(largo, alto, ancho);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(largo, 0.0f, ancho);

	//cara exterior (sobre eje x)
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(0.0f, alto, 0);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(largo, alto, 0);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(largo, 0.0f, 0);

	glEnd();

	glPopMatrix();

}

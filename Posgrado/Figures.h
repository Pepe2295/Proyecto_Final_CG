#ifndef _FIGURES_H_
#define _FIGURES_H_

#if _WIN32
	#include "Main.h"
#else
	#include "NVSMain.h"
#endif

class Figures
{

	public:
		float text_der;
		float text_izq;

		void esfera(GLfloat radio, int meridianos, int paralelos, GLuint text); //Funcíon creacion esfera
		void cilindro(float radio, float altura, int resolucion, GLuint text);	//Funcíon creacion cilindro
		void cono(float altura, float radio, int resolucion, GLuint text);		//Funcíon creacion cono
		void prisma_anun (GLuint text, GLuint text2);							//Funcíon creacion movimiento
		void prisma (float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma
		void prisma2 (GLuint text, GLuint text2);
		void skybox(float altura, float largo, float profundidad, GLuint text);	//Funcion creacion cielo
		void skybox2 (float altura, float largo, float profundidad, GLuint text);
		void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos);

		void u_prisma(const GLuint &t1);
		void l_prisma(const GLuint &t1);
		void u_cono(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void u_prisma_trapecio(float altura, float largo, float profundidad, GLuint text);
		void u_prisma_tele(float altura, float largo, float profundidad, GLuint text, GLuint tex2);
		void l_cono(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void u_piramide(const GLfloat &l, const GLfloat &w, const GLfloat &h, const GLuint &t1);
		void l_piramide(const GLfloat &l, const GLfloat &w, const GLfloat &h, const GLuint &t1);
		void u_unit_piramide(const GLuint &t1);
		void l_unit_piramide(const GLuint &t1);
		void u_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void u_medio_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void u_cuarto_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void l_cilindro(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void u_esfera(const GLfloat &r, const GLuint &meridianos, const GLuint &paralelos, const GLuint &t1);
		void l_esfera(const GLfloat &r, const GLuint &meridianos, const GLuint &paralelos, const GLuint &t1);

		//	Otros
		void u_prisma_no_derecha(const GLuint &t1);
		void u_prisma_garage(const GLuint &t1, const GLuint &t2, const GLuint &t3);
		void l_prisma_garage(const GLuint &t1, const GLuint &t2, const GLuint &t3);
		void l_prisma_agua(const GLuint &t1);
		void u_prisma_no_izquierda(const GLuint &t1);
		void l_prisma_no_derecha(const GLuint &t1);
		void l_prisma_no_derecha(const GLuint &t1, const GLuint &t2);
		void l_prisma_no_izquierda(const GLuint &t1);
		void u_prisma_escalera(const GLuint &t1, const GLuint &t2);
		void u_prisma_patio(const GLuint &t1);
		void l_prisma_alberca(const GLuint &t1);
		void l_prisma_escalera_alberca(const GLuint & t1, const GLuint & t2);
		void u_media_esfera(const GLfloat &r, const GLuint &meridianos, const GLuint &paralelos, const GLuint &t1);
		void mueble(const GLuint &t1, const GLuint &t2);
		void u_medio_cilindro_sin_tapa(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void l_cilindro_sin_tapa(const GLfloat &r, const GLfloat &h, const GLfloat &res, const GLuint &t1);
		void skybox(const GLuint &t1, const GLuint &t2, const GLuint &t3, const GLuint &t4);
		void ventana(const GLuint &t1, bool frontal, bool superior, bool inferior, bool trasera, bool izquierda, bool derecha);
		void puerta(const GLuint &t1, bool frontales, bool laterales);
		void Figures::prisma_tv(float altura, float largo, float profundidad, GLuint text, GLuint text2);
		//void Figures::skybox(float largo, float altura, float profundidad, GLuint text);
		void Figures::muro(float largo, float alto, float ancho, const GLuint &t1);
		//	Constructor
		Figures();

		double t_ini;
		double t_fin;

};


#endif
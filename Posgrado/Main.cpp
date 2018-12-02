#include "texture.h"
#include "Camera.h"
#include "Figures.h"

#include "cmodel/CModel.h"
//Solo para Visual Studio 2015
#if (_MSC_VER >= 1900)
#   pragma comment( lib, "legacy_stdio_definitions.lib" )
#endif

//	Prototipos de funciones

void mueble_buro(void);
void mueble_armario(void);
void edificio(void);
void casasuperior(void);
void puertas(const GLuint &t1);
void cocina(void);
void comedor(void);
void silla(void);
void mesa_comedor(void);
void sala(void);
void sillon_grande(void);
void sillon_pequeno(void);
void mesa_central(void);
//void bano(void);
//void retrete(void);
void lavabo(void);
void alberca(void);
void cama(void);
void animacion_television();
void animacion_television2();
//void arbol(const GLuint &text);

void estudio(void);
void recividor(void);
void cuarto1(void);
void carro(void);


int w = 500, h = 500;
int frame = 0, time2, timebase = 0;
char s[30];

float angRot = 0.0;
float movKitX = 50.0;
float movKitZ = 15.0;
float rotKit = 90.0;
float rotTires = 0.0;


//	Objeto para dibujar figuras
//figures;
Figures figures;
Figures mov_agua;

CCamera objCamera;	//Create objet Camera

GLfloat g_lookupdown = 0.0f;    // Look Position In The Z-Axis (NEW) 

GLdouble estadoTelevision2 = 1.0;
GLdouble estadoTelevision = 1.0;

GLfloat Diffuse[]= { 0.5f, 0.5f, 0.5f, 1.0f };				// Diffuse Light Values
GLfloat Specular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat Position[]= { 0.0f, 7.0f, -5.0f, 0.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

//Variables de apoyo para colocar figuras
float xx=0.0, yy = 0.0, zz = 0.0;
float tamx = 1.0, tamy = 1.0, tamz = 1.0;


Figures fig7;

//	Texturas
CTexture window_texture;
CTexture cuarzo;
CTexture cubierta;
CTexture metal_cromo;
CTexture pared_interior;
CTexture puertaFrente;
CTexture garage;
CTexture alacena1;
CTexture alacena2;
CTexture alacena3;
CTexture pisoRojo;
CTexture mosaicoVintage;
CTexture textAlberca;
CTexture pisoPatioT;
CTexture ropero;
CTexture agua;
CTexture porcelana;
CTexture plata;
CTexture cielo_lateral;
CTexture cielo_frontal;
CTexture cielo_superior;
CTexture pasto;
CTexture lamp;
CTexture tocador;
CTexture toallas;
CTexture tele1;
CTexture refri;
CTexture t1;
CTexture t2;
CTexture t3;
CTexture t4;
CTexture t5;
CTexture t6;
CTexture t7;
CTexture t8;
CTexture t9;
CTexture t10;
CTexture t11;
CTexture t12;
CTexture t13;
CTexture t14;
CTexture t15;
CTexture t16;
CTexture t17;
CTexture t18;
CTexture t19;
CTexture t20;
CTexture t21;
CTexture t1_0;
CTexture t1_1;
CTexture t1_2;
CTexture t1_3;
CTexture marcotv;
CTexture sillon;
CTexture librero;
CTexture librero2;
CTexture vitrina;
CTexture chimenea;
CTexture chimeneaExt;
CTexture madera;
CTexture muebleBanio;
CTexture muebleBanio2;
CTexture negroMate;
CTexture muebleBuro;
CTexture almohada;
CTexture cabecera;
CTexture cobija;
CTexture piso;
CTexture estufa;
CTexture estufaCal;
CTexture tree_tex;
CTexture door;
CTexture ball;
CTexture pisomadera;
CTexture cuadriculado;
CTexture maderapiso;
CTexture exterior;
CTexture maderablanca;
CTexture textMaderaC;
CTexture textMaderaN;
CTexture closet;

CModel kit;
CModel llanta;
CModel avion;
CModel cocinam;
CModel refrigerador;
CModel escritorio;
CModel sillam;
CModel reloj;
CModel sofam;
CModel reloj2;
CModel retrete;
CModel camam;



//sky;
const double PI = 3.1415926535897;
void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo	

	glEnable(GL_TEXTURE_2D);

	glShadeModel (GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glEnable ( GL_COLOR_MATERIAL );

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);

	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.3f);


	//	Texturas
	cuarzo.LoadTGA("textures/paredExt.tga");
	cuarzo.BuildGLTexture();
	cuarzo.ReleaseImage();

	metal_cromo.LoadTGA("textures/metal_cromo.tga");
	metal_cromo.BuildGLTexture();
	metal_cromo.ReleaseImage();
/*
	ropero.LoadTGA("textures/roperoo.tga");
	ropero.BuildGLTexture();
	ropero.ReleaseImage();

	toallas.LoadTGA("textures/toallas.tga");
	toallas.BuildGLTexture();
	toallas.ReleaseImage();
*/
	cubierta.LoadTGA("textures/cubierta.tga");
	cubierta.BuildGLTexture();
	cubierta.ReleaseImage();
/*
	tele1.LoadTGA("textures/tele1.tga");		//tal vez si se usa
	tele1.BuildGLTexture();
	tele1.ReleaseImage();

	tocador.LoadTGA("textures/tocador.tga");
	tocador.BuildGLTexture();
	tocador.ReleaseImage();
*/
	alacena1.LoadTGA("textures/alacena.tga");
	alacena1.BuildGLTexture();
	alacena1.ReleaseImage();

	alacena2.LoadTGA("textures/alacena1.tga");
	alacena2.BuildGLTexture();
	alacena2.ReleaseImage();

	alacena3.LoadTGA("textures/alacena2.tga");
	alacena3.BuildGLTexture();
	alacena3.ReleaseImage();

	pared_interior.LoadTGA("textures/pared.tga");
	pared_interior.BuildGLTexture();
	pared_interior.ReleaseImage();

	puertaFrente.LoadTGA("textures/puerta.tga");
	puertaFrente.BuildGLTexture();
	puertaFrente.ReleaseImage();

	garage.LoadTGA("textures/garage.tga");
	garage.BuildGLTexture();
	garage.ReleaseImage();

	t1.LoadTGA("textures/t1.tga");
	t1.BuildGLTexture();
	t1.ReleaseImage();

	t2.LoadTGA("textures/t2.tga");
	t2.BuildGLTexture();
	t2.ReleaseImage();

	t3.LoadTGA("textures/t3.tga");
	t3.BuildGLTexture();
	t3.ReleaseImage();

	t4.LoadTGA("textures/t4.tga");
	t4.BuildGLTexture();
	t4.ReleaseImage();

	t5.LoadTGA("textures/t5.tga");
	t5.BuildGLTexture();
	t5.ReleaseImage();

	t6.LoadTGA("textures/t6.tga");
	t6.BuildGLTexture();
	t6.ReleaseImage();

	t7.LoadTGA("textures/t7.tga");
	t7.BuildGLTexture();
	t7.ReleaseImage();

	t8.LoadTGA("textures/t8.tga");
	t8.BuildGLTexture();
	t8.ReleaseImage();

	t9.LoadTGA("textures/t9.tga");
	t9.BuildGLTexture();
	t9.ReleaseImage();

	t10.LoadTGA("textures/t10.tga");
	t10.BuildGLTexture();
	t10.ReleaseImage();

	t11.LoadTGA("textures/t11.tga");
	t11.BuildGLTexture();
	t11.ReleaseImage();

	t12.LoadTGA("textures/t12.tga");
	t12.BuildGLTexture();
	t12.ReleaseImage();

	t13.LoadTGA("textures/t13.tga");
	t13.BuildGLTexture();
	t13.ReleaseImage();

	t14.LoadTGA("textures/t14.tga");
	t14.BuildGLTexture();
	t14.ReleaseImage();

	t15.LoadTGA("textures/t15.tga");
	t15.BuildGLTexture();
	t15.ReleaseImage();

	t16.LoadTGA("textures/t16.tga");
	t16.BuildGLTexture();
	t16.ReleaseImage();

	t17.LoadTGA("textures/t17.tga");
	t17.BuildGLTexture();
	t17.ReleaseImage();

	t18.LoadTGA("textures/t18.tga");
	t18.BuildGLTexture();
	t18.ReleaseImage();

	t19.LoadTGA("textures/t19.tga");
	t19.BuildGLTexture();
	t19.ReleaseImage();

	t20.LoadTGA("textures/t20.tga");
	t20.BuildGLTexture();
	t20.ReleaseImage();

	t21.LoadTGA("textures/t21.tga");
	t21.BuildGLTexture();
	t21.ReleaseImage();

	pisoRojo.LoadTGA("textures/piso_entrada.tga");
	pisoRojo.BuildGLTexture();
	pisoRojo.ReleaseImage();

	estufa.LoadTGA("textures/estufa.tga");
	estufa.BuildGLTexture();
	estufa.ReleaseImage();

	estufaCal.LoadTGA("textures/estufaCal.tga");
	estufaCal.BuildGLTexture();
	estufaCal.ReleaseImage();

	refri.LoadTGA("textures/metalPulido.tga");
	refri.BuildGLTexture();
	refri.ReleaseImage();

	piso.LoadTGA("textures/piso.tga");
	piso.BuildGLTexture();
	piso.ReleaseImage();

	mosaicoVintage.LoadTGA("textures/mosaico_vintage.tga");
	mosaicoVintage.BuildGLTexture();
	mosaicoVintage.ReleaseImage();

	chimenea.LoadTGA("textures/chimenea.tga");
	chimenea.BuildGLTexture();
	chimenea.ReleaseImage();

	chimeneaExt.LoadTGA("textures/chimeneaExt.tga");
	chimeneaExt.BuildGLTexture();
	chimeneaExt.ReleaseImage();

	vitrina.LoadTGA("textures/vitrina.tga");
	vitrina.BuildGLTexture();
	vitrina.ReleaseImage();

	muebleBuro.LoadTGA("textures/muebleSala.tga");
	muebleBuro.BuildGLTexture();
	muebleBuro.ReleaseImage();

	textAlberca.LoadTGA("textures/piscina.tga");
	textAlberca.BuildGLTexture();
	textAlberca.ReleaseImage();

	pisoPatioT.LoadTGA("textures/ladrillo.tga");
	pisoPatioT.BuildGLTexture();
	pisoPatioT.ReleaseImage();

	agua.LoadTGA("textures/water.tga");
	agua.BuildGLTexture();
	agua.ReleaseImage();

	librero.LoadTGA("textures/librero.tga");
	librero.BuildGLTexture();
	librero.ReleaseImage();


	librero2.LoadTGA("textures/librero_2.tga");
	librero2.BuildGLTexture();
	librero2.ReleaseImage();

	porcelana.LoadTGA("textures/porcelana.tga");
	porcelana.BuildGLTexture();
	porcelana.ReleaseImage();

	plata.LoadTGA("textures/plata.tga");
	plata.BuildGLTexture();
	plata.ReleaseImage();

	sillon.LoadTGA("textures/sillon.tga");
	sillon.BuildGLTexture();
	sillon.ReleaseImage();

	cielo_frontal.LoadTGA("textures/cielo_2.tga");
	cielo_frontal.BuildGLTexture();
	cielo_frontal.ReleaseImage();	

	cielo_lateral.LoadTGA("textures/cielo_3.tga");
	cielo_lateral.BuildGLTexture();
	cielo_lateral.ReleaseImage();

	cielo_superior.LoadTGA("textures/cielo.tga");
	cielo_superior.BuildGLTexture();
	cielo_superior.ReleaseImage();

	pasto.LoadTGA("textures/pasto.tga");
	pasto.BuildGLTexture();
	pasto.ReleaseImage();

	madera.LoadTGA("textures/madera.tga");
	madera.BuildGLTexture();
	madera.ReleaseImage();

	muebleBanio.LoadTGA("textures/muebleBanio.tga");
	muebleBanio.BuildGLTexture();
	muebleBanio.ReleaseImage();

	muebleBanio2.LoadTGA("textures/muebleBanio2.tga");
	muebleBanio2.BuildGLTexture();
	muebleBanio2.ReleaseImage();

	negroMate.LoadTGA("textures/negroMate.tga");
	negroMate.BuildGLTexture();
	negroMate.ReleaseImage();

	almohada.LoadTGA("textures/almohada.tga");
	almohada.BuildGLTexture();
	almohada.ReleaseImage();

	cabecera.LoadTGA("textures/cabecera.tga");
	cabecera.BuildGLTexture();
	cabecera.ReleaseImage();

	cobija.LoadTGA("textures/cobija.tga");
	cobija.BuildGLTexture();
	cobija.ReleaseImage();

	tree_tex.LoadTGA("textures/arbol.tga");
	tree_tex.BuildGLTexture();
	tree_tex.ReleaseImage();

	window_texture.LoadTGA("textures/window.tga");
	window_texture.BuildGLTexture();
	window_texture.ReleaseImage();

	door.LoadTGA("textures/door.tga");
	door.BuildGLTexture();
	door.ReleaseImage();

	ball.LoadTGA("textures/ball.tga");
	ball.BuildGLTexture();
	ball.ReleaseImage();

	cuadriculado.LoadTGA("textures/cuadriculado2.tga");
	cuadriculado.BuildGLTexture();
	cuadriculado.ReleaseImage();

	exterior.LoadTGA("textures/pared2.tga");
	exterior.BuildGLTexture();
	exterior.ReleaseImage();

	maderapiso.LoadTGA("textures/maderapiso.tga");
	maderapiso.BuildGLTexture();
	maderapiso.ReleaseImage();

	maderablanca.LoadTGA("textures/madera_blanca.tga");
	maderablanca.BuildGLTexture();
	maderablanca.ReleaseImage();


	pisomadera.LoadTGA("textures/pisomadera.tga");
	pisomadera.BuildGLTexture();
	pisomadera.ReleaseImage();

	t1_0.LoadTGA("textures/t2_0.tga");
	t1_0.BuildGLTexture();
	t1_0.ReleaseImage();

	t1_1.LoadTGA("textures/t2_1.tga");
	t1_1.BuildGLTexture();
	t1_1.ReleaseImage();

	t1_2.LoadTGA("textures/t2_2.tga");
	t1_2.BuildGLTexture();
	t1_2.ReleaseImage();

	t1_3.LoadTGA("textures/t2_3.tga");
	t1_3.BuildGLTexture();
	t1_3.ReleaseImage();

	marcotv.LoadTGA("textures/marco_tv.tga");
	marcotv.BuildGLTexture();
	marcotv.ReleaseImage();

	textMaderaC.LoadTGA("textures/MaderaC.tga");
	textMaderaC.BuildGLTexture();
	textMaderaC.ReleaseImage();

	textMaderaN.LoadTGA("textures/maderaN.tga");
	textMaderaN.BuildGLTexture();
	textMaderaN.ReleaseImage();


	closet.LoadTGA("textures/closet.tga");
	closet.BuildGLTexture();
	closet.ReleaseImage();


	////Cargar Modelos 3Ds

	cocinam._3dsLoad("modelos/cocina.3DS");
	refrigerador._3dsLoad("modelos/refri.3DS");
	escritorio._3dsLoad("modelos/escritorio.3DS");
	sillam._3dsLoad("modelos/s_estudio.3DS");
	reloj._3dsLoad("modelos/estudio_r.3DS");
	sofam._3dsLoad("modelos/sofa.3DS");
	reloj2._3dsLoad("modelos/reloj.3ds");
	retrete._3dsLoad("modelos/Pan.3ds");
	camam._3dsLoad("modelos/cama2.3ds");
	avion._3dsLoad("modelos/cama2.3ds");
	kit._3dsLoad("modelos/kitt.3ds");
	llanta._3dsLoad("modelos/k_rueda.3ds");



	objCamera.Position_Camera(9.5, 2.5f, 40, 9.5, 2.5f, 37, 0, 1, 0);
	/*
	//	Reproducir música si se está en Windows
	#if _WIN32
	PlaySound(TEXT("cancion.wav"), NULL, SND_LOOP | SND_ASYNC);
	#endif
	*/
}



void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glLoadIdentity();
	
		
	glPushMatrix();
		glRotatef(g_lookupdown,1.0f,0,0);

		gluLookAt(	objCamera.mPos.x,  objCamera.mPos.y,  objCamera.mPos.z,	
					objCamera.mView.x, objCamera.mView.y, objCamera.mView.z,	
					objCamera.mUp.x,   objCamera.mUp.y,   objCamera.mUp.z);
	

		glPushMatrix();		
			
			glPushMatrix(); //Creamos cielo
				glDisable(GL_LIGHTING);
				glTranslatef(0,74,0);
				glScalef(600, 150, 600);
				figures.skybox(0, 0, cielo_superior.GLindex, pasto.GLindex);
				glEnable(GL_LIGHTING);
			glDisable(GL_COLOR_MATERIAL);
			glPopMatrix();
			//glEnable(GL_LIGHTING);
			

			glPushMatrix();
				glDisable(GL_COLOR_MATERIAL);
			//	cocina();
			//	comedor();
			//	sala();
			//	estudio();
			//	recividor();
			//	cuarto1();
				glPushMatrix();			
				edificio();
				//casasuperior();
				alberca();
			//	animacion_television();
				glEnable(GL_COLOR_MATERIAL);
			glPopMatrix();

			
			
			
			
		glPopMatrix(); 

	glPopMatrix();

	glutSwapBuffers();
}

void animacion()
{
	//	Movimiento del agua
	mov_agua.t_ini -= 0.001;
	mov_agua.t_fin -= 0.001;

	if (mov_agua.t_ini < -1.0)
	{
		mov_agua.t_ini = 0.0;
	}
	if(mov_agua.t_fin < 0.0)
	{
		mov_agua.t_fin = 1.0;
	}

	glutPostRedisplay();

}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.04, 600);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {

		case 'w':   //Movimientos de camara
		case 'W':
			objCamera.Move_Camera( CAMERASPEED+0.2 );
			break;

		case 's':
		case 'S':
			objCamera.Move_Camera(-(CAMERASPEED+0.2));
			break;

		case 'a':
		case 'A':
			objCamera.Strafe_Camera(-(CAMERASPEED+0.4));
			break;

		case 'd':
		case 'D':
			objCamera.Strafe_Camera( CAMERASPEED+0.4 );
			break;

		case 'q':
		case 'Q':
			objCamera.UpDown_Camera(CAMERASPEED+0.2);
			break;

		case 'z':
		case 'Z':
			objCamera.UpDown_Camera(-(CAMERASPEED+0.2));
			break;

		//Tecla para colocar la camara al frente de la casa
		case 'f':
		case 'F':
			objCamera.Position_Camera(9.5, 2.5f, 40, 9.5, 2.5f, 38, 0, 1, 0);
			break;

		//Tecla para colocar la camara al interior de un cuarto de la casa
		case 'c':
		case 'C':
			objCamera.Position_Camera(16.27, 9.5f, -9.68, 14, 9.5f, -7, 0, 1, 0);
			break;

		//Tecla para colocar la camara a un lado de la alberca
		case 'p':
		case 'P':
			//objCamera.Position_Camera(22.13, 6.69f, -38.55, -48.94, 2.5f, -69.66, 0, 1, 0);
			objCamera.Position_Camera(22.13, 6.69f, -38.55, 20, 4.0f, -40, 0, 1, 0);
			break;

		//Tecla para colocar la camara en una vista isometrica de la casa
		case 'i':
		case 'I':
			objCamera.Position_Camera(-23.94, 58.5f, 16.99, -5, 2.5f, -12.39, 0, 1, 0);
			break;
		
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }

  glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
	case GLUT_KEY_PAGE_UP:
		objCamera.UpDown_Camera(CAMERASPEED);
		break;

	case GLUT_KEY_PAGE_DOWN:
		objCamera.UpDown_Camera(-CAMERASPEED);
		break;

    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		g_lookupdown -= 1.0f;
		break;

    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		g_lookupdown += 1.0f;
		break;

	case GLUT_KEY_LEFT:
		objCamera.Rotate_View(-CAMERASPEED);
		break;

	case GLUT_KEY_RIGHT:
		objCamera.Rotate_View( CAMERASPEED);
		break;

    default:
		break;
  }
  glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{

  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (2000, 2000);	// Tamano de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Casa"); // Nombre de la Ventana
  //glutFullScreen     ( );         // Full Screen
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );


  glutMainLoop        ( );          // 

  return 0;
}


void mueble_buro(void)
{
	glPushMatrix();
	glTranslatef(0,0.3,0);
	glPushMatrix();//PATA1
	glTranslatef(0.9,-1.1,0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();

	glPushMatrix();//PATA2
	glTranslatef(-0.9,-1.1,0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();

	glPushMatrix();//PATA3
	glTranslatef(-0.9,-1.1,-0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();

	glPushMatrix();//PATA4
	glTranslatef(0.9,-1.1,-0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();

	glPushMatrix();//PATA5
	glTranslatef(0.0,-1.1,0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();

	glPushMatrix();//PATA6
	glTranslatef(0.0,-1.1,-0.15);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_cilindro(0.05,0.4,5,madera.GLindex);
	glPopMatrix();


	glScalef(2,1.5,0.5);
	glColor3f(0.2745,0.1882,0.1333);
	figures.mueble(madera.GLindex,muebleBuro.GLindex);
	glPopMatrix();
	glColor3f(1,1,1);

}

void mueble_armario(void)
{
	glPushMatrix();
	glTranslatef(0,1.0,0);
	glPushMatrix();
	glTranslatef(0,2.25,0);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_prisma_trapecio(0.5,2,0.5,madera.GLindex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,-2.125,0);
	glColor3f(0.2745,0.1882,0.1333);
	figures.u_prisma_trapecio(0.5,2,0.5,madera.GLindex);
	glPopMatrix();
	glScalef(2,4.0,0.5);
	glColor3f(0.2745,0.1882,0.1333);
	figures.mueble(madera.GLindex,vitrina.GLindex);
	glPopMatrix();
	glColor3f(1,1,1);
}

void edificio(void)

{glScalef(5, 5, 5);
	glPushMatrix();
	glEnable(GL_COLOR_MATERIAL);
	
	
	
	glTranslatef(0, 0, 0);
	glPushMatrix();//edificio t

		glPushMatrix();//1
		figures.muro(3.1, 2.5, 0.02, maderablanca.GLindex);
			
			glTranslatef(3.1, 0, 0);
			figures.muro(0.6, 2.5, 0.02, maderablanca.GLindex); //puertas de cristal

				glTranslatef(0.6, 0, 0);
				figures.muro(5.05, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

		glPopMatrix();//1

		glPushMatrix();//2
			glTranslatef(8.75, 0, 0);
			glRotatef(-90, 0, 1, 0);
			figures.muro(0.5, 2.5, 0.02, maderablanca.GLindex);//entrada pasillo baños

				glTranslatef(1.0, 0, 0);
				figures.muro(0.5, 2.5, 0.02, maderablanca.GLindex);//entrada pasillo baños

					glTranslatef(0.5, 0, 0);
					glRotatef(-90, 0, 1, 0);
					figures.muro(2.4, 2.5, 0.02, maderablanca.GLindex); //pasillo externo

					glTranslatef(2.4, 0, 0);
					figures.muro(1, 2.5, 0.02, maderablanca.GLindex); //puertas de cristal

					glTranslatef(1, 0, 0);
					figures.muro(5.35, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

		glPopMatrix();//2

		glPushMatrix();//3

		glTranslatef(8.75, 0, 0.5);
		figures.muro(0.7, 2.5, 0.02, maderablanca.GLindex);//pasillo baños

		glRotatef(-180, 0, 1, 0);
		glTranslatef(-0.7, 0, -0.5);
		figures.muro(0.7, 2.5, 0.02, maderablanca.GLindex);//pasillo baños

		glPopMatrix();//3

	glPopMatrix();//edificio t


	glPushMatrix();//edificio s
		
		glTranslatef(9.45, 0, 0);
		
			glPushMatrix();//1
			figures.muro(3.2, 2.5, 0.02, maderablanca.GLindex);

				glTranslatef(3.2, 0, 0);
				glRotatef(-90, 0, 1, 0);
				figures.muro(1.5, 2.5, 0.02, maderablanca.GLindex); //puertas de cristal

					glTranslatef(1.5, 0, 0);
					glRotatef(-90, 0, 1, 0);
					figures.muro(1.1, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

						glTranslatef(1.1, 0, 0);
						glRotatef(90, 0, 1, 0);
						figures.muro(1.2, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

						glTranslatef(1.2, 0, 0);
						glRotatef(-90, 0, 1, 0);
						figures.muro(0.7, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

						glTranslatef(0.7, 0, 0);
						glRotatef(90, 0, 1, 0);
						figures.muro(4.6, 2.5, 0.02, madera.GLindex); //resto del pasillo externo

						glTranslatef(4.6, 0, 0);
						glRotatef(-90, 0, 1, 0);
						figures.muro(1.4, 2.5, 0.02, madera.GLindex); //resto del pasillo externo
			glPopMatrix();//1

			glPushMatrix();//2

				glTranslatef(0, 0, 7.3);
				glRotatef(90, 0, 1, 0);
				figures.muro(6.3, 2.5, 0.02, maderablanca.GLindex);//entrada pasillo baños

				glTranslatef(6.8, 0, 0);
				figures.muro(0.5, 2.5, 0.02, maderablanca.GLindex);//entrada pasillo baños

			glPopMatrix();//2


	glPopMatrix();//edificio s

	glEnable(GL_COLOR_MATERIAL);

	glPopMatrix();

}



void puertas(const GLuint &t1) {

	//Puerta Frontal
	glPushMatrix();
	//glTranslatef(9.94*5, 0, 14.82*5);
	glScalef(11, 15, 1);
	glBindTexture(GL_TEXTURE_2D, t1);
	glBegin(GL_QUADS);
	glTexCoord2f(1, 0); glVertex3f(0.5, -0.5, 0.5);
	glTexCoord2f(0, 0); glVertex3f(-0.5, -0.5, 0.5);
	glTexCoord2f(0, 1); glVertex3f(-0.5, 0.5, 0.5);
	glTexCoord2f(1, 1); glVertex3f(0.5, 0.5, 0.5);
	glEnd();

	glPopMatrix();

}


void cocina(void) {

	/*glPushMatrix();
	glTranslatef(30, 0, 15);
	glRotatef(0, 0, 1, 0);
	glScalef(2, 2, 2);
	*/

	
	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glTranslatef(15.6, 0, 41.8);
		glScalef(0.005, 0.005, 0.005);
		glRotatef(-25, 0, 1, 0);
		cocinam.GLrender(NULL, _SHADED, 1);
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();

	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glTranslatef(22, 0, 41.8);
		glScalef(.3, .4, .3);
		glRotatef(180, 0, 1, 0);
		refrigerador.GLrender(NULL, _SHADED, 1);
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();


	


	//Mesa central cocina
	glPushMatrix();
		glTranslatef(19, 1.55, 48);
		glScalef(4.5, 2, 1.5);
		glPushMatrix();
		glPushMatrix();
		glTranslatef(0, 0.80, 0);
		glScalef(2, 0.1, 2);
		figures.u_prisma(cubierta.GLindex);
		glPopMatrix();
		glScalef(1.5, 1.5, 2);
		figures.u_prisma(0);
		glPopMatrix();
	glPopMatrix();


	//Alacena
	glPushMatrix();
		glTranslatef(19, 5, 57.3);
		glRotatef(180, 0, 1, 0);
		glScalef(6, 10, 1);
		figures.mueble(0, alacena3.GLindex);
	glPopMatrix();

	

	//glPopMatrix();
}

void comedor(void) {
	glPushMatrix();
		glTranslatef(50, 0, 18);
		glRotatef(90, 0, 1, 0);
		glScalef(2, 2, 2);

		glPushMatrix();
			glTranslatef(-5, 1, -15.5);
			silla();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-5, 1, -11.5);
			glRotatef(180, 0, 1, 0);
			silla();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-6, 1, -12.7);
			glRotatef(90, 0, 1, 0);
			silla();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-4, 1, -12.7);
			glRotatef(-90, 0, 1, 0);
			silla();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-6, 1, -14.5);
			glRotatef(90, 0, 1, 0);
			silla();
		glPopMatrix();

	glPushMatrix();
	glTranslatef(-4, 1, -14.5);
	glRotatef(-90, 0, 1, 0);
	silla();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-5, -1, -13.5);
	glRotatef(45, 0, 1, 0);
	mesa_comedor();
	glPopMatrix();

	glPopMatrix();

}

void silla(void)
{

	//Respaldo y asiento
	glPushMatrix();
	glTranslatef(0, 0.50, -0.22);
	glPushMatrix();
	glTranslatef(0, 0.375, 0.031);
	glRotatef(-90, 1, 0, 0);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_medio_cilindro(0.25, 0.0625, 30, madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	glScalef(0.5, 0.75, 0.0625);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	glColor3f(1, 1, 0);
	//Pata
	glPushMatrix();
	glTranslatef(0.1875, -0.5, 0.1875);
	glScalef(0.125, 0.75, 0.125);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	//Pata
	glPushMatrix();
	glTranslatef(0.1875, -0.5, -0.1875);
	glScalef(0.125, 0.75, 0.125);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	//Pata
	glPushMatrix();
	glTranslatef(-0.1875, -0.5, -0.1875);
	glScalef(0.125, 0.75, 0.125);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	//Pata
	glPushMatrix();
	glTranslatef(-0.1875, -0.5, 0.1875);
	glScalef(0.125, 0.75, 0.125);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	glScalef(0.5, 0.25, 0.5);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
}

void mesa_comedor(void)
{
	glPushMatrix();
	glTranslatef(0, 1.05, 0);
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0, 1.5, 0);
	glRotatef(45, 0, 1, 0);
	glColor3f(0.3529, 0.1764, 0.0862);
	glScalef(3.5, 0.05, 1.5);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_cilindro(0.125, 1.5, 15, madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
	glScalef(1.5, 0.05, 1.5);
	glColor3f(0.3529, 0.1764, 0.0862);
	figures.u_prisma(madera.GLindex);
	glColor3f(1, 1, 1);
	glPopMatrix();
}

void sala(void) {
	
	animacion_television2();

	glPushMatrix();
		glTranslatef(35, -0.55, -33.5);
		glRotatef(180, 0, 1, 0);
		glScalef(2, 2, 2);
	

		glPushMatrix();
			glTranslatef(-3, 1, -30.5);
			glRotatef(270, 0, 1, 0);
			glColor3f(0, 0, 1);
			sillon_grande();
			glColor3f(1, 1, 1);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-3, 1, -34);
			glRotatef(300, 0, 1, 0);
			glColor3f(1, 0, 0);
			sillon_pequeno();
			glColor3f(1, 1, 1);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-3.4, 1, -26.5);
			glRotatef(260, 0, 1, 0);
			glColor3f(1, 0, 0);
			sillon_pequeno();
			glColor3f(1, 1, 1);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-3.4, 0.5, -28);
			glColor3f(1, 0, 1);
			mesa_central();
			glColor3f(1, 1, 1);
		glPopMatrix();

	glPopMatrix();

}

void sillon_grande(void)
{
	glPushMatrix(); //PUSH DE PRISMA PRINCIPAL
	glPushMatrix(); //DESCANSO BRAZP DER
	glTranslatef(1.20, 0.5, 0.5);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_medio_cilindro(0.30, 0.75, 30, sillon.GLindex);
	glPopMatrix();

	glPushMatrix(); //DESCANSO BRAZO IZQ
	glTranslatef(-1.20, 0.5, 0.5);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_medio_cilindro(0.30, 0.75, 30, sillon.GLindex);
	glPopMatrix();

	glPushMatrix(); //RESPALDO
	glTranslatef(0, 1.10, -0.375);

	glPushMatrix();
	glTranslatef(1.2, -0.3, 0);

	glPushMatrix();
	glTranslatef(-0.3, 0.3, 0.125);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_cuarto_cilindro(0.6, 0.25, 30, sillon.GLindex);
	glPopMatrix();

	glScalef(0.6, 0.6, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.2, -0.3, 0);

	glPushMatrix();
	glTranslatef(0.3, 0.3, -0.125);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	figures.u_cuarto_cilindro(0.6, 0.25, 30, sillon.GLindex);
	glPopMatrix();

	glScalef(0.6, 0.6, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glScalef(1.8, 1.20, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glPushMatrix(); //pata del sillon 1 derecha
	glTranslatef(1.3, -0.75, 0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 2 
	glTranslatef(1.3, -0.75, -0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 3 izquierda
	glTranslatef(-1.3, -0.75, 0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 4
	glTranslatef(-1.3, -0.75, -0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glScalef(3, 1, 1);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();
	glColor3f(1, 1, 1);
}

void sillon_pequeno(void)
{
	glPushMatrix(); //PUSH DE PRISMA PRINCIPAL


	glPushMatrix();
	glTranslatef(0.6, 0.65, 0.12);
	glPushMatrix(); //DESCANSO BRAZP DER
	glTranslatef(0, 0.15, 0.375);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_medio_cilindro(0.15, 0.75, 30, sillon.GLindex);
	glPopMatrix();
	glColor3f(1, 1, 1);
	glScalef(0.3, 0.3, 0.75);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6, 0.65, 0.12);
	glPushMatrix(); //DESCANSO BRAZP DER
	glTranslatef(0, 0.15, 0.375);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_medio_cilindro(0.15, 0.75, 30, sillon.GLindex);
	glPopMatrix();
	glColor3f(1, 1, 1);
	glScalef(0.3, 0.3, 0.75);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();


	glPushMatrix(); //RESPALDO
	glTranslatef(0, 0.90, -0.375);

	glPushMatrix();
	glTranslatef(0.6, -0.1, 0);

	glPushMatrix();
	glTranslatef(-0.15, 0.3, 0.125);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_cuarto_cilindro(0.3, 0.25, 30, sillon.GLindex);
	glPopMatrix();

	glScalef(0.3, 0.6, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6, -0.1, 0);

	glPushMatrix();
	glTranslatef(0.15, 0.3, -0.125);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	figures.u_cuarto_cilindro(0.3, 0.25, 30, sillon.GLindex);
	glPopMatrix();

	glScalef(0.3, 0.6, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glScalef(0.9, 1.0, 0.25);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();

	glPushMatrix(); //pata del sillon 1 derecha
	glTranslatef(0.65, -0.75, 0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 2 
	glTranslatef(0.65, -0.75, -0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 3 izquierda
	glTranslatef(-0.65, -0.75, 0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glPushMatrix(); //pata del sillon 4
	glTranslatef(-0.65, -0.75, -0.40);
	glColor3f(0, 0, 0);
	figures.u_cilindro(0.1, 0.25, 5, madera.GLindex);
	glPopMatrix();
	glScalef(1.5, 1, 1);
	glColor3f(1, 1, 1);
	figures.u_prisma(sillon.GLindex);
	glPopMatrix();
	glColor3f(1, 1, 1);
}

void mesa_central(void)
{

	glPushMatrix();
	glTranslatef(0, 0.2, 0);
	for (int i = 0; i < 4; i++)
	{
		glPushMatrix();
		glTranslatef(0.4*cos(PI / 2 * i), -0.5, 0.4*sin(PI / 2 * i));
		figures.u_cilindro(0.05, 1, 5, madera.GLindex);
		glPopMatrix();
	}

	glTranslatef(0, 0.5, 0);
	figures.u_cilindro(0.5, 0.1, 30, madera.GLindex);

	glPopMatrix();
}



void lavabo(void)
{
	glPushMatrix(); //mueble
	glTranslatef(19.6, 1.6 + 1, -16.6);

	glPushMatrix(); //lavabo
	glTranslatef(-0.6, 1.85, 0);

	glPushMatrix(); //base llave
	glTranslatef(-0.4, -0.6, -0.4);

	glPushMatrix();
	glTranslatef(0.2, 1.0, 0.2);
	glRotatef(90, 0, 0, 1);
	glRotatef(-45, 1, 0, 0);
	figures.u_cilindro(0.05, 0.4, 5, plata.GLindex);
	glPopMatrix();

	figures.u_cilindro(0.05, 1.2, 10, plata.GLindex);
	glPopMatrix(); //base llave

	glRotatef(90, 1, 0, 0);
	figures.u_media_esfera(0.5, 20, 20, plata.GLindex);
	glPopMatrix(); //lavabo

	glScalef(2.5, 1.5 + 1.2, 1);
	figures.mueble(negroMate.GLindex, muebleBanio.GLindex);
	glPopMatrix();
}

void alberca(void) {

	glPushMatrix(); //alberca
	
	glTranslatef(100, -4.7, 100);
	glScalef(3.2, 3.2, 3.2);

		glPushMatrix(); //agua
		glTranslatef(0, 4.2, 0);
		glScalef(9.9, 0.1, 19.9);
		mov_agua.l_prisma_agua(agua.GLindex);
		glPopMatrix(); //agua

		glPushMatrix(); //agua
		glTranslatef(0, 3.5, 0);
		glScalef(9.9, 0.1, 19.9);
		mov_agua.l_prisma_agua(agua.GLindex);
		glPopMatrix(); //agua


					   //rota
		glPushMatrix();
		//	glTranslatef(0, 4, 0);
		glScalef(10, 10, 20);
		figures.l_prisma_alberca(textAlberca.GLindex);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 3.8, 0);
		figures.l_prisma_escalera_alberca(metal_cromo.GLindex, chimeneaExt.GLindex);
		glPopMatrix();
	glPopMatrix(); //alberca


}

void cama(void) {


	glPushMatrix();

	glTranslatef(-16.75, 6, 5.65);

	glTranslatef(22, 1.6, -11.6);
	//glScalef(1.4, 0.6, 3);

	glPushMatrix(); //pata 1 derecha
	glTranslatef(1.3 + 0.4, -0.75 + 0.1, 0.40 + 0.8);

	//glColor3f(0,0,0);
	figures.u_cilindro(0.1, 1, 5, madera.GLindex);
	glPopMatrix();

	glPushMatrix(); //pata 2 
	glTranslatef(1.3 + 0.4, -0.75 + 0.1, -0.40 - 0.8);
	//glColor3f(0,0,0);
	figures.u_cilindro(0.1, 1, 5, madera.GLindex);
	glPopMatrix();

	glPushMatrix(); //pata 3 izquierda
	glTranslatef(-1.3 - 0.6, -0.75 + 0.1, 0.40 + 0.8);
	//glColor3f(0,0,0);
	figures.u_cilindro(0.1, 1, 5, madera.GLindex);
	glPopMatrix();

	glPushMatrix(); //pata 4
	glTranslatef(-1.3 - 0.6, -0.75 + 0.1, -0.40 - 0.8);
	//glColor3f(0,0,0);
	figures.u_cilindro(0.1, 1, 5, madera.GLindex);
	glPopMatrix();

	glPushMatrix(); //almohadas
	glTranslatef(1.2, 1, -0.8);
	glScalef(1, 0.4, 1);
	figures.u_prisma(almohada.GLindex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.2, 1, 0.8);
	glScalef(1, 0.4, 1);
	figures.u_prisma(almohada.GLindex);
	glPopMatrix(); //almohadas


	glPushMatrix();
	glTranslatef(0, 0.5, 0);

	glPushMatrix(); //cobija
					//glTranslatef(0,0.3,0);
	glTranslatef(-1, 0.21, 0);
	glScalef(1.4, 0.1, 3);
	glScalef(3 - 1.2, 1 + 1.2, 1 + 0.02);
	figures.u_prisma(cobija.GLindex);
	glPopMatrix(); //cobija

	glPushMatrix(); //Cabecera
	glTranslatef(2.4, 0, 0);
	glScalef(0.6, 3.2, 3.6);
	figures.u_prisma(cabecera.GLindex);
	glPopMatrix(); //Cabecera

	glScalef(1.4, 0.6, 3);
	glScalef(3, 1, 1);
	glColor3f(1, 1, 1);
	figures.u_prisma(0);
	glPopMatrix();
	//glColor3f(1,1,1);

	glPopMatrix();

}
void tele(void)
{
	glPushMatrix();
	glTranslatef(0, 2.5, -0.35);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t21.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t20.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t19.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t18.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t17.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t16.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t15.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t14.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t13.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t12.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t11.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t10.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t9.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t8.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t7.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t6.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t5.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t4.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t3.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t2.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1.GLindex);
	glPopMatrix();

	glPushMatrix();
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.5);
	glTranslatef(0, 2.5, -0.2);
	glRotatef(90, 0, 1, 0);
	figures.prisma_tv(2.5, .08, 2.5, negroMate.GLindex, marcotv.GLindex);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();

}

void animacion_television(void)
{
	glPushMatrix();
	glTranslatef(27.7, 22, 19.5);
	glRotatef(90, 0, 1, 0);
	glScalef(2, 1.7, 1);

		tele();

		glTranslatef(0, 2.5, -0.35);
		glColor3f(1, 1, 1);
		glRotatef(-90, 1, 0, 0);

		if (estadoTelevision >= 1 && estadoTelevision <= 10) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 11 && estadoTelevision <= 20) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t2.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 21 && estadoTelevision <= 30) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t3.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 31 && estadoTelevision <= 40) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t4.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 41 && estadoTelevision <= 50) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t5.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 51 && estadoTelevision <= 60) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t6.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 61 && estadoTelevision <= 70) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t7.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 71 && estadoTelevision <= 80) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t8.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 81 && estadoTelevision <= 90) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t9.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 91 && estadoTelevision <= 100) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t10.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 101 && estadoTelevision <= 110) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t11.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 111 && estadoTelevision <= 120) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t12.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 121 && estadoTelevision <= 130) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t13.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 131 && estadoTelevision <= 140) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t14.GLindex);
			glutPostRedisplay();
		}

		else if (estadoTelevision >= 141 && estadoTelevision <= 150) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t15.GLindex);
			glutPostRedisplay();
		}

		else if (estadoTelevision >= 151 && estadoTelevision <= 160) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t16.GLindex);
			glutPostRedisplay();
		}

		else if (estadoTelevision >= 161 && estadoTelevision <= 170) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t17.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 171 && estadoTelevision <= 180) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t18.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 181 && estadoTelevision <= 190) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t19.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 191 && estadoTelevision <= 200) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t20.GLindex);
			glutPostRedisplay();
		}
		else if (estadoTelevision >= 201 && estadoTelevision <= 210) {
			figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t21.GLindex);
			glutPostRedisplay();
		}
		glPopMatrix();

		++estadoTelevision;
		if (estadoTelevision == 210) estadoTelevision = 1;

	glPopMatrix();
}


void tele2(void)
{
	glPushMatrix();
	glTranslatef(0, 2.5, -0.35);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_3.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_2.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_1.GLindex);
	figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_0.GLindex);
	glPopMatrix();

	glPushMatrix();
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.5);
	glTranslatef(0, 2.5, -0.2);
	glRotatef(90, 0, 1, 0);
	figures.prisma_tv(2.5, .08, 2.5, negroMate.GLindex, marcotv.GLindex);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();

}

void animacion_television2(void)
{
	glPushMatrix();
		glTranslatef(51, 2.5, 27);
		glRotatef(270, 0, 1, 0);
		glScalef(3, 2.7, 2);

	tele2();

	glTranslatef(0, 2.5, -0.35);
	glColor3f(1, 1, 1);
	glRotatef(-90, 1, 0, 0);

	if (estadoTelevision2 >= 1 && estadoTelevision2 <= 10) {
		figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_0.GLindex);
		glutPostRedisplay();
	}
	else if (estadoTelevision2 >= 11 && estadoTelevision2 <= 20) {
		figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_1.GLindex);
		glutPostRedisplay();
	}
	else if (estadoTelevision2 >= 21 && estadoTelevision2 <= 30) {
		figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_2.GLindex);
		glutPostRedisplay();
	}
	else if (estadoTelevision2 >= 31 && estadoTelevision2 <= 40) {
		figures.u_prisma_tele(0.25, 2.5, 2.5, negroMate.GLindex, t1_3.GLindex);
		glutPostRedisplay();
	}

	glPopMatrix();

	++estadoTelevision2;
	if (estadoTelevision2 == 40) estadoTelevision2 = 1;

	glPopMatrix();
}

void estudio(void) {
	
	//librero1 
	glPushMatrix();
		glTranslatef(8.2, -2.0, 77);
		glScalef(4.5, 2.7, 2);
		glColor3f(0, 1, 0);
		glPushMatrix();
			glTranslatef(0, 3.0, 0);
			glScalef(3, 4.5, 0.75);
			glRotatef(180, 0, 1, 0);
			glColor3f(0.2745, 0.1882, 0.1333);
			figures.mueble(madera.GLindex, librero.GLindex);
		glPopMatrix();
		glColor3f(1, 1, 1);
	glPopMatrix();

	//librero2
	glPushMatrix();
		glTranslatef(20, -1.9, 77);
		glScalef(2, 2.5, 2);
		//glColor3f(0, 1, 0);
		glPushMatrix();
		glTranslatef(0, 3.0, 0);
		glScalef(3, 4.5, 0.75);
		glRotatef(180, 0, 1, 0);
		//glColor3f(0.2745, 0.1882, 0.1333);
		figures.mueble(maderablanca.GLindex, librero2.GLindex);
		glPopMatrix();
		glColor3f(1, 1, 1);
	glPopMatrix();

	//escritorio
	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glTranslatef(26, 0, 84);
		glScalef(0.005, 0.005, 0.005);
		escritorio.GLrender(NULL, _SHADED, 1);
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();

	//silla
	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glTranslatef(27, 3.4, 73);
		glScalef(1.2, 2.8, 1);
		glRotatef(110, 0, 1, 0);
		sillam.GLrender(NULL, _SHADED, 1);
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();

	//Reloj
	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glTranslatef(1.81, 0, 71);
		glScalef(.0048, .0055, .0048);
		glRotatef(90, 0, 1, 0);
		reloj.GLrender(NULL, _SHADED, 1);
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();

}

void recividor(void) {

	

		glPushMatrix();
			glDisable(GL_COLOR_MATERIAL);
			glTranslatef(45, 0, 41.1);
			glScalef(.005, .0065, .0048);
			glRotatef(-90, 0, 1, 0);
			sofam.GLrender(NULL, _SHADED, 1);
			glEnable(GL_COLOR_MATERIAL);
		glPopMatrix();

		glPushMatrix();
			glDisable(GL_COLOR_MATERIAL);
			glTranslatef(45, 0, 49.99);
			glScalef(.005, .0065, .0048);
			glRotatef(90, 0, 1, 0);
			sofam.GLrender(NULL, _SHADED, 1);
			glEnable(GL_COLOR_MATERIAL);
		glPopMatrix();


	glPushMatrix();////Mesa central
		glTranslatef(41, 0, 56);
		glScalef(1.5, 1, 1.5);
		
		glPushMatrix(); //mesa pequeña1
			glTranslatef(2.75, 1.1, -6.125);
			glScalef(1.5, 0.1, 0.25);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaN.GLindex, textMaderaN.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //mesa pequeña2
			glTranslatef(2.75, 1.1, -7.375);
			glScalef(1.5, 0.1, 0.25);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaN.GLindex, textMaderaN.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //mesa pequeña3
			glTranslatef(2.125, 1.1, -6.75);
			glScalef(0.25, 0.1, 1.5);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaN.GLindex, textMaderaN.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //mesa pequeña4
			glTranslatef(3.375, 1.1, -6.75);
			glScalef(0.25, 0.1, 1.5);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaN.GLindex, textMaderaN.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //mesa pequeña5
			glTranslatef(2.75, 0.5, -6.75);
			glScalef(1.25, 1.0, 1.25);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaN.GLindex, textMaderaN.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //mesa pequeña6
			glTranslatef(2.75, 1.1, -6.75);
			glScalef(1.0, 0.1, 1.0);
			glDisable(GL_LIGHTING);
			figures.prisma2(textMaderaC.GLindex, textMaderaC.GLindex);
			glEnable(GL_LIGHTING);
		glPopMatrix();

	glPopMatrix();


}

void cuarto1(void) {

	

	glPushMatrix();
		
		glPushMatrix();
			glDisable(GL_COLOR_MATERIAL);
			glTranslatef(3.5, 16.8, 16.6);
			glScalef(.005, .0065, .005);
			retrete.GLrender(NULL, _SHADED, 1);
			glEnable(GL_COLOR_MATERIAL);
		glPopMatrix();


		glPushMatrix();
			glTranslatef(-9.8, 15.25, -1);
			glRotatef(-90, 0, 1, 0);
			lavabo();
		glPopMatrix();

		glPushMatrix();
			glDisable(GL_COLOR_MATERIAL);
			glTranslatef(49,18.055, 25.6);
			glScalef(.0014, .0014, .0011);
			glRotatef(-90, 0, 1, 0);
			camam.GLrender(NULL, _SHADED, 1);
			glEnable(GL_COLOR_MATERIAL);
		glPopMatrix();


		//closet
		glPushMatrix();
			glTranslatef(45, 14.72, 38.62);
			glScalef(1.9, 2.4, 1.8);
			//glColor3f(0, 1, 0);
			glPushMatrix();
			glTranslatef(0, 3.0, 0);
			glScalef(3, 4.5, 0.75);
			glRotatef(180, 0, 1, 0);
			//glColor3f(0.2745, 0.1882, 0.1333);
			figures.mueble(maderablanca.GLindex, closet.GLindex);
			glPopMatrix();
			glColor3f(1, 1, 1);
		glPopMatrix();

	glPopMatrix();

	//

}

void carro(void) {

	

	glPushMatrix();
		glDisable(GL_COLOR_MATERIAL);
		glRotatef(90, 0, 1, 0);
		glScalef(0.3, 0.3, 0.3);
		glTranslatef(movKitX, 4, movKitZ);
		glRotatef(rotKit, 0, 1, 0);
		kit.GLrender(NULL, _SHADED, 1.0); //Dibujamos la carroceria
										  //llanta.GLrender(NULL,_SHADED,1.0);
										  //Colocar aquí las llantas
		glPushMatrix(); //llanta frontal der
		glTranslatef(-6, -1, 7.5);
		glRotatef(-rotTires, 1, 0, 0);
		llanta.GLrender(NULL, _SHADED, 1.0);
		glPopMatrix();

		glPushMatrix(); //llanta frontal izq
		glTranslatef(6, -1, 7.5);
		glRotatef(180, 0, 1, 0);
		glRotatef(rotTires, 1, 0, 0);
		llanta.GLrender(NULL, _SHADED, 1.0);
		glPopMatrix();

		glPushMatrix(); //llanta trasera der
		glTranslatef(-6, -1, -9.5);
		glRotatef(-rotTires, 1, 0, 0);
		llanta.GLrender(NULL, _SHADED, 1.0);
		glPopMatrix();

		glPushMatrix(); //llanta trasera izq
		glTranslatef(6, -1, -9.5);
		glRotatef(180, 0, 1, 0);
		glRotatef(rotTires, 1, 0, 0);
		llanta.GLrender(NULL, _SHADED, 1.0);
		glPopMatrix();
		glEnable(GL_COLOR_MATERIAL);
	glPopMatrix();

}

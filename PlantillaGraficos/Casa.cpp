// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include <math.h>

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

void dibujarCasa() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.76f, 0.3f);

	glVertex3f(-0.3f, 0.3f, 0.0f);
	glVertex3f(0.7f, 0.3f, 0.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);
	glVertex3f(-0.3f, -0.7f, 0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);

	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(-0.5f, 0.2f, 0.0f);
	glVertex3f(0.9f, 0.2f, 0.0f);
	glVertex3f(0.2f, 0.6f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.9f, 0.9f);

	glVertex3f(0.0f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.7f, 0.0f);
	glVertex3f(0.0f, -0.7f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.6f, 1.0f, 1.0f);

	glVertex3f(0.3f, -0.2f, 0.0f);
	glVertex3f(0.6f, -0.2f, 0.0f);
	glVertex3f(0.6f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.0f, 0.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.05 * cos(i * 3.14159 / 180.0) + 0.32,
			0.05 * sin(i * 3.14159 / 180.0) - 0.45,
			0.0f
		);
	}

	glEnd();
}

void dibujarArbol() {
	glBegin(GL_POLYGON);

	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(-0.6f, -0.8f, 0.0f);
	glVertex3f(-0.8f, -0.8f, 0.0f);
	glVertex3f(-0.8f, -0.3f, 0.0f);
	glVertex3f(-0.6f, -0.3f, 0.0f);

	glEnd();
}

void dibujarCesped() {
	glBegin(GL_POLYGON);

	glColor3f(0.1f, 0.6f, 0.0f);

	glVertex3f(-1.0f, -0.6f, 0.0f);
	glVertex3f(1.0f, -0.6f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glEnd();
}

void dibujarSol() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.2f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.2 * cos(i * 3.14159 / 180.0) - 0.7,
			0.2 * sin(i * 3.14159 / 180.0) + 0.7,
			0.0f
		);
	}

	glEnd();
}

void dibujarPoligono() {
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.9f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
	glVertex3f(0.6f, -0.4f, 0.0f);
	glVertex3f(0.4f, -0.6f, 0.0f);
}

void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.15f, 0.0f);

	glEnd();
}

void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);

	glColor3f(0.1f, 0.3f, 0.75);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.4f, 0.2f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glVertex3f(0.1f, 0.3f, 0.0f);
	glVertex3f(0.7f, -0.4f, 0.0f);
}

void dibujarTriangulos() {
	// Establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	// Establecemos color
	glColor3f(0.0f, 0.0f, 0.0f);

	// Enviar vértices
	glVertex3f(0.3f, 0.7f, 0.0f);
	glVertex3f(-0.3f, -0.7f, 0.0f);
	glVertex3f(0.3f, -0.7f, 0.0f);

	glVertex3f(0.3f, 0.7f, 0.0f);
	glVertex3f(-0.3f, -0.7f, 0.0f);
	glVertex3f(-0.3f, 0.7f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.9f, -0.7f, 0.0f);
	glVertex3f(-0.4f, -0.7f, 0.0f);
	glVertex3f(-0.65f, 0.7f, 0.0f);

	glVertex3f(0.9f, -0.7f, 0.0f);
	glVertex3f(0.4f, -0.7f, 0.0f);
	glVertex3f(0.65f, 0.7f, 0.0f);
}

void dibujar() {
	dibujarSol();
	dibujarCesped();
	dibujarCasa();
	dibujarArbol();
}

int main() {
	// Declarar una ventana
	GLFWwindow* window;

	// Si no se pudo iniciar GLFW
	// Terminamos ejecución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	// Si se pudo iniciar GLFW
	// Inicializamos la ventana
	//window = glfwCreateWindow(1500, 600, "Ventana", NULL, NULL);
	window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);

	// Si no se pudo crear la ventana
	// Terminamos la ejecución
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	// Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	// Una vez establecido el contexto se activan las funciones "modernas" (gpu)
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK) {
		glewGetErrorString(errores);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	// Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		// Establecer región de dibujo
		//glViewport(0, 0, 1500, 600);
		glViewport(0, 0, 600, 600);
		// Establecemos el color de borrado
		glClearColor(0.6, 1, 1, 1);
		// Borrar!
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Actualizar valores y dibujar
		dibujar();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	// Después del ciclo de dibujo
	// Eliminamos ventana y procesos de glfwr
	glfwDestroyWindow(window);
	glfwTerminate();
}
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

	// Techo
	glBegin(GL_TRIANGLES);

	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(-0.5f, 0.2f, 0.0f);
	glVertex3f(0.9f, 0.2f, 0.0f);
	glVertex3f(0.2f, 0.6f, 0.0f);

	glEnd();

	// Puerta
	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.9f, 0.9f);

	glVertex3f(0.0f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.7f, 0.0f);
	glVertex3f(0.0f, -0.7f, 0.0f);

	glEnd();

	// Ventana
	glBegin(GL_POLYGON);

	glColor3f(0.6f, 1.0f, 1.0f);

	glVertex3f(0.3f, -0.2f, 0.0f);
	glVertex3f(0.6f, -0.2f, 0.0f);
	glVertex3f(0.6f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);

	glEnd();
	
	glBegin(GL_LINE_STRIP);

	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(0.3f, -0.2f, 0.0f);
	glVertex3f(0.6f, -0.2f, 0.0f);
	glVertex3f(0.6f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);
	glVertex3f(0.3f, -0.2f, 0.0f);
	
	glEnd();

	glBegin(GL_LINES);

	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(0.3f, -0.05f, 0.0f);
	glVertex3f(0.6f, -0.05f, 0.0f);

	glVertex3f(0.45f, 0.1f, 0.0f);
	glVertex3f(0.45f, -0.2f, 0.0f);

	glEnd();

	// Perilla
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

void dibujarNubes() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.20 * cos(i * 3.14159 / 180.0) - 0.40,
			0.08 * sin(i * 3.14159 / 180.0) + 0.55,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.13 * cos(i * 3.14159 / 180.0) - 0.28,
			0.05 * sin(i * 3.14159 / 180.0) + 0.63,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.17 * cos(i * 3.14159 / 180.0) + 0.40,
			0.08 * sin(i * 3.14159 / 180.0) + 0.80,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.17 * cos(i * 3.14159 / 180.0) + 0.50,
			0.08 * sin(i * 3.14159 / 180.0) + 0.85,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.17 * cos(i * 3.14159 / 180.0) + 0.70,
			0.08 * sin(i * 3.14159 / 180.0) + 0.55,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.13 * cos(i * 3.14159 / 180.0) + 0.78,
			0.07 * sin(i * 3.14159 / 180.0) + 0.63,
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

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.6f, 0.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.30 * cos(i * 3.14159 / 180.0) - 0.70,
			0.25 * sin(i * 3.14159 / 180.0) - 0.20,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.6f, 0.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.25 * cos(i * 3.14159 / 180.0) - 0.60,
			0.25 * sin(i * 3.14159 / 180.0) - 0.0,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.6f, 0.0f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.22 * cos(i * 3.14159 / 180.0) - 0.70,
			0.22 * sin(i * 3.14159 / 180.0) + 0.2,
			0.0f
		);
	}
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

	glLineWidth(5);

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.4f, -0.8f, 0.0f);
	glVertex3f(-0.3f, -0.9f, 0.0f);
	glVertex3f(-0.2f, -0.8f, 0.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.4f, -0.75f, 0.0f);
	glVertex3f(0.3f, -0.9f, 0.0f);
	glVertex3f(0.2f, -0.8f, 0.0f);
	glEnd();
}

void dibujarSol() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.2f);
	for (double i = 0; i < 360.0; i += 5) {
		glVertex3f(
			0.2 * cos(i * 3.14159 / 180.0) - 0.75,
			0.2 * sin(i * 3.14159 / 180.0) + 0.75,
			0.0f
		);
	}
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.2f);

	glVertex3f(-0.98f, 0.98f, 0.0f);
	glVertex3f(-0.90f, 0.90f, 0.0f);

	glVertex3f(-0.70f, 0.95f, 0.0f);
	glVertex3f(-0.68f, 0.99f, 0.0f);

	glVertex3f(-0.50f, 0.96f, 0.0f);
	glVertex3f(-0.58f, 0.88f, 0.0f);

	glVertex3f(-0.50f, 0.81f, 0.0f);
	glVertex3f(-0.38f, 0.84f, 0.0f);

	glVertex3f(-0.48f, 0.76f, 0.0f);
	glVertex3f(-0.40f, 0.73f, 0.0f);

	glVertex3f(-0.55f, 0.67f, 0.0f);
	glVertex3f(-0.45f, 0.63f, 0.0f);

	glVertex3f(-0.57f, 0.60f, 0.0f);
	glVertex3f(-0.49f, 0.55f, 0.0f);

	glVertex3f(-0.65f, 0.55f, 0.0f);
	glVertex3f(-0.55f, 0.43f, 0.0f);

	glVertex3f(-0.75f, 0.52f, 0.0f);
	glVertex3f(-0.77f, 0.42f, 0.0f);

	glVertex3f(-0.90f, 0.58f, 0.0f);
	glVertex3f(-0.97f, 0.48f, 0.0f);
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
	dibujarCesped();
	dibujarNubes();
	dibujarCasa();
	dibujarArbol();
	dibujarSol();
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
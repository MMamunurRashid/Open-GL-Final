#include <GL/glut.h>

void drawPolygon(GLfloat* vertices, int numVertices, GLfloat red, GLfloat green, GLfloat blue) {
    glColor3f(red, green, blue);
    glBegin(GL_POLYGON);
    for (int i = 0; i < numVertices * 2; i += 2) {
        glVertex2f(vertices[i], vertices[i + 1]);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Flag ratio: 5:9
    GLfloat flagWidth = 900.0f;
    GLfloat flagHeight = 500.0f;

    // Calculate vertex positions for the flag of Nepal
    GLfloat vertices[] = {
        -flagWidth / 2, flagHeight / 2,      // Top-left
        flagWidth / 2, flagHeight / 2,       // Top-right
        flagWidth / 2, -flagHeight / 2,      // Bottom-right
        -flagWidth / 2, -flagHeight / 2      // Bottom-left
    };

    // Draw the red background of the flag
    drawPolygon(vertices, 4, 0.8627f, 0.0784f, 0.2353f); // Crimson red color

    // Draw the blue borders on the flag
    GLfloat blueVertices[] = {
        -flagWidth / 2, flagHeight / 4,      // Top-left
        flagWidth / 2, flagHeight / 4,       // Top-right
        flagWidth / 2, -flagHeight / 4,      // Bottom-right
        -flagWidth / 2, -flagHeight / 4      // Bottom-left
    };
    drawPolygon(blueVertices, 4, 0.1490f, 0.2588f, 0.6706f); // Dark blue color

    // Draw the white crescent moon on the flag
    GLfloat moonVertices[] = {
        -flagWidth / 2.5f, flagHeight / 8,       // Top-left
        flagWidth / 2.5f, -flagHeight / 8,      // Bottom-right
        -flagWidth / 2.5f, -flagHeight / 8      // Bottom-left
    };
    drawPolygon(moonVertices, 3, 1.0f, 1.0f, 1.0f); // White color

    // Draw the white twelve-pointed star on the flag
    GLfloat starVertices[] = {
        -flagWidth / 2.5f + 30, flagHeight / 8 - 40,
        -flagWidth / 2.5f + 55, flagHeight / 8 - 75,
        -flagWidth / 2.5f + 80, flagHeight / 8 - 40,
        -flagWidth / 2.5f + 65, flagHeight / 8 - 65,
        -flagWidth / 2.5f + 90, flagHeight / 8 - 100,
        -flagWidth / 2.5f + 55, flagHeight / 8 - 85,
        -flagWidth / 2.5f + 20, flagHeight / 8 - 100,
        -flagWidth / 2.5f + 40, flagHeight / 8 - 65,
        -flagWidth / 2.5f + 15, flagHeight / 8 - 40,
        -flagWidth / 2.5f + 40, flagHeight / 8 - 75,
    };
    drawPolygon(starVertices, 10, 1.0f, 1.0f, 1.0f); // White color

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-width / 2, width / 2, -height / 2, height / 2);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500); // You can adjust the window size to your preference
    glutCreateWindow("Flag of Nepal");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

#include <GL/glut.h>

void drawRectangle(GLfloat x, GLfloat y, GLfloat width, GLfloat height, GLfloat red, GLfloat green, GLfloat blue) {
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Define flag dimensions
    GLfloat flagWidth = 900.0f;
    GLfloat flagHeight = 500.0f;

    // Draw the blue background (Union Jack's blue)
    drawRectangle(-flagWidth / 2, -flagHeight / 2, flagWidth, flagHeight, 0.0f, 0.1490f, 0.4471f);

    // Draw the white diagonal cross for Scotland
    GLfloat crossWidth = flagWidth / 5;
    GLfloat crossHeight = flagHeight / 5;
    for (int i = 0; i < 5; i++) {
        drawRectangle(-flagWidth / 2 + i * crossWidth, -flagHeight / 2 + i * crossHeight, crossWidth, crossHeight, 1.0f, 1.0f, 1.0f);
    }

    // Draw the diagonal red cross for England
    drawRectangle(-flagWidth / 4, -flagHeight / 2, flagWidth / 2, flagHeight, 0.8627f, 0.0784f, 0.2353f);
    drawRectangle(-flagWidth / 2, -flagHeight / 4, flagWidth, flagHeight / 2, 0.8627f, 0.0784f, 0.2353f);

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
    glutCreateWindow("Flag of the United Kingdom");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

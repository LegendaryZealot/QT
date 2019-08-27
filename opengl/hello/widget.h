#ifndef WIDGET_H
#define WIDGET_H

#include <QtOpenGL/qgl.h>
#include <gl.h>
#include <glu.h>

namespace Ui {
class Widget;
}

class Widget : public QGLWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

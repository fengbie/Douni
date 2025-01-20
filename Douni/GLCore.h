#pragma once

#include <Qwidget>
#include <qopenglwidget>

class GLCore : public QOpenGLWidget
{
public:
	GLCore(QWidget* parent = nullptr);
	~GLCore();

protected:
	void initializeGL() override;
	void resizeGL(int w, int h) override;
	void paintGL() override;
};


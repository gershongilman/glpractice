#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_window.h"

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QSlider;
class QPushButton;
QT_END_NAMESPACE

class GLWidget;
class MainWindow;

class Window : public QWidget
{
	Q_OBJECT

public:
	Window(MainWindow *mw);

protected:
	void keyPressEvent(QKeyEvent *event) override;

private slots:
	void dockUndock();

private:
	QSlider *createSlider();

	GLWidget *glWidget;
	QSlider *xSlider;
	QSlider *ySlider;
	QSlider *zSlider;
	QSlider *cSlider;
	QPushButton *dockBtn;
	MainWindow *mainWindow;
};

#endif
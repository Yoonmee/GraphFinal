#ifndef GRAPHFINAL_H
#define GRAPHFINAL_H

#include <QtWidgets/QWidget>
#include "ui_graphfinal.h"

class GraphFinal : public QWidget
{
	Q_OBJECT

public:
	GraphFinal(QWidget *parent = 0);
	~GraphFinal();

private:
	Ui::GraphFinalClass ui;
};

#endif // GRAPHFINAL_H

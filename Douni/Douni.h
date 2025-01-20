#pragma once

#include <QtWidgets/QWidget>
#include "ui_Douni.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DouniClass; };
QT_END_NAMESPACE

class Douni : public QWidget
{
    Q_OBJECT

public:
    Douni(QWidget *parent = nullptr);
    ~Douni();

private:
    Ui::DouniClass *ui;
};

#include "Douni.h"

Douni::Douni(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DouniClass())
{
    ui->setupUi(this);
}

Douni::~Douni()
{
    delete ui;
}

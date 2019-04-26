#ifndef CONSULTAR_H
#define CONSULTAR_H

#include <QDialog>

namespace Ui {
class Consultar;
}

class Consultar : public QDialog
{
    Q_OBJECT

public:
    explicit Consultar(QWidget *parent = 0);
    ~Consultar();

private:
    Ui::Consultar *ui;
};

#endif // CONSULTAR_H

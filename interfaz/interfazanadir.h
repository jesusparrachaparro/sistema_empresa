#ifndef INTERFAZANADIR_H
#define INTERFAZANADIR_H

#include <QDialog>
#include "anadirdirectivo.h"
#include "anadiroperario.h"
#include "anadiringeniero.h"
#include "anadirbecario.h"

namespace Ui {
class InterfazAnadir;
}

class InterfazAnadir : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazAnadir(QWidget *parent = 0);
    ~InterfazAnadir();

private slots:

    void on_ok_clicked();

    void on_guardar_clicked();

private:
    Ui::InterfazAnadir *ui;
};

#endif // INTERFAZANADIR_H

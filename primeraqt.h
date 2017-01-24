#ifndef PRIMERAQT_H
#define PRIMERAQT_H

#include <QMainWindow>

namespace Ui {
class PrimeraQt;
}

class PrimeraQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit PrimeraQt(QWidget *parent = 0);
    ~PrimeraQt();

private slots:
    void on_btn_user_clicked();

    void on_btn_developer_clicked();

private:
    Ui::PrimeraQt *ui;
};

#endif // PRIMERAQT_H

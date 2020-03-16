#ifndef S1_DESIGNATION_H
#define S1_DESIGNATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class S1_Designation; }
QT_END_NAMESPACE

class S1_Designation : public QMainWindow
{
    Q_OBJECT

public:
    S1_Designation(QWidget *parent = nullptr);
    ~S1_Designation();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_ok_clicked();

    void on_comboBox_designation_activated(const QString &arg1);

private:
    Ui::S1_Designation *ui;
};
#endif // S1_DESIGNATION_H

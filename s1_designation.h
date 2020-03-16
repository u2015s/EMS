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

    void on_pushButton_3_clicked();

    void on_admin_login_eventbutton_clicked();

    void on_admin_login_userbutton_clicked();

    void on_admin_login_staffbutton_clicked();

    void on_admin_login_inventorybutton_clicked();

    void on_admin_login_venuebutton_clicked();

    void on_admin_login_clientbutton_clicked();

    void on_staff_login_eventbutton_clicked();

    void on_staff_login_staffbutton_clicked();

    void on_Inventory_login_eventbutton_clicked();

    void on_Inventory_login_inventorybutton_clicked();

    void on_R_login_eventbutton_clicked();

    void on_R_login_clientbutton_clicked();

    void on_EM_login_eventbutton_clicked();

    void on_EM_login_staffbutton_clicked();

    void on_EM_login_inventorybutton_clicked();

    void on_EM_login_venuebutton_clicked();

    void on_user_login_table_viewbutton_clicked();

    void on_pushButtonuser_login_table_addbutton_17_clicked();

    void on_user_login_table_deletebutton_clicked();

    void on_user_login_table_printbutton_clicked();

    void on_user_login_table_updatebutton_clicked();

    void on_user_login_table_addbutton_clicked();

    void on_EM_login_table_printbutton_clicked();

private:
    Ui::S1_Designation *ui;
};
#endif // S1_DESIGNATION_H

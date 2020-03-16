#include "s1_designation.h"
#include "ui_s1_designation.h"
#include <QMessageBox>

S1_Designation::S1_Designation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::S1_Designation)
{
    ui->setupUi(this);

}

S1_Designation::~S1_Designation()
{
    delete ui;
}


void S1_Designation::on_pushButton_7_clicked()
{
    QString username = ui->comboBox_input_username->currentText();
        QString password = ui->comboBox_input_password->currentText();

        if(username ==  "admin" && password == "admin") {
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(2);
        }
        else if(username ==  "receptionist" && password == "receptionist") {
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(5);
        }
        else if(username ==  "staff" && password == "staff") {
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(3);
        }
        else if(username ==  "eventmanager" && password == "eventmanager") {
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(6);
        }
        else if(username ==  "inventory" && password == "inventory") {
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(4);
        }
        else {
            QMessageBox::warning(this,"Login Status", "Either Username or password is not valid");
        }
}

void S1_Designation::on_pushButton_clicked(){}

void S1_Designation::on_pushButton_ok_clicked()
{

    if(ui->comboBox_designation->currentText()=="Admin"){
        ui->comboBox_input_username->addItem("admin");
        ui->comboBox_input_username->addItem("admin1");
        ui->comboBox_input_username->addItem("admin2");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(ui->comboBox_designation->currentText()=="Receptionist"){
        ui->comboBox_input_username->addItem("receptionist");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(ui->comboBox_designation->currentText()=="Staff Manager"){
        ui->comboBox_input_username->addItem("staff");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(ui->comboBox_designation->currentText()=="Event Manager"){
        ui->comboBox_input_username->addItem("eventmanager");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(ui->comboBox_designation->currentText()=="Inventory Manager"){
        ui->comboBox_input_username->addItem("inventory");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox::warning(this,"User Type Selection", "choose any one designation");
    }

}

void S1_Designation::on_comboBox_designation_activated(const QString &arg1){}
void S1_Designation::on_pushButton_3_clicked(){}

//below are pushbuttons under afterlogin screens(i.e.,chosing tables by different users)
void S1_Designation::on_admin_login_eventbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_userbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_staffbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_inventorybutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_venuebutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_clientbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_staff_login_eventbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_staff_login_staffbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_Inventory_login_eventbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_Inventory_login_inventorybutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_R_login_eventbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_R_login_clientbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_EM_login_eventbutton_clicked() {ui->stackedWidget->setCurrentIndex(19);}//only EM is having no option page,so directly linked to view page
void S1_Designation::on_EM_login_staffbutton_clicked() {ui->stackedWidget->setCurrentIndex(19);}
void S1_Designation::on_EM_login_inventorybutton_clicked() {ui->stackedWidget->setCurrentIndex(19);}
void S1_Designation::on_EM_login_venuebutton_clicked() {ui->stackedWidget->setCurrentIndex(19);}

//below are pushbuttons under option screen
void S1_Designation::on_user_login_table_viewbutton_clicked() {ui->stackedWidget->setCurrentIndex(18);}
void S1_Designation::on_user_login_table_deletebutton_clicked() {ui->stackedWidget->setCurrentIndex(16);}
void S1_Designation::on_user_login_table_printbutton_clicked() {ui->stackedWidget->setCurrentIndex(15);}
void S1_Designation::on_user_login_table_updatebutton_clicked() {ui->stackedWidget->setCurrentIndex(17);}
void S1_Designation::on_user_login_table_addbutton_clicked() {ui->stackedWidget->setCurrentIndex(9);}//9-13 ESICV

void S1_Designation::on_pushButtonuser_login_table_addbutton_17_clicked() {}

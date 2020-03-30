#include "s1_designation.h"
#include "ui_s1_designation.h"
#include <QMessageBox>


S1_Designation::S1_Designation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::S1_Designation)
{
    ui->setupUi(this);

    if( (ui->stackedWidget->currentIndex()==0) || (ui->stackedWidget->currentIndex()==1) )
       { ui->signout_button->setVisible(false); ui->changepass_button->setVisible(false);}
    else ui->signout_button->setVisible(true);//actually this condition never reaches because when compiler read this at that time, page index is 0.
}

S1_Designation::~S1_Designation()
{
    delete ui;
}

char ch1;
void S1_Designation::on_pushButton_7_clicked()//login button
{
    QString username = ui->comboBox_input_username->currentText();
        QString password = ui->comboBox_input_password->currentText();

        if(username ==  "admin" && password == "admin") {ch1='A';
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(2);
        }
        else if(username ==  "receptionist" && password == "receptionist") {ch1='R';
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(5);
        }
        else if(username ==  "staff" && password == "staff") {ch1='S';
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(3);
        }
        else if(username ==  "eventmanager" && password == "eventmanager") {ch1='E';
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(6);
        }
        else if(username ==  "inventory" && password == "inventory") {ch1='I';
            QMessageBox::information(this,"Login Status", "you are logged in successfully");
         ui->stackedWidget->setCurrentIndex(4);
        }
        else {
            QMessageBox::warning(this,"Login Status", "Either Username or password is not valid");
        }
ui->comboBox_input_username->clearEditText();
ui->comboBox_input_password->clearEditText();
ui->comboBox_input_username->clear();
ui->comboBox_input_password->clear();
if( (ui->stackedWidget->currentIndex()!=0) && (ui->stackedWidget->currentIndex()!=1) )
   { ui->signout_button->setVisible(true); ui->changepass_button->setVisible(true);}
}



void S1_Designation::on_pushButton_ok_clicked()//designation submit button
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
//--------------------------------------------------------------------------------------------------------------------------
//below are extra functions not for use but compiler made them


//--------------------------------------------------------------------------------------------------------------------------
//below are pushbuttons under afterlogin screens(i.e.,chosing tables by different users)
char ch;
void S1_Designation::on_admin_login_eventbutton_clicked() {ch='E'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_userbutton_clicked() {ch='U'; ui->stackedWidget->setCurrentIndex(8);}//options screen is diff. for user table
void S1_Designation::on_admin_login_staffbutton_clicked() {ch='S'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_inventorybutton_clicked() {ch='I'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_venuebutton_clicked() {ch='V'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_admin_login_clientbutton_clicked() {ch='C'; ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_staff_login_eventbutton_clicked() {ch='E'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_staff_login_staffbutton_clicked() {ch='S'; ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_Inventory_login_eventbutton_clicked() {ch='E'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_Inventory_login_inventorybutton_clicked() {ch='I'; ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_R_login_eventbutton_clicked() {ch='E'; ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_R_login_clientbutton_clicked() {ch='C'; ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_EM_login_eventbutton_clicked() {ch='E'; ui->stackedWidget->setCurrentIndex(25);}//only EM is having no option page,so directly linked to view page
void S1_Designation::on_EM_login_staffbutton_clicked() {ch='S'; ui->stackedWidget->setCurrentIndex(25);}
void S1_Designation::on_EM_login_inventorybutton_clicked() {ch='I'; ui->stackedWidget->setCurrentIndex(25);}
void S1_Designation::on_EM_login_venuebutton_clicked() {ch='V'; ui->stackedWidget->setCurrentIndex(25);}
//--------------------------------------------------------------------------------------------------------------------------
//below are pushbuttons under options screen for tables(except user table)
void S1_Designation::on_user_login_table_viewbutton_clicked() {ui->stackedWidget->setCurrentIndex(24);}
void S1_Designation::on_user_login_table_deletebutton_clicked() {ui->stackedWidget->setCurrentIndex(17);}
void S1_Designation::on_user_login_table_printbutton_clicked() {ui->stackedWidget->setCurrentIndex(16);}

void S1_Designation::on_user_login_table_updatebutton_clicked() {
     if(ch=='E') ui->stackedWidget->setCurrentIndex(18);
else if(ch=='I') ui->stackedWidget->setCurrentIndex(20);
else if(ch=='S') ui->stackedWidget->setCurrentIndex(19);
else if(ch=='V') ui->stackedWidget->setCurrentIndex(21);
else if(ch=='C') ui->stackedWidget->setCurrentIndex(22);
//else if(ch=='U') {ui->stackedWidget->setCurrentIndex(15);}
else
   QMessageBox::warning(this,"ERROR", "No table is choosed before in afterlogin(tables) screen, which cann't be happen");
}


void S1_Designation::on_user_login_table_addbutton_clicked() {
         if(ch=='E') ui->stackedWidget->setCurrentIndex(10);
    else if(ch=='I') ui->stackedWidget->setCurrentIndex(12);
    else if(ch=='S') ui->stackedWidget->setCurrentIndex(11);
    else if(ch=='V') ui->stackedWidget->setCurrentIndex(14);
    else if(ch=='C') ui->stackedWidget->setCurrentIndex(13);
    else if(ch=='U') {ui->stackedWidget->setCurrentIndex(15);}
    else
        QMessageBox::warning(this,"ERROR", "No table is choosed before in afterlogin(tables) screen, which cann't be happen");
}
//--------------------------------------------------------------------------------------------------------------------------
//below are pushbuttons under option screen for USER table
void S1_Designation::on_admin_login_table_viewbutton_clicked() {ui->stackedWidget->setCurrentIndex(24);}
void S1_Designation::on_admin_login_table_createuserbutton_clicked() {ui->stackedWidget->setCurrentIndex(15);}
void S1_Designation::on_admin_login_table_removeuserbutton_clicked() {ui->stackedWidget->setCurrentIndex(17);}
void S1_Designation::on_admin_login_table_changeUserPassbutton_clicked() {ui->stackedWidget->setCurrentIndex(23);}

//--------------------------------------------------------------------------------------------------------------------------
//print button on EM-view page
void S1_Designation::on_EM_login_table_printbutton_clicked() {ui->stackedWidget->setCurrentIndex(16);}
//--------------------------------------------------------------------------------------------------------------------------
//all page's back buttons below
void S1_Designation::on_loginpage_backbutton_clicked() {
            ui->comboBox_input_username->clearEditText();
            ui->comboBox_input_password->clearEditText();
            ui->comboBox_input_username->clear();
            ui->comboBox_input_password->clear();
            ui->stackedWidget->setCurrentIndex(0); }
void S1_Designation::on_user_login_table_backbutton_clicked() {
         if(ch1=='A') ui->stackedWidget->setCurrentIndex(2);
    else if(ch1=='R') ui->stackedWidget->setCurrentIndex(5);
    else if(ch1=='S') ui->stackedWidget->setCurrentIndex(3);
    else if(ch1=='E') ui->stackedWidget->setCurrentIndex(6);
    else if(ch1=='I') ui->stackedWidget->setCurrentIndex(4);
    else
        QMessageBox::warning(this,"ERROR", "No table is choosed before in afterlogin(tables) screen, which cann't be happen");
}
void S1_Designation::on_admin_login_table_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(2);}

void S1_Designation::on_event_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_staff_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_inventory_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_client_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_venue_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_user_addform_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(8);}

void S1_Designation::on_print_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_delete_backbutton_clicked() {
    if(ch=='U') ui->stackedWidget->setCurrentIndex(8);
    else ui->stackedWidget->setCurrentIndex(7); }

void S1_Designation::on_update_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}//this is for Event table
void S1_Designation::on_updateStaff_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_updateInventory_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_updateVenue_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}
void S1_Designation::on_updateClient_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(7);}

void S1_Designation::on_changeUserPass_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(8);}

void S1_Designation::on_view_backbutton_clicked() {
    if(ch=='U') ui->stackedWidget->setCurrentIndex(8);
    else ui->stackedWidget->setCurrentIndex(7); }
void S1_Designation::on_EM_viewpage_backbutton_clicked() {ui->stackedWidget->setCurrentIndex(6);}
//----------------------------------------------------------------------------------------------------------------------------
//common buttons
void S1_Designation::on_signout_button_clicked() { ui->stackedWidget->setCurrentIndex(0);
                                                   if( (ui->stackedWidget->currentIndex()==0) || (ui->stackedWidget->currentIndex()==1) )
                                                       { ui->signout_button->setVisible(false); ui->changepass_button->setVisible(false);}  }
void S1_Designation::on_changepass_button_clicked() { ui->stackedWidget->setCurrentIndex(9);}
void S1_Designation::on_changepass_okbutton_clicked() {ui->stackedWidget->setCurrentIndex(0);
                                                       if( (ui->stackedWidget->currentIndex()==0) || (ui->stackedWidget->currentIndex()==1) )
                                                           { ui->signout_button->setVisible(false); ui->changepass_button->setVisible(false);}  }
//----------------------------------------------------------------------------------------------------------------------------





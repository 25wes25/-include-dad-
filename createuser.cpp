#include "createuser.h"
#include "ui_createuser.h"
#include "users.h"

createUser::createUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createUser)
{
    ui->setupUi(this);
}

createUser::~createUser()
{
    delete ui;
}

bool createUser::isUser(QString name, QString password)
{
    bool user = false;
    if(accounts.isUser(name,password) != 0)
    {
        user = true;
    }
    return user;
}

void createUser::setList(UserList& object)
{
    //accounts = object;
    //object = accounts;
}

void createUser::on_pushButton_clicked()
{
    ui->adminCode->clear();
    ui->createNameEdit->clear();
    ui->createPassEdit->clear();
    this->close();

}


void createUser::on_createButton_clicked()
{
    singleUser createUser;
    QString desiredUsername = ui->createNameEdit->text();
    //set the above variables to the input line edits
    if(accounts.isNameTaken(desiredUsername) == false)
    {
        createUser.userName = ui->createNameEdit->text();
        createUser.password = ui->createPassEdit->text();
        //if statement to determine what this user type will be
        if(ui->adminGuestCombo->itemText(ui->adminGuestCombo->currentIndex()) == "Guest")
        {
            createUser.userStatus = GUEST;
            //adds the user as a Guest
            accounts.addUser(createUser.userName,createUser.password,createUser.userStatus);
            //set test to who added
            ui->ERRORADMINCODE->setText("Added "+createUser.userName+" as Guest");
        }
        else
        {
            if(ui->adminCode->text() == adminGUID)
            {
                createUser.userStatus = ADMIN;
                //adds the user to the vector as an admin
                accounts.addUser(createUser.userName,createUser.password,createUser.userStatus);
                //set test to who added
                ui->ERRORADMINCODE->setText("Added "+createUser.userName+" as Admin");
            }
            else
            {
                ui->ERRORADMINCODE->setText("INVALID ADMIN CODE");
            }
        }
    }
    else
    {
        ui->ERRORADMINCODE->setText("NAME ALREADY TAKEN!");
    }
}

void createUser::on_adminGuestCombo_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Guest")
    {
        ui->adminCode->setEnabled(false);
    }
    else
    {
        ui->adminCode->setEnabled(true);
    }
}

#ifndef ADDMEMBERWINDOW_H
#define ADDMEMBERWINDOW_H

#include <QDialog>

namespace Ui {
class AddMemberWindow;
}

class AddMemberWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddMemberWindow(QWidget *parent = 0);
    ~AddMemberWindow();

private:
    Ui::AddMemberWindow *ui;
};

#endif // ADDMEMBERWINDOW_H

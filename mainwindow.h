#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memberlist.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void listMembers();
    void tableClear();
    void addMember();
    void deleteMember();

private:
    Ui::MainWindow *ui;
    MemberList list;
};

#endif // MAINWINDOW_H

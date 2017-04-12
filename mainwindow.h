#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memberlist.h>
#include <itemlist.h>

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
    void listItems();
    void tableClear();
    void addMember();
    void deleteMember();
    void saveAll();

private:
    Ui::MainWindow *ui;
    MemberList member_list;
    LinkedList<ItemList> item_lists;
};

#endif // MAINWINDOW_H

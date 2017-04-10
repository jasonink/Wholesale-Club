#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

<<<<<<< HEAD
<<<<<<< HEAD
public slots:
    void listMembers();
    void tableClear();
    void addMember();
    void deleteMember();

=======
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
=======
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

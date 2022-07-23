#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void clickedGraph(QMouseEvent *event);
    void hoverGraph(QMouseEvent *event);
    void plot();
    void addPoint(double x, double y);
    void movePoint(QMouseEvent *event);
    void on_sinBtn_clicked();
    void on_sinSqr_clicked();
    void contextMenuRequest(QPoint pos);
    void on_triangleBtn_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> v_x, v_y;
};
#endif // MAINWINDOW_H

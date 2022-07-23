#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plot->addGraph();
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    //ui->plot->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->plot->setInteraction(QCP::iRangeZoom);
    connect(ui->plot, SIGNAL(mousePress(QMouseEvent*)), SLOT(clickedGraph(QMouseEvent*)));
    //connect(ui->plot, SIGNAL(mouseMove(QMouseEvent*)), SLOT(hoverGraph(QMouseEvent*)));
    ui->plot->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->plot, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuRequest(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuRequest(QPoint pos)
{
  QMenu *menu = new QMenu(this);
  menu->setAttribute(Qt::WA_DeleteOnClose);

  menu->addAction("Add random graph", this, SLOT(movePoint(QMouseEvent *event)));
  if (ui->plot->selectedGraphs().size() > 0)
  menu->addAction("Remove selected graph", this, SLOT(removeSelectedGraph()));
  if (ui->plot->graphCount() > 0)
  menu->addAction("Remove all graphs", this, SLOT(removeAllGraphs()));


  menu->popup(ui->plot->mapToGlobal(pos));
}

void MainWindow::movePoint(QMouseEvent *event)
{
    QPoint point = event->pos();
    addPoint(ui->plot->xAxis->pixelToCoord(point.x()),ui->plot->yAxis->pixelToCoord(point.y()));
    ui->listWidget->addItem(QString::number(ui->plot->xAxis->pixelToCoord(point.x())) + "-" + QString::number(ui->plot->yAxis->pixelToCoord(point.y())));
    plot();
}

void MainWindow::clickedGraph(QMouseEvent *event)
{
    if(event->button()== Qt::LeftButton)
    {
        if(v_x.contains(ui->plot->xAxis->pixelToCoord(event->pos().x())) && v_y.contains(ui->plot->yAxis->pixelToCoord(event->pos().y())))
        {
            v_x.remove(v_x.indexOf(ui->plot->xAxis->pixelToCoord(event->pos().x())));
            v_y.remove(v_y.indexOf(ui->plot->yAxis->pixelToCoord(event->pos().y())));
            connect(ui->plot, SIGNAL(mouseRelease(QMouseEvent*)), SLOT(movePoint(QMouseEvent*)));

        }
        else
        {
            QPoint point = event->pos();
            addPoint(ui->plot->xAxis->pixelToCoord(point.x()),ui->plot->yAxis->pixelToCoord(point.y()));
            ui->listWidget->addItem(QString::number(ui->plot->xAxis->pixelToCoord(point.x())) + "-" + QString::number(ui->plot->yAxis->pixelToCoord(point.y())));
        }

        if(v_x.contains(ui->plot->xAxis->pixelToCoord(event->pos().x())) && v_y.contains(ui->plot->yAxis->pixelToCoord(event->pos().y())) && event->button() == Qt::RightButton)
        {
            emit
        }

        plot();

    }
}

void MainWindow::hoverGraph(QMouseEvent *event)
{
    if(v_x.contains(ui->plot->xAxis->pixelToCoord(event->pos().x())) && v_y.contains(ui->plot->yAxis->pixelToCoord(event->pos().y())))
    {
        ui->plot->setCursor(Qt::PointingHandCursor);
    }
    else
    {
        ui->plot->setCursor(Qt::ArrowCursor);
    }

}

void MainWindow::plot()
{

    ui->plot->graph(0)->setData(v_x,v_y);
    qDebug()<< v_x << " "<<v_y;
    ui->plot->replot();
    ui->plot->update();
}

void MainWindow::addPoint(double x, double y)
{

   // if(!v_x.contains(x) && !v_y.contains(y))
  // {
        v_x.append(x);
        v_y.append(y);
    //}

   // if(!v_y.contains(y))
    //{

  //  }
}



void MainWindow::on_sinBtn_clicked()
{
    ui->plot->addGraph();
    ui->plot->graph(1)->setPen(QPen(Qt::blue));

    QVector<double> x(250), y0(250);
    for (int i=0; i<250; ++i)
    {
      x[i] = i;
      y0[i] = qSin(i/10.0);
    }

    connect(ui->plot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->plot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->yAxis2, SLOT(setRange(QCPRange)));

    ui->plot->graph(1)->setData(x, y0);
    ui->plot->graph(1)->rescaleAxes();

    ui->plot->replot();

}


void MainWindow::on_sinSqr_clicked()
{
    ui->plot->addGraph();
    ui->plot->graph(1)->setPen(QPen(Qt::blue));

    QVector<double> x(25), y0(25);
    bool flagSq = false;
    for (int i=0; i<25; ++i)
    {
      x[i] = i;
      if(i%2==0 && i != 0)
      {
            y0[i] = 1;
            x[i]= x[i-1];
      }

    }

    connect(ui->plot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->plot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->yAxis2, SLOT(setRange(QCPRange)));

    ui->plot->graph(1)->setData(x, y0);
    ui->plot->graph(1)->rescaleAxes();

    ui->plot->replot();
}


void MainWindow::on_triangleBtn_clicked()
{
    ui->plot->addGraph();
    ui->plot->graph(1)->setPen(QPen(Qt::blue));

    QVector<double> x(25), y0(25);
    bool flagSq = false;
    for (int i=0; i<25; ++i)
    {
      x[i] = i;
      if(i%2==0)
      {
          y0[i] = 1;
      }
      else
      {
          y0[i] = 0;
      }

    }

    connect(ui->plot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->plot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->yAxis2, SLOT(setRange(QCPRange)));

    ui->plot->graph(1)->setData(x, y0);
    ui->plot->graph(1)->rescaleAxes();

    ui->plot->replot();
}


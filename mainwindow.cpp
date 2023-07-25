#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QMessageBox.h>

#include <QtWidgets>

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Alpha_shape_2.h>
#include <CGAL/Alpha_shape_vertex_base_2.h>
#include <CGAL/Alpha_shape_face_base_2.h>
#include <CGAL/Delaunay_triangulation_2.h>

#include <CGAL/Qt/GraphicsItem.h>
#include <CGAL/Qt/TriangulationGraphicsItem.h>
#include <CGAL/Qt/GraphicsItem.h>
#include <CGAL/Qt/ConstrainedTriangulationGraphicsItem.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel  K;
typedef K::FT                                                FT;
typedef K::Point_2                                           Point;
typedef K::Segment_2                                         Segment;
typedef CGAL::Alpha_shape_vertex_base_2<K>                   Vb;
typedef CGAL::Alpha_shape_face_base_2<K>                     Fb;
typedef CGAL::Triangulation_data_structure_2<Vb,Fb>          Tds;
typedef CGAL::Delaunay_triangulation_2<K,Tds>                Triangulation_2;
typedef CGAL::Alpha_shape_2<Triangulation_2>                 Alpha_shape_2;
#include <CGAL/Qt/CircularArcGraphicsItem.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include <CGAL/Exact_circular_kernel_2.h>
typedef CGAL::Exact_circular_kernel_2             CK;
void MainWindow::on_pushButton_clicked()
{
    Alpha_shape_2 *as;
    Triangulation_2 *t2=nullptr;
    CGAL::Qt::CircularArcGraphicsItem<CK> p;
  
}


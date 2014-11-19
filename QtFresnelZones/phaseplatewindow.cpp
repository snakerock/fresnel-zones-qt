
#include "phaseplatewindow.h"
#include "ui_phaseplatewindow.h"

#include <QDebug>

PhasePlateWindow::PhasePlateWindow (Fresnel *fresnel) :
    QMainWindow (nullptr),
    ui (new Ui::PhasePlateWindow),
    _fresnel (fresnel)
{
    ui->setupUi (this);
    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));

    connect (ui->radioButton_simplePlate, SIGNAL(clicked()), this, SLOT(button_SimplePlate_Pressed()));
    connect (ui->radioButton_stagingPlate, SIGNAL(clicked()), this, SLOT(button_StagingPlate_Pressed()));
    connect (ui->radioButton_lensPlate, SIGNAL(clicked()), this, SLOT(button_LensPlate_Pressed()));
    connect (ui->radioButton_flatLensPlate, SIGNAL(clicked()), this, SLOT(button_FlatLensPlate_Pressed()));
    _fresnel->amplitudePlate         = false;
    _fresnel->phasePlate             = true;
    ui->widget_spiralGraph->fresnel  = _fresnel;
    ui->widget_schemeGraph->fresnel  = _fresnel;

    this->_update();
}


PhasePlateWindow::~PhasePlateWindow()
{
    delete ui;
}


void PhasePlateWindow::_update()
{
    ui->widget_schemeGraph->repaint();
    _updateSpiralGraph();

    Fresnel::PhasePlate currentPlate  = _fresnel->phasePlateType;
    double intensity                  = _fresnel->intensity ();
    _fresnel->phasePlateType          = Fresnel::PhasePlate::LENS;
    double maxIntensity               = _fresnel->intensity ();
    _fresnel->phasePlateType          = currentPlate;

    qDebug () << intensity << maxIntensity;

    ui->progressBar_intensity->setValue ((int) (intensity / maxIntensity * 100.0));
    ui->progressBar_intensity->update ();
}


void PhasePlateWindow::_updateSpiralGraph()
{
    _fresnel->spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    ui->widget_spiralGraph->repaint ();
}

void PhasePlateWindow::button_Back_Pressed()
{
    this->close();
}

void PhasePlateWindow::button_SimplePlate_Pressed()
{
    _fresnel->phasePlateType = Fresnel::PhasePlate::SIMPLE;
    _update ();
}

void PhasePlateWindow::button_StagingPlate_Pressed()
{
    _fresnel->phasePlateType = Fresnel::PhasePlate::STAGING;
    _update ();
}

void PhasePlateWindow::button_LensPlate_Pressed()
{
    _fresnel->phasePlateType = Fresnel::PhasePlate::LENS;
    _update ();
}

void PhasePlateWindow::button_FlatLensPlate_Pressed()
{
    _fresnel->phasePlateType = Fresnel::PhasePlate::FLAT_LENS;
    _update ();
}

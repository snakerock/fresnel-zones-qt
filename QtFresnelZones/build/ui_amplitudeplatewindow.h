/********************************************************************************
** Form generated from reading UI file 'amplitudeplatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLITUDEPLATEWINDOW_H
#define UI_AMPLITUDEPLATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"
#include "spiralgraph.h"
#include "zonesgraph.h"

QT_BEGIN_NAMESPACE

class Ui_AmplitudePlateWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QGridLayout *gridLayout_5;
    QProgressBar *progressBar;
    ZonesGraph *widget_Zones_2;
    ZonesGraph *widget_Zones;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    SpiralGraph *widget_spiralGraph;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Back_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    FontScalablePushButton *pushButton_3;
    FontScalablePushButton *pushButton;
    FontScalablePushButton *pushButton_2;
    QVBoxLayout *verticalLayout;
    FontScalableLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_Zone0;
    FontScalableLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_Zone1;
    FontScalableLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_Zone2;
    FontScalableLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_Zone3;
    FontScalableLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_Zone4;
    FontScalableLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_Zone5;
    FontScalableLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_Zone5_2;
    FontScalableLabel *label_9;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_Zone5_3;
    FontScalableLabel *label_10;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_Zone5_4;
    FontScalableLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox_Zone5_5;
    FontScalableLabel *label_12;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *AmplitudePlateWindow)
    {
        if (AmplitudePlateWindow->objectName().isEmpty())
            AmplitudePlateWindow->setObjectName(QStringLiteral("AmplitudePlateWindow"));
        AmplitudePlateWindow->resize(1024, 768);
        centralwidget = new QWidget(AmplitudePlateWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(200, 0));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        progressBar = new QProgressBar(frame_4);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(30, 0));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(progressBar, 0, 0, 1, 1);

        widget_Zones_2 = new ZonesGraph(frame_4);
        widget_Zones_2->setObjectName(QStringLiteral("widget_Zones_2"));

        gridLayout_5->addWidget(widget_Zones_2, 0, 1, 1, 1);

        widget_Zones = new ZonesGraph(frame_4);
        widget_Zones->setObjectName(QStringLiteral("widget_Zones"));

        gridLayout_5->addWidget(widget_Zones, 1, 0, 1, 2);


        gridLayout->addWidget(frame_4, 1, 1, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_spiralGraph = new SpiralGraph(frame_2);
        widget_spiralGraph->setObjectName(QStringLiteral("widget_spiralGraph"));
        sizePolicy.setHeightForWidth(widget_spiralGraph->sizePolicy().hasHeightForWidth());
        widget_spiralGraph->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(widget_spiralGraph, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 2, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_Back = new FontScalablePushButton(widget);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_Back->sizePolicy().hasHeightForWidth());
        pushButton_Back->setSizePolicy(sizePolicy3);
        pushButton_Back->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Back->setFont(font);
        pushButton_Back->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Back->setAutoDefault(false);
        pushButton_Back->setDefault(true);
        pushButton_Back->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Back, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new FontScalableLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Back_2 = new FontScalablePushButton(widget);
        pushButton_Back_2->setObjectName(QStringLiteral("pushButton_Back_2"));
        sizePolicy3.setHeightForWidth(pushButton_Back_2->sizePolicy().hasHeightForWidth());
        pushButton_Back_2->setSizePolicy(sizePolicy3);
        pushButton_Back_2->setMinimumSize(QSize(0, 0));
        pushButton_Back_2->setFont(font);
        pushButton_Back_2->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Back_2->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Back_2);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addWidget(frame_3, 0, 0, 1, 3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new FontScalablePushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(100, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("padding-top:10%;\n"
"padding-bottom:10%;\n"
"padding-left:10%;\n"
"padding-right:10%;\n"
""));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton = new FontScalablePushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(100, 0));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("padding-top:10%;\n"
"padding-bottom:10%;\n"
"padding-left:10%;\n"
"padding-right:10%;\n"
""));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new FontScalablePushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(100, 0));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("padding-top:10%;\n"
"padding-bottom:10%;\n"
"padding-left:10%;\n"
"padding-right:10%;\n"
"\n"
""));

        verticalLayout_2->addWidget(pushButton_2);


        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new FontScalableLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        verticalLayout->addWidget(label_8, 0, Qt::AlignLeft);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone0 = new QCheckBox(frame);
        checkBox_Zone0->setObjectName(QStringLiteral("checkBox_Zone0"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(checkBox_Zone0->sizePolicy().hasHeightForWidth());
        checkBox_Zone0->setSizePolicy(sizePolicy5);
        checkBox_Zone0->setChecked(true);

        horizontalLayout->addWidget(checkBox_Zone0);

        label_2 = new FontScalableLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setFamily(QStringLiteral("Trebuchet MS"));
        font4.setPointSize(16);
        label_2->setFont(font4);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone1 = new QCheckBox(frame);
        checkBox_Zone1->setObjectName(QStringLiteral("checkBox_Zone1"));
        sizePolicy5.setHeightForWidth(checkBox_Zone1->sizePolicy().hasHeightForWidth());
        checkBox_Zone1->setSizePolicy(sizePolicy5);
        checkBox_Zone1->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_Zone1);

        label_3 = new FontScalableLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone2 = new QCheckBox(frame);
        checkBox_Zone2->setObjectName(QStringLiteral("checkBox_Zone2"));
        sizePolicy5.setHeightForWidth(checkBox_Zone2->sizePolicy().hasHeightForWidth());
        checkBox_Zone2->setSizePolicy(sizePolicy5);
        checkBox_Zone2->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_Zone2);

        label_4 = new FontScalableLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone3 = new QCheckBox(frame);
        checkBox_Zone3->setObjectName(QStringLiteral("checkBox_Zone3"));
        sizePolicy5.setHeightForWidth(checkBox_Zone3->sizePolicy().hasHeightForWidth());
        checkBox_Zone3->setSizePolicy(sizePolicy5);
        checkBox_Zone3->setChecked(true);

        horizontalLayout_5->addWidget(checkBox_Zone3);

        label_5 = new FontScalableLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone4 = new QCheckBox(frame);
        checkBox_Zone4->setObjectName(QStringLiteral("checkBox_Zone4"));
        sizePolicy5.setHeightForWidth(checkBox_Zone4->sizePolicy().hasHeightForWidth());
        checkBox_Zone4->setSizePolicy(sizePolicy5);
        checkBox_Zone4->setChecked(true);

        horizontalLayout_6->addWidget(checkBox_Zone4);

        label_6 = new FontScalableLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        horizontalLayout_6->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5 = new QCheckBox(frame);
        checkBox_Zone5->setObjectName(QStringLiteral("checkBox_Zone5"));
        sizePolicy5.setHeightForWidth(checkBox_Zone5->sizePolicy().hasHeightForWidth());
        checkBox_Zone5->setSizePolicy(sizePolicy5);
        checkBox_Zone5->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_Zone5);

        label_7 = new FontScalableLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5_2 = new QCheckBox(frame);
        checkBox_Zone5_2->setObjectName(QStringLiteral("checkBox_Zone5_2"));
        sizePolicy5.setHeightForWidth(checkBox_Zone5_2->sizePolicy().hasHeightForWidth());
        checkBox_Zone5_2->setSizePolicy(sizePolicy5);
        checkBox_Zone5_2->setChecked(true);

        horizontalLayout_8->addWidget(checkBox_Zone5_2);

        label_9 = new FontScalableLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        horizontalLayout_8->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5_3 = new QCheckBox(frame);
        checkBox_Zone5_3->setObjectName(QStringLiteral("checkBox_Zone5_3"));
        sizePolicy5.setHeightForWidth(checkBox_Zone5_3->sizePolicy().hasHeightForWidth());
        checkBox_Zone5_3->setSizePolicy(sizePolicy5);
        checkBox_Zone5_3->setChecked(true);

        horizontalLayout_9->addWidget(checkBox_Zone5_3);

        label_10 = new FontScalableLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);

        horizontalLayout_9->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5_4 = new QCheckBox(frame);
        checkBox_Zone5_4->setObjectName(QStringLiteral("checkBox_Zone5_4"));
        sizePolicy5.setHeightForWidth(checkBox_Zone5_4->sizePolicy().hasHeightForWidth());
        checkBox_Zone5_4->setSizePolicy(sizePolicy5);
        checkBox_Zone5_4->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_Zone5_4);

        label_11 = new FontScalableLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);

        horizontalLayout_10->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5_5 = new QCheckBox(frame);
        checkBox_Zone5_5->setObjectName(QStringLiteral("checkBox_Zone5_5"));
        sizePolicy5.setHeightForWidth(checkBox_Zone5_5->sizePolicy().hasHeightForWidth());
        checkBox_Zone5_5->setSizePolicy(sizePolicy5);
        checkBox_Zone5_5->setChecked(true);

        horizontalLayout_11->addWidget(checkBox_Zone5_5);

        label_12 = new FontScalableLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font4);

        horizontalLayout_11->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 1, Qt::AlignLeft);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        AmplitudePlateWindow->setCentralWidget(centralwidget);

        retranslateUi(AmplitudePlateWindow);

        QMetaObject::connectSlotsByName(AmplitudePlateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AmplitudePlateWindow)
    {
        AmplitudePlateWindow->setWindowTitle(QApplication::translate("AmplitudePlateWindow", "MainWindow", 0));
        pushButton_Back->setText(QApplication::translate("AmplitudePlateWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("AmplitudePlateWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\275\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
        pushButton_Back_2->setText(QApplication::translate("AmplitudePlateWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        pushButton_3->setText(QApplication::translate("AmplitudePlateWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\262\321\201\320\265", 0));
        pushButton->setText(QApplication::translate("AmplitudePlateWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262\321\201\320\265", 0));
        pushButton_2->setText(QApplication::translate("AmplitudePlateWindow", "\320\235\320\265\321\207\321\221\321\202\320\275\321\213\320\265", 0));
        label_8->setText(QApplication::translate("AmplitudePlateWindow", "\320\227\320\276\320\275\321\213 \320\244\321\200\320\265\320\275\320\265\320\273\321\217:", 0));
        checkBox_Zone0->setText(QString());
        label_2->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 0", 0));
        checkBox_Zone1->setText(QString());
        label_3->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 1", 0));
        checkBox_Zone2->setText(QString());
        label_4->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 2", 0));
        checkBox_Zone3->setText(QString());
        label_5->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 3", 0));
        checkBox_Zone4->setText(QString());
        label_6->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 4", 0));
        checkBox_Zone5->setText(QString());
        label_7->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 5", 0));
        checkBox_Zone5_2->setText(QString());
        label_9->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 6", 0));
        checkBox_Zone5_3->setText(QString());
        label_10->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 7", 0));
        checkBox_Zone5_4->setText(QString());
        label_11->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 8", 0));
        checkBox_Zone5_5->setText(QString());
        label_12->setText(QApplication::translate("AmplitudePlateWindow", "\320\267\320\276\320\275\320\260 9", 0));
    } // retranslateUi

};

namespace Ui {
    class AmplitudePlateWindow: public Ui_AmplitudePlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLITUDEPLATEWINDOW_H
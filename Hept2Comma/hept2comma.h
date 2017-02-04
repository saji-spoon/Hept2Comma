#pragma once

#include <QtWidgets/QWidget>
#include "ui_hept2comma.h"
#include"./util/util.hpp"
#include<Windows.h>


class Hept2Comma : public QWidget
{
        Q_OBJECT

public:
        Hept2Comma(QWidget *parent = Q_NULLPTR);

private:
        Ui::Hept2CommaClass ui;
        
private slots:
        void on_applyButton_clicked();
        
        void on_clearButton_clicked();
        





};

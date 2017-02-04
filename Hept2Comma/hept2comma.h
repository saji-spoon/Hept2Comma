#pragma once

#include <QtWidgets/QWidget>
#include "ui_hept2comma.h"

class Hept2Comma : public QWidget
{
        Q_OBJECT

public:
        Hept2Comma(QWidget *parent = Q_NULLPTR);

private:
        Ui::Hept2CommaClass ui;
        
private slots:
        void on_addButton_clicked();
        
        void on_addressList_currentItemChanged();
        





};

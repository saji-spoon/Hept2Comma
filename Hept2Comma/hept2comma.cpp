#include "hept2comma.h"
#include "adddialog.h"
#include<iostream>
#include<sstream>

Hept2Comma::Hept2Comma(QWidget *parent)
        : QWidget(parent)
{
        ui.setupUi(this);
}
void Hept2Comma::on_applyButton_clicked()
{
        QString heptQStr = ui.heptEdit->text();

        std::string heptStr = heptQStr.toStdString();

        std::stringstream ss;
        
        for (int i = 0; i < heptStr.length(); ++i)
        {
                ss << HepttoNum(heptStr[i]) << ",";
        }

        std::string commaStr;

        ss >> commaStr;

        ui.commaEdit->setText(QString::fromStdString(commaStr));

}

void Hept2Comma::on_clearButton_clicked()
{
        ui.heptEdit->clear();
        ui.commaEdit->clear();
}
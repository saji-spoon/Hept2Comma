#include "hept2comma.h"
#include "adddialog.h"

Hept2Comma::Hept2Comma(QWidget *parent)
        : QWidget(parent)
{
        ui.setupUi(this);
}
void Hept2Comma::on_applyButton_clicked()
{
        QString heptQStr = ui.heptEdit->text();

        std::string heptStr = heptQStr.toStdString();

}

void Hept2Comma::on_clearButton_clicked()
{
}
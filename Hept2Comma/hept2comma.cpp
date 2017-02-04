#include "hept2comma.h"
#include "adddialog.h"

Hept2Comma::Hept2Comma(QWidget *parent)
        : QWidget(parent)
{
        ui.setupUi(this);
}
void Hept2Comma::on_addButton_clicked()
{
        AddDialog dialog(this);

        if (dialog.exec()) {
                QString name = dialog.nameEdit->text();
                QString email = dialog.emailEdit->text();

                if (!name.isEmpty() && !email.isEmpty()) {
                        QListWidgetItem *item = new QListWidgetItem(name, ui.addressList);
                        item->setData(Qt::UserRole, email);
                        ui.addressList->setCurrentItem(item);
                }
        }
        
}
void Hept2Comma::on_addressList_currentItemChanged()
{
        QListWidgetItem* curItem = ui.addressList->currentItem();
        
        if(curItem)
        {
                ui.nameLabel->setText("Name:" + curItem->text());
                ui.addressLabel->setText("Email:" + curItem->data(Qt::UserRole).toString());
        }
	else
	{
                ui.nameLabel->setText("<No Item Selected>");
                ui.addressLabel->clear();
	}

}

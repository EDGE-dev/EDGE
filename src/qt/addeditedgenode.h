#ifndef ADDEDITedgeNODE_H
#define ADDEDITedgeNODE_H

#include <QDialog>

namespace Ui {
class AddEditedgeNode;
}


class AddEditedgeNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditedgeNode(QWidget *parent = 0);
    ~AddEditedgeNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditedgeNode *ui;
};

#endif // ADDEDITedgeNODE_H

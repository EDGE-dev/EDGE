#ifndef edgeNODECONFIGDIALOG_H
#define edgeNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class edgeNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class edgeNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit edgeNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~edgeNodeConfigDialog();

private:
    Ui::edgeNodeConfigDialog *ui;
};

#endif // edgeNODECONFIGDIALOG_H

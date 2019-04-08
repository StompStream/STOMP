// Copyright (c) 2017-2018 The STOMP developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZSTMPCONTROLDIALOG_H
#define ZSTMPCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zstmp/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZStmpControlDialog;
}

class CZStmpControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZStmpControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZStmpControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZStmpControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZStmpControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZStmpControlDialog(QWidget *parent);
    ~ZStmpControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZStmpControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZStmpControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZSTMPCONTROLDIALOG_H

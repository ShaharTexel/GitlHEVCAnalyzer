#ifndef PLUGINFILTERITEM_H
#define PLUGINFILTERITEM_H

#include <QWidget>
#include "gitldef.h"
#include "drawengine/abstractfilter.h"

namespace Ui {
class PluginFilterItem;
}

class PluginFilterItem : public QWidget
{
    Q_OBJECT
    
public:
    explicit PluginFilterItem(AbstractFilter* pcFilter, QWidget *parent = 0 );
    ~PluginFilterItem();

    ADD_CLASS_FIELD_PRIVATE(AbstractFilter*, pcFilter)

private slots:
    void on_enableCheckBox_clicked();

    void on_configBtn_clicked();

    void on_upBtn_clicked();

    void on_downBtn_clicked();

private:
    Ui::PluginFilterItem *ui;

};

#endif // PLUGINFILTERITEM_H

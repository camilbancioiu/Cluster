#ifndef CLUSTERLIST_H
#define CLUSTERLIST_H

#include <QAbstractListModel>
#include <QList>
#include "ClusterNode.h"

#include "Nodes/NodeText.h"

class ClusterList : public QAbstractListModel, public ClusterNode
{
    Q_OBJECT
private:
    QString Title;
    long ID;
    QList<ClusterNode*> *L;

public:
    explicit ClusterList(QObject *parent = 0);

    // QAbstractItemModel interface
public:
    int rowCount(QModelIndex &parent);
    QVariant data(QModelIndex &index, int role);
    QVariant headerData(int section, Qt::Orientation orientation, int role);

    // ClusterNode interface
public:
    QString title();
    long id();

    // Setters for properties of ClusterNode
public:
    void setTitle(QString t);
    void setID(long i);
};

#endif // CLUSTERLIST_H

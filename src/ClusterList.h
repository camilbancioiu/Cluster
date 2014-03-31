#ifndef CLUSTERLIST_H
#define CLUSTERLIST_H

#include <QList>
#include <QAbstractListModel>
#include "ClusterNode.h"

#include "Nodes/NodeText.h"

class ClusterList : public QAbstractListModel, public ClusterNode
{
private:
    QString Title;
    long ID;
    QList<ClusterNode*> *L;

public:
    explicit ClusterList(QObject *parent = 0);

    // ClusterNode interface
public:
    QString title();
    long internalId();

    // QAbstractListModel interface
public:
    int rowCount(const QModelIndex &index) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role);
    Qt::ItemFlags flags(QModelIndex &index);

    // Setters for properties of ClusterNode
public:
    void setTitle(QString t);
    void setID(long i);
};

#endif // CLUSTERLIST_H

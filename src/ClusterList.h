#ifndef CLUSTERLIST_H
#define CLUSTERLIST_H

#include <QList>
#include "ClusterNode.h"

#include "Nodes/NodeText.h"

class ClusterList : public ClusterNode
{
    Q_OBJECT
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

    // Setters for properties of ClusterNode
public:
    void setTitle(QString t);
    void setID(long i);
};

#endif // CLUSTERLIST_H

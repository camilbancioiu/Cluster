#ifndef CLUSTERITEM_H
#define CLUSTERITEM_H

#include <QObject>

class ClusterNode
{
public:
    ClusterNode();

    virtual QString title() = 0;
    virtual long internalId() = 0;
};

#endif // CLUSTERITEM_H

#ifndef CLUSTERITEM_H
#define CLUSTERITEM_H

#include <QObject>

class ClusterNode
{

public:
    explicit ClusterNode();

    virtual QString title() = 0;
    virtual long id() = 0;
};

#endif // CLUSTERITEM_H

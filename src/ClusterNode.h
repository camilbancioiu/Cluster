#ifndef CLUSTERITEM_H
#define CLUSTERITEM_H

#include <QObject>

class ClusterNode : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ title)
    Q_PROPERTY(long internalId READ internalId)

public:
    ClusterNode();

    virtual QString title() = 0;
    virtual long internalId() = 0;
};

#endif // CLUSTERITEM_H

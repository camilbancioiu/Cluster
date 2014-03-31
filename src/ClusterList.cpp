#include "ClusterList.h"

ClusterList::ClusterList(QObject *parent) : ClusterNode(parent)
{
    L = new QList<ClusterNode*>();

    L->append(new NodeText("Rocket"));
    L->append(new NodeText("Albatross"));
    L->append(new NodeText("Johnny Bravo"));
    L->append(new NodeText("Raspberry"));
    L->append(new NodeText("Lagrange"));
}



QString ClusterList::title()
{
    return Title;
}

long ClusterList::internalId()
{
    return ID;
}

void ClusterList::setTitle(QString t)
{
    this->Title = t;
}

void ClusterList::setID(long i)
{
    this->ID = i;
}

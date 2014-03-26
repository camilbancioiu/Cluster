#include "ClusterList.h"

ClusterList::ClusterList(QObject *parent = 0) : QAbstractListModel(parent)
{
    L = new QList<ClusterNode*>();

    L->append(new NodeText("Rocket"));
    L->append(new NodeText("Albatross"));
    L->append(new NodeText("Johnny Bravo"));
    L->append(new NodeText("Raspberry"));
    L->append(new NodeText("Lagrange"));
}

int ClusterList::rowCount(QModelIndex &parent)
{
    Q_UNUSED(parent);
    return L->size();
}

QVariant ClusterList::data(QModelIndex &index, int role)
{
    Q_UNUSED(index);
    Q_UNUSED(role);
    return L->at(index.row())->title();
}

QVariant ClusterList::headerData(int section, Qt::Orientation orientation, int role)
{
    Q_UNUSED(section);
    Q_UNUSED(orientation);
    Q_UNUSED(role);
    return QObject::tr("Node");
}

QString ClusterList::title()
{
    return Title;
}

long ClusterList::id()
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

#include "ClusterList.h"

ClusterList::ClusterList(QObject *parent) : QAbstractListModel(parent)
{
    L = new QList<ClusterNode*>();

    L->append(new NodeText("Rocket"));
    L->append(new NodeText("Albatross"));
    L->append(new NodeText("Johnny Bravo"));
    L->append(new NodeText("Raspberry"));
    L->append(new NodeText("Lagrange"));
}

int ClusterList::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return L->size();
}

QVariant ClusterList::data(const QModelIndex &index, int role) const
{
    Q_UNUSED(index);
    Q_UNUSED(role);
    if (role == Qt::EditRole) {
        return L->at(index.row())->title().append(" - Edit");
    } else {
        return L->at(index.row())->title();
    }
}

QVariant ClusterList::headerData(int section, Qt::Orientation orientation, int role)
{
    Q_UNUSED(section);
    Q_UNUSED(orientation);
    Q_UNUSED(role);
    return QObject::tr("Node");
}

Qt::ItemFlags ClusterList::flags(QModelIndex &index)
{
    Q_UNUSED(index);
    return Qt::ItemIsEnabled;
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

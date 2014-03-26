# The name of your app.
# NOTICE: name defined in TARGET has a corresponding QML filename.
#         If name defined in TARGET is changed, following needs to be
#         done to match new name:
#         - corresponding QML filename must be changed
#         - desktop icon filename must be changed
#         - desktop filename must be changed
#         - icon definition filename in desktop file must be changed
TARGET = Cluster

CONFIG += sailfishapp

SOURCES += src/Cluster.cpp \
    src/ClusterList.cpp \
    src/ClusterNode.cpp \
    src/Nodes/NodeText.cpp

OTHER_FILES += qml/Cluster.qml \
    qml/cover/CoverPage.qml \
    qml/pages/FirstPage.qml \
    qml/pages/SecondPage.qml \
    rpm/Cluster.spec \
    rpm/Cluster.yaml \
    Cluster.desktop

HEADERS += \
    src/ClusterList.h \
    src/ClusterNode.h \
    src/Nodes/NodeText.h


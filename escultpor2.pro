QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cutBox.cpp \
    cutEllipsoid.cpp \
    cutSphere.cpp \
    cutVoxel.cpp \
    figuraGeometrica.cpp \
    interpreter.cpp \
    main.cpp \
    putBox.cpp \
    putEllipsoid.cpp \
    putSphere.cpp \
    putVoxel.cpp \
    sculptor.cpp \
    sources/cutBox.cpp \
    sources/cutEllipsoid.cpp \
    sources/cutSphere.cpp \
    sources/cutVoxel.cpp \
    sources/interpreter.cpp \
    sources/putBox.cpp \
    sources/putEllipsoid.cpp \
    sources/putSphere.cpp \
    sources/putVoxel.cpp \
    sources/sculptor.cpp \
    voxel.cpp

HEADERS += \
    cutBox.h \
    cutEllipsoid.h \
    cutSphere.h \
    cutVoxel.h \
    figuraGeometrica.h \
    headers/cutBox.h \
    headers/cutEllipsoid.h \
    headers/cutSphere.h \
    headers/cutVoxel.h \
    headers/figuraGeometrica.h \
    headers/interpreter.h \
    headers/putBox.h \
    headers/putEllipsoid.h \
    headers/putSphere.h \
    headers/putVoxel.h \
    headers/sculptor.h \
    headers/voxel.h \
    interpreter.h \
    putBox.h \
    putEllipsoid.h \
    putSphere.h \
    putVoxel.h \
    sculptor.h \
    voxel.h

FORMS += \
    sculptor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

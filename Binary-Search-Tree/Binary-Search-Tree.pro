QT += core
QT -= gui

CONFIG += c++11

TARGET = Binary-Search-Tree
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    node.cpp \
    tree.cpp

HEADERS += \
    node.h \
    tree.h

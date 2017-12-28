QT += core
QT -= gui

CONFIG += c++11

TARGET = 330-002_Example
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    calculator.cpp

HEADERS += \
    calculator.h

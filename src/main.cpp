// Copyright (c) 2026 Phiarc Team and St Rangeset
// Licensed under the GNU General Public License v3.0
// See LICENSE file for details.
//
// src/main.cpp
// Entry point of program.

#include <QApplication>

#include <ui/OverlayWidget.h>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    OverlayWidget w;
    w.show();
    return QApplication::exec();
}

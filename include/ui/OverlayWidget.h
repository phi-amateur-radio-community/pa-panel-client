// Copyright (c) 2026 Phiarc Team and St Rangeset
// Licensed under the GNU General Public License v3.0
// See LICENSE file for details.
//
// include/ui/OverlayWidget.hpp
// Header of main widget

#pragma once

#include <QWidget>
#include <QPoint>

class OverlayWidget : public QWidget {
public:
    explicit OverlayWidget(QWidget* parent = Q_NULLPTR);
protected:
    void paintEvent(QPaintEvent* event) override;

private:
    QPoint dragPosition;
};

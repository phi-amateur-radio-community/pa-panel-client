// Copyright (c) 2026 Phiarc Team and St Rangeset
// Licensed under the GNU General Public License v3.0
// See LICENSE file for details.
//
// src/ui/OverlayWidget.cpp
// Main widget

#include <ui/OverlayWidget.h>

#include <QPainter>
#include <QMouseEvent>

OverlayWidget::OverlayWidget(QWidget* parent) : QWidget(parent) {
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);
    setAttribute(Qt::WA_TranslucentBackground);

    resize(400, 300);
}

void OverlayWidget::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(0, 0, 0, 160));
    painter.drawRoundedRect(rect(), 20, 20);
}

void OverlayWidget::mousePressEvent(QMouseEvent* event) {
    dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
}

void OverlayWidget::mouseMoveEvent(QMouseEvent* event) {
    move(event->globalPosition().toPoint() - dragPosition);
}

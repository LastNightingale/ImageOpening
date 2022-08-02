#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QGraphicsScene>
#include <QMenuBar>
#include <QImageWriter>

class OpenFile : public QWidget
{
private:
    Q_OBJECT
    QPixmap m_pix;
    QPushButton *m_choose;
    QGridLayout* m_box;
    QLabel* m_image = new QLabel();
    QMenuBar* m_menuBar = new QMenuBar;
    QMenu* m_menu = new QMenu("Файл");
public:
    OpenFile(QWidget* parent = 0);
public slots:
    void openImage();
    void saveImage();
};

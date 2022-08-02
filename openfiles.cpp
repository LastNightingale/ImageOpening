#include "openfiles.h"

#include <QFileDialog>

OpenFile::OpenFile(QWidget* pwgt): QWidget(pwgt)
{
    m_choose = new QPushButton("Open File");
    m_box = new QGridLayout;
    m_menu->addAction("Відкрити файл", this, SLOT(openImage()));
    m_menu->addAction("Зберігти файл", this, SLOT(saveImage()));
    m_menuBar->addMenu(m_menu);
    m_box->setMenuBar(m_menuBar);
    m_box->addWidget(m_image);
    m_image->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    setLayout(m_box);
}

void OpenFile::openImage()
{
    bool changingneed = false;
    QString filename = QFileDialog::getOpenFileName(this, tr("Відкрити файл"), tr("Оберіть файл"));
    if (filename.isEmpty()) return;
    QPixmap pix(filename);
    float hcoef = 0, wcoef = 0, coef = 1;
    float new_width = pix.width();
    float new_height = pix.height();
    if (pix.height() > m_box->geometry().height())
    {
        hcoef = float(m_box->geometry().height())/pix.height();
        changingneed = true;
    }
    if (pix.width() > m_box->geometry().width())
    {
        wcoef = float(m_box->geometry().width())/pix.width();
        changingneed = true;
    }
    if (changingneed)
    {
        (hcoef > wcoef) ? (coef = hcoef) : coef = wcoef;
        new_width = pix.width() * coef;
        new_height = pix.height() * coef;
    }
    m_image->setFixedWidth(new_width);
    m_image->setFixedHeight(new_height);
    m_image->setScaledContents(true);
    m_image->setPixmap(pix);
}

void OpenFile::saveImage()
{
    QString filters;
    foreach(QByteArray byte, QImageWriter::supportedImageFormats())
    {
        QString format = byte;
        filters += QString("%1 %2\n")
                   .arg(format.toUpper())
                   .arg("*." + format);
    }
    QString fileName = QFileDialog::getSaveFileName(this, tr("Зберігти як"), "Зображення", filters);
    if (fileName.isEmpty() || fileName.isNull()) return;
    this->m_image->pixmap().save(fileName);
}



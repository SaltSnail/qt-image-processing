#ifndef FILTERS_H
#define FILTERS_H

#include <iostream>
#include <QLabel>
#include <QImage>
#include <QRgb>
#include <QColor>
#include <algorithm>
#include <QRandomGenerator>
#include <QMatrix>
#include <QGenericMatrix>
#include <QTransform>
#include <QProgressBar>

inline QPixmap GrayWorld(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap MedFilter(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Glass(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Motion_blur(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Gisogram(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap GrayScale(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Sepya(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Lighter_Filter(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Sharpness(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Sobel(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Dilation(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Erosion(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Dilation_Bin(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Erosion_Bin(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Closing(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Opening(QLabel* Picture,QProgressBar& pb, const QString& path);
inline QPixmap Closing_Bin(QLabel *Picture, const QString &path);
inline QPixmap Opening_Bin(QLabel *Picture, const QString &path);

inline QImage Convert_to_binary(const QString &path);

#endif // FILTERS_H

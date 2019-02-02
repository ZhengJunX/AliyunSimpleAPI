/**
  ******************************************************************************
  * @file    JsonHandle.cpp
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "JsonHandle.h"

/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
void printFormattedJson(const QJsonObject &jsonObject, QJsonDocument::JsonFormat jsonFormat)
{
    qDebug() << qPrintable(QString(QJsonDocument(jsonObject).toJson(jsonFormat)));
}

void printFormattedJson(const QJsonDocument &jsonDocument, QJsonDocument::JsonFormat jsonFormat)
{
    qDebug() << qPrintable(QString(jsonDocument.toJson(jsonFormat)));
}

void printFormattedJson(const QString &jsonString, QJsonDocument::JsonFormat jsonFormat)
{
    qDebug() << qPrintable(QString(QJsonDocument::fromJson(jsonString.toUtf8()).toJson(jsonFormat)));
}

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/

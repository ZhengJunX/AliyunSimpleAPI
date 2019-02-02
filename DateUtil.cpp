/**
  ******************************************************************************
  * @file    DateUtil.cpp
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "DateUtil.h"

/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
qint64 getTimestamp(const QString &dateTime, const QString &format)
{
    return QDateTime::fromString(dateTime, format).toMSecsSinceEpoch();
}

QString getTimestamp(qint64 timestamp)
{
    return QString::number(timestamp);
}

QString getDateTime(qint64 timestamp, const QString &format)
{
    return QDateTime::fromMSecsSinceEpoch(timestamp).toString(format);
}

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/

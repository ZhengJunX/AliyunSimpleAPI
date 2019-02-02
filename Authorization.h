/**
  ******************************************************************************
  * @file    Authorization.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

/* Includes ------------------------------------------------------------------*/
#include <QCryptographicHash>
#include <QMessageAuthenticationCode>
#include <QString>
#include <QDebug>

/* Macro Definition ----------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Function Declaration ------------------------------------------------------*/
QByteArray get_md5_base64_str(const QString &content);
QByteArray get_sha256_base64_str(const QString &content, const QString &secret);
QByteArray get_sha1_hex(const QString &content, const QString &secret);

#endif // AUTHORIZATION_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/

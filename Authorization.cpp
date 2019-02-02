/**
  ******************************************************************************
  * @file    Authorization.cpp
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "Authorization.h"

/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
QByteArray get_md5_base64_str(const QString &content)
{
    return QCryptographicHash::hash(content.toUtf8(), QCryptographicHash::Md5).toBase64();
}

QByteArray get_sha256_base64_str(const QString &content, const QString &secret)
{
    return QMessageAuthenticationCode::hash(content.toUtf8(), secret.toUtf8(), QCryptographicHash::Sha256).toBase64();
}

QByteArray get_sha1_hex(const QString &content, const QString &secret)
{
    return QMessageAuthenticationCode::hash(content.toUtf8(), secret.toUtf8(), QCryptographicHash::Sha1).toHex();
}

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/

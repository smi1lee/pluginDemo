#pragma once

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QVariant>
#include <tuple>

auto ReadConf(const QString& strConf)
{
    QFile file(strConf);
    if (!file.open(QIODevice::ReadOnly))
    {
        return std::make_tuple(QString(), QVariant());
    }

    QByteArray byteArray = file.readAll();
    file.close();

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray, &error);
    if (error.error == QJsonParseError::NoError)
    {
        QJsonObject rootObj = doc.object();
        QString strProjectName = rootObj["project"].toString();
        QVariant variant = rootObj["type"].toVariant();
        return std::make_tuple(strProjectName, variant);
    }
    return std::make_tuple(QString(), QVariant());
}
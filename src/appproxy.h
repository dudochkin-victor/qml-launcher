/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p appproxy -c MeeGoAppProxy com.meego.launcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef APPPROXY_H_1297288309
#define APPPROXY_H_1297288309

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.meego.launcher
 */
class MeeGoAppProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.meego.launcher"; }

public:
    MeeGoAppProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~MeeGoAppProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> raise(const QStringList &cmdline)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(cmdline);
        return asyncCallWithArgumentList(QLatin1String("raise"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace meego {
    typedef ::MeeGoAppProxy launcher;
  }
}
#endif

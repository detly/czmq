/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#ifndef QML_ZARMOUR_H
#define QML_ZARMOUR_H

#include <QtQml>

#include <czmq.h>
#include "qml_czmq_plugin.h"


class QmlZarmour : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isNULL READ isNULL)
    
public:
    zarmour_t *self;
    
    QmlZarmour() { self = NULL; }
    bool isNULL() { return self == NULL; }
    
    static QObject* qmlAttachedProperties(QObject* object); // defined in QmlZarmour.cpp
    
public slots:
    //  Print properties of object
    void print ();

    //  Get printable string for mode.
    const QString modeStr ();

    //  Encode a stream of bytes into an armoured string.
    QString encode (const byte *data, size_t dataSize);

    //  Decode an armoured string into a string of bytes.          
    //  The decoded output is null-terminated, so it may be treated
    //  as a string, if that's what it was prior to encoding.      
    byte *decode (const QString &data, size_t *decodeSize);

    //  Get the mode property.
    zarmour_mode_t mode ();

    //  Set the mode property.
    void setMode (zarmour_mode_t mode);

    //  Return true if padding is turned on.
    bool pad ();

    //  Turn padding on or off. Default is on.
    void setPad (bool pad);

    //  Get the padding character.
    char padChar ();

    //  Set the padding character.
    void setPadChar (char padChar);

    //  Return if splitting output into lines is turned on. Default is off.
    bool lineBreaks ();

    //  Turn splitting output into lines on or off.
    void setLineBreaks (bool lineBreaks);

    //  Get the line length used for splitting lines.
    size_t lineLength ();

    //  Set the line length used for splitting lines.
    void setLineLength (size_t lineLength);
};

class QmlZarmourAttached : public QObject
{
    Q_OBJECT
    QObject* m_attached;
    
public:
    QmlZarmourAttached (QObject* attached) {
        Q_UNUSED (attached);
    };
    
public slots:
    //  Self test of this class
    void test (bool verbose);

    //  Create a new zarmour.
    QmlZarmour *construct ();

    //  Destroy the zarmour.
    void destruct (QmlZarmour *qmlSelf);
};


QML_DECLARE_TYPEINFO(QmlZarmour, QML_HAS_ATTACHED_PROPERTIES)

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

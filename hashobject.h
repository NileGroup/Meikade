/*
    Copyright (C) 2015 Nile Group
    http://nilegroup.org

    Meikade is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Meikade is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HASHOBJECT_H
#define HASHOBJECT_H

#include <QObject>
#include <QVariant>

class HashObjectPrivate;
class HashObject : public QObject
{
    Q_OBJECT
public:
    HashObject(QObject *parent = 0);
    ~HashObject();

    Q_INVOKABLE void insert(const QString & key, const QVariant & value );
    Q_INVOKABLE void insertMulti(const QString & key, const QVariant & value );
    Q_INVOKABLE void remove( const QString & key );
    Q_INVOKABLE void remove( const QString & key, const QVariant & value );

    Q_INVOKABLE QVariant key( const QVariant & value );
    Q_INVOKABLE QStringList keys( const QVariant & value );
    Q_INVOKABLE QStringList keys();
    Q_INVOKABLE QVariant value( const QString & key );
    Q_INVOKABLE QVariantList values( const QString & key );

    Q_INVOKABLE QVariant containt( const QString & key );
    Q_INVOKABLE QVariant containt( const QString & key, const QVariant & value );

    Q_INVOKABLE void clear();

    Q_INVOKABLE int count();

private:
    HashObjectPrivate *p;
};

#endif // HASHOBJECT_H

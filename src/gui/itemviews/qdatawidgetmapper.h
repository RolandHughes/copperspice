/***********************************************************************
*
* Copyright (c) 2012-2024 Barbara Geller
* Copyright (c) 2012-2024 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

#ifndef QDATAWIDGETMAPPER_H
#define QDATAWIDGETMAPPER_H

#include <qabstractitemdelegate.h>
#include <qobject.h>
#include <qscopedpointer.h>

#ifndef QT_NO_DATAWIDGETMAPPER

class QAbstractItemDelegate;
class QAbstractItemModel;
class QDataWidgetMapperPrivate;
class QModelIndex;

class Q_GUI_EXPORT QDataWidgetMapper : public QObject
{
    GUI_LSCS_OBJECT( QDataWidgetMapper )

    GUI_LSCS_ENUM( SubmitPolicy )

    GUI_LSCS_PROPERTY_READ( currentIndex, currentIndex )
    GUI_LSCS_PROPERTY_WRITE( currentIndex, setCurrentIndex )
    GUI_LSCS_PROPERTY_NOTIFY( currentIndex, currentIndexChanged )

    GUI_LSCS_PROPERTY_READ( orientation, orientation )
    GUI_LSCS_PROPERTY_WRITE( orientation, setOrientation )

    GUI_LSCS_PROPERTY_READ( submitPolicy, submitPolicy )
    GUI_LSCS_PROPERTY_WRITE( submitPolicy, setSubmitPolicy )

public:
    enum SubmitPolicy
    {
        AutoSubmit,
        ManualSubmit
    };

    explicit QDataWidgetMapper( QObject *parent = nullptr );

    QDataWidgetMapper( const QDataWidgetMapper & ) = delete;
    QDataWidgetMapper &operator=( const QDataWidgetMapper & ) = delete;

    ~QDataWidgetMapper();

    void setModel( QAbstractItemModel *model );
    QAbstractItemModel *model() const;

    void setItemDelegate( QAbstractItemDelegate *delegate );
    QAbstractItemDelegate *itemDelegate() const;

    void setRootIndex( const QModelIndex &index );
    QModelIndex rootIndex() const;

    void setOrientation( Qt::Orientation newOrientation );
    Qt::Orientation orientation() const;

    void setSubmitPolicy( SubmitPolicy policy );
    SubmitPolicy submitPolicy() const;

    void addMapping( QWidget *widget, int section );
    void addMapping( QWidget *widget, int section, const QString &propertyName );
    void removeMapping( QWidget *widget );
    int mappedSection( QWidget *widget ) const;

    QString mappedPropertyName( QWidget *widget ) const;
    QWidget *mappedWidgetAt( int section ) const;

    void clearMapping();

    int currentIndex() const;

    GUI_LSCS_SLOT_1( Public, void revert() )
    GUI_LSCS_SLOT_2( revert )

    GUI_LSCS_SLOT_1( Public, bool submit() )
    GUI_LSCS_SLOT_2( submit )

    GUI_LSCS_SLOT_1( Public, void toFirst() )
    GUI_LSCS_SLOT_2( toFirst )

    GUI_LSCS_SLOT_1( Public, void toLast() )
    GUI_LSCS_SLOT_2( toLast )

    GUI_LSCS_SLOT_1( Public, void toNext() )
    GUI_LSCS_SLOT_2( toNext )

    GUI_LSCS_SLOT_1( Public, void toPrevious() )
    GUI_LSCS_SLOT_2( toPrevious )

    GUI_LSCS_SLOT_1( Public, virtual void setCurrentIndex( int index ) )
    GUI_LSCS_SLOT_2( setCurrentIndex )

    GUI_LSCS_SLOT_1( Public, void setCurrentModelIndex( const QModelIndex &index ) )
    GUI_LSCS_SLOT_2( setCurrentModelIndex )

    GUI_LSCS_SIGNAL_1( Public, void currentIndexChanged( int index ) )
    GUI_LSCS_SIGNAL_2( currentIndexChanged, index )

protected:
    QScopedPointer<QDataWidgetMapperPrivate> d_ptr;

private:
    Q_DECLARE_PRIVATE( QDataWidgetMapper )

    GUI_LSCS_SLOT_1( Private, void _q_dataChanged( const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QVector<int> &roles ) )
    GUI_LSCS_SLOT_2( _q_dataChanged )

    GUI_LSCS_SLOT_1( Private, void _q_commitData( QWidget *currentWidget ) )
    GUI_LSCS_SLOT_2( _q_commitData )

    GUI_LSCS_SLOT_1( Private, void _q_closeEditor( QWidget *currentWidget, QAbstractItemDelegate::EndEditHint hint ) )
    GUI_LSCS_SLOT_2( _q_closeEditor )

    GUI_LSCS_SLOT_1( Private, void _q_modelDestroyed() )
    GUI_LSCS_SLOT_2( _q_modelDestroyed )
};

#endif // QT_NO_DATAWIDGETMAPPER
#endif


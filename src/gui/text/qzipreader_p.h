/***********************************************************************
*
* Copyright (c) 2012-2018 Barbara Geller
* Copyright (c) 2012-2018 Ansel Sermersheim
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
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
* <http://www.gnu.org/licenses/>.
*
***********************************************************************/

#ifndef QZIPREADER_P_H
#define QZIPREADER_P_H

#include <qglobal.h>
#ifndef QT_NO_TEXTODFWRITER

#include <QtCore/qdatetime.h>
#include <QtCore/qfile.h>
#include <QtCore/qstring.h>

class QZipReaderPrivate;

class Q_GUI_EXPORT QZipReader
{
 public:
   explicit QZipReader(const QString &fileName, QIODevice::OpenMode mode = QIODevice::ReadOnly );

   explicit QZipReader(QIODevice *device);
   ~QZipReader();

   QIODevice *device() const;

   bool isReadable() const;
   bool exists() const;

   struct FileInfo {
      FileInfo()
         : isDir(false), isFile(false), isSymLink(false), crc(0), size(0)
      {}


      bool isValid() const {
         return isDir || isFile || isSymLink;
      }

      QString filePath;
      uint isDir : 1;
      uint isFile : 1;
      uint isSymLink : 1;
      QFile::Permissions permissions;

      uint crc;
      qint64 size;
      QDateTime lastModified;
   };

   QVector<FileInfo> fileInfoList() const;
   int count() const;

   FileInfo entryInfoAt(int index) const;
   QByteArray fileData(const QString &fileName) const;
   bool extractAll(const QString &destinationDir) const;

   enum Status {
      NoError,
      FileReadError,
      FileOpenError,
      FilePermissionsError,
      FileError
   };

   Status status() const;

   void close();

 private:
   QZipReaderPrivate *d;
   Q_DISABLE_COPY(QZipReader)
};

#endif // QT_NO_TEXTODFWRITER
#endif // QZIPREADER_H

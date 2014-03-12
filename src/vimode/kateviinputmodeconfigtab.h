/*  This file is part of the KDE libraries and the Kate part.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef __KATE_VI_INPUT_MODE_CONFIG_TAB_H__
#define __KATE_VI_INPUT_MODE_CONFIG_TAB_H__

#include "kateconfigpage.h"
#include "kateviglobal.h"

class QTableWidget;
namespace Ui { class ViInputModeConfigWidget; }

class KateViInputModeConfigTab : public KateConfigPage
{
    Q_OBJECT

public:
    KateViInputModeConfigTab(QWidget *parent);
    ~KateViInputModeConfigTab();

protected:
    Ui::ViInputModeConfigWidget *ui;

private:
    void applyTab(QTableWidget *mappingsTable, KateViGlobal::MappingMode mode);
    void reloadTab(QTableWidget *mappingsTable, KateViGlobal::MappingMode mode);

public Q_SLOTS:
    void apply();
    void reload();
    void reset() {}
    void defaults() {}

private Q_SLOTS:
    void showWhatsThis(const QString &text);
    void addMappingRow();
    void removeSelectedMappingRows();
    void importNormalMappingRow();
};

#endif

#ifndef CENTRALDLL_GLOBAL_H
#define CENTRALDLL_GLOBAL_H

#include <QtCore/qglobal.h>
#include "ComInterface.h"

#if defined(CENTRALDLL_LIBRARY)
#  define CENTRALDLL_EXPORT Q_DECL_EXPORT
#else
#  define CENTRALDLL_EXPORT Q_DECL_IMPORT
#endif

extern "C" CENTRALDLL_EXPORT CentralWidget* CreateCentralWidget();

#endif // CENTRALDLL_GLOBAL_H

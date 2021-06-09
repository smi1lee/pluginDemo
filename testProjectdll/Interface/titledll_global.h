#ifndef TITLEDLL_GLOBAL_H
#define TITLEDLL_GLOBAL_H

#include <QtCore/qglobal.h>
#include "ComInterface.h"

#if defined(TITLEDLL_LIBRARY)
#  define TITLEDLL_EXPORT Q_DECL_EXPORT
#else
#  define TITLEDLL_EXPORT Q_DECL_IMPORT
#endif

extern "C" TITLEDLL_EXPORT TitleWidget* CreateTitleWidget();

#endif // TITLEDLL_GLOBAL_H

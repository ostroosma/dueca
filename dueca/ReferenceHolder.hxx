/* ------------------------------------------------------------------   */
/*      item            : ReferenceHolder.hxx
        made by         : Rene van Paassen
        date            : 251016
        category        : header file
        description     :
        changes         : 251016 first version
        language        : C++
        copyright       : (c) 2025 René van Paassen
*/

#pragma once
#include "dueca_ns.h"
DUECA_NS_START

/** May keep references to script-created objects */
struct ReferenceHolder
{
  // Constructor, pro forma
  ReferenceHolder();

  // Destructor, needs virtual
  virtual ~ReferenceHolder();
};


DUECA_NS_END
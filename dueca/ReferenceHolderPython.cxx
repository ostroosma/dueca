/* ------------------------------------------------------------------   */
/*      item            : ReferenceHolderPython.cxx
        made by         : Rene' van Paassen
        date            : 251016
        category        : body file
        description     :
        changes         : 251016 first version
        language        : C++
        copyright       : (c) 2025 René van Paassen
*/

#if defined(SCRIPT_PYTHON)
#include "ReferenceHolderPython.hxx"

DUECA_NS_START

ReferenceHolderPython::ReferenceHolderPython() :
  _refs()
{}

bpy::list &ReferenceHolderPython::refs()
{
  if (!_refs) {
    _refs.reset(new bpy::list);
  }
  return *_refs;
}

ReferenceHolderPython::~ReferenceHolderPython() {}

DUECA_NS_END
#endif
/*
Dex module for Yara.
Have a look at corkami's tweet about dex format
https://twitter.com/angealbertini/status/538439969870581761/photo/1
*/

#include <yara/modules.h>

#define MODULE_NAME dex

begin_declarations;


end_declarations;


int module_initialize(
    YR_MODULE* module)
{
  return ERROR_SUCCESS;
}


int module_finalize(
    YR_MODULE* module)
{
  return ERROR_SUCCESS;
}


int module_load(
    YR_SCAN_CONTEXT* context,
    YR_OBJECT* module_object,
    void* module_data,
    size_t module_data_size)
{
  return ERROR_SUCCESS;
}


int module_unload(YR_OBJECT* module_object)
{
  return ERROR_SUCCESS;
}

#undef MODULE_NAME
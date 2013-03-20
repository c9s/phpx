#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_phpx.h"

static zend_function_entry phpx_functions[] = {
    PHP_FE(phpx_test, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry phpx_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_PHPX_EXTNAME,
    phpx_functions, // zend_function_entry
    NULL,   // PHP_MINIT(phpx) 
    NULL,   // 
    NULL,   // PHP_RINIT(phpx)
    NULL,   // PHP_RSHUTDOWN(phpx)
    NULL,   // PHP_MINFO(phpx)
#if ZEND_MODULE_API_NO >= 20010901
    PHP_PHPX_VERSION,  // your extension version
#endif
    STANDARD_MODULE_PROPERTIES, // PHP_MODULE_GLOBALS(phpx),
    NULL,    // PHP_GINIT(phpx)
    NULL    // TODO
};

#ifdef COMPILE_DL_PHPX
ZEND_GET_MODULE(phpx)
#endif

PHP_FUNCTION(phpx_test)
{
    RETURN_STRING("Hello World", 1);
}



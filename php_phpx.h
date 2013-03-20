

#ifndef PHP_PHPX_H
#define PHP_PHPX_H 1
#define PHP_PHPX_VERSION "1.0"
#define PHP_PHPX_EXTNAME "phpx"

PHP_FUNCTION(phpx_test);

extern zend_module_entry phpx_module_entry;
#define phpext_phpx_ptr &phpx_module_entry

#endif

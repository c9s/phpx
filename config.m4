
PHP_ARG_ENABLE(phpx,
    [Whether to enable the "phpx" extension],
    [  --enable-phpx      Enable "phpx" extension support])

if test $PHP_PHPX != "no"; then
    PHP_REQUIRE_CXX()
    PHP_SUBST(PHPX_SHARED_LIBADD)
    PHP_ADD_LIBRARY(stdc++, 1, PHPX_SHARED_LIBADD)
    PHP_NEW_EXTENSION(phpx, php_phpx.c, $ext_shared)
fi

#! /bin/bash

make clean

phpize

./configure    --with-debugfile=/tmp/baidu.log

make && make install

pkill php-fpm

/mh/phphook/php/sbin/php-fpm -R

echo "done"
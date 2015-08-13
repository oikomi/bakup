

#ifndef DRIVER_SOCKET_H
#define DRIVER_SOCKET_H

#include "zend_API.h"

#define APM_E_socket APM_E_ALL

#define MAX_SOCKETS 10

apm_driver_entry * apm_driver_socket_create();

PHP_INI_MH(OnUpdateAPMsocketErrorReporting);

#endif

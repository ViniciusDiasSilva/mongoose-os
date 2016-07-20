/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_SJ_INIT_H_
#define CS_FW_SRC_SJ_INIT_H_

enum sj_init_result {
  SJ_INIT_OK = 0,
  SJ_INIT_OUT_OF_MEMORY = -1,
  SJ_INIT_APP_INIT_FAILED = -2,
  SJ_INIT_APP_JS_INIT_FAILED = -3,
  SJ_INIT_SYS_INIT_JS_FAILED = -4,
  SJ_INIT_CONFIG_LOAD_DEFAULTS_FAILED = -10,
  SJ_INIT_CONFIG_WIFI_INIT_FAILED = -11,
  SJ_INIT_CONFIG_INVALID_STDOUT_UART = -12,
  SJ_INIT_CONFIG_INVALID_STDERR_UART = -13,
  SJ_INIT_CONFIG_WEB_SERVER_LISTEN_FAILED = -14,
};

enum sj_init_result sj_init();

#endif /* CS_FW_SRC_SJ_INIT_H_ */

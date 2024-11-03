# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(valgrind)

target_include_directories(app PRIVATE ${ZEPHYR_BASE}/subsys/net/lib/dns)
target_sources(app PRIVATE main_harness.c)

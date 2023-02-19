#!/bin/sh
ifconfig | grep "ether" | sed '/ethernet/d' | sed 's/ether //' | tr -d '\t'
#!/bin/bash
for file in _*.c; do mv "$file" "${file/_/}"; done

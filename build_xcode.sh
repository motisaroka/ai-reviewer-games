#!/bin/bash
set -e
BUILD_DIR="build-xcode"
rm -rf "$BUILD_DIR"
cmake -B "$BUILD_DIR" -G Xcode .
cmake --build "$BUILD_DIR" --config Debug
echo "Xcode project generated and built in $BUILD_DIR"


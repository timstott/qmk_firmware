#!/bin/zsh

docker run --rm -v $PWD:/qmk -e keymap=nopinky -e keyboard=ergodox_ez edasque/qmk_firmware

open .build

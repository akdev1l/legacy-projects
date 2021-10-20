#!/bin/bash

main() {

    export JEKYLL_ENV=production
    export PATH="${PATH}:${HOME}/.local/bin"
    bundle exec jekyll build

}

main "$@"

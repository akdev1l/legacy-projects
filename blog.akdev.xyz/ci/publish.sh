#!/bin/bash

set -eu

main() {

    SiteDir="_site/"
    Target="ansible@blog.akdev.xyz"

    rsync -avr --rsh='ssh' --delete-after \
        --delete-excluded "${SiteDir}" \
        "${Target}"
        

}

main "$@"

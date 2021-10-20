#!/bin/bash

main() {

    umask 077

    inventoryChosen="$1"

    export ANSIBLE_INVENTORY="$(mktemp -d)"
    export ANSIBLE_VAULT_PASSWORD_FILE="password"

    ansible-galaxy install -r requirements.yml
    git clone https://github.com/e4lejandr0/akdev.inventory.git ${ANSIBLE_INVENTORY}

    ln -s "${ANSIBLE_INVENTORY}/${inventoryChosen}/inventory" "inventory"
    ln -s "${ANSIBLE_INVENTORY}/${inventoryChosen}/group_vars" "group_vars"
    ln -s "${ANSIBLE_INVENTORY}/${inventoryChosen}/host_vars" "host_vars"
    ln -s "${ANSIBLE_INVENTORY}/${inventoryChosen}/vault.yml" "vault.yml"

    cat >${ANSIBLE_VAULT_PASSWORD_FILE} <<<"${ANSIBLE_PUBLIC_VAULT}"

    mkdir -p ${HOME}/.ssh
    cat >${HOME}/.ssh/id_rsa <<<"${ANSIBLE_SSH_KEY}"
    
}

main "$@"

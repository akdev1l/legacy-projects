akdev's ansible setup
=====================

this my personal setup for the multiple servers I manage on my personal
time.

I intend to create an easily reproducible configuration to easily provision
new hosts onto my network.

requirements
============

1. Target host is runnin RHEL or CentOS 7
2. Target host can reach the internet (required for flatpak installations)

overview
========

This setup uses Ansible as a deployment mechanism for Dockerized applications
allowing for easy migration onto new hardware when need with minimal work.

Each container is connected to a user-defined docker network `akdev0` and it comes with
systemd unit file for easy service management. The `gateway` container provides an HTTP/HTTPS
reverse proxy that exposes the web services hosted in the docker network.

HTTPS connections are verified using a certificate from Let's Encrypt which is automatically renewed
and deployed by the `certbot` container (wip)

License
=======

All the work contained in this repository is licensed under the GPLv3 unless otherwise specified.


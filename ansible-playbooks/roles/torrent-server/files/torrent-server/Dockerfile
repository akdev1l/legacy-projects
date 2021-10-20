FROM centos:centos7

ARG QBITTORRENT_UID=1000
ARG QBITTORRENT_GID=1000

RUN yum upgrade -y
RUN yum install -y epel-release
RUN yum install -y qbittorrent-nox

RUN groupadd --gid ${QBITTORRENT_GID} qbittorrent

RUN useradd --home-dir /var/lib/qbittorrent \
            --uid ${QBITTORRENT_UID} \
            --gid qbittorrent \
            qbittorrent

USER qbittorrent

VOLUME [ "/var/lib/qbittorrent" ]

WORKDIR "/var/lib/qbittorrent"

ENTRYPOINT [ "/usr/bin/qbittorrent-nox" ]

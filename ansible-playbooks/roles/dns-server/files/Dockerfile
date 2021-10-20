FROM centos:centos7

RUN yum upgrade -y

RUN yum install -y bind bind-utils
RUN rm /etc/named.conf
RUN rndc-confgen | sed -n 1,5p | tee /etc/rndc.key && chmod 700 /etc/rndc.key

ENV NAMEDCONF=/etc/named.conf \
    KRB5_KTNAME=/etc/named.keytab

EXPOSE 53/tcp
EXPOSE 53/udp

ENTRYPOINT /usr/sbin/named -g -u named -c ${NAMEDCONF} $OPTIONS

VOLUME [ "/etc/named.conf", "/etc/named.conf" ]
VOLUME [ "/etc/named", "/etc/named" ]


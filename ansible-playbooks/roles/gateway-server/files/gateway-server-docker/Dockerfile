FROM centos:centos7

RUN yum upgrade -y

RUN yum install -y httpd mod_ssl

ENTRYPOINT rm -rf /var/run/apache2.pid && /usr/sbin/httpd $OPTIONS -DFOREGROUND

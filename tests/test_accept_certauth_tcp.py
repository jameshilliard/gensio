#
#  gensio - A library for abstracting stream I/O
#  Copyright (C) 2018  Corey Minyard <minyard@acm.org>
#
#  SPDX-License-Identifier: LGPL-2.1-only
#

from utils import *
import gensio

print("Test accept certauth-ssl-tcp")
io1 = alloc_io(o, "certauth(cert=%s/clientcert.pem,key=%s/clientkey.pem,username=testuser,service=myservice),ssl(CA=%s/CA.pem),tcp,localhost,3023" % (keydir, keydir, keydir), do_open = False)
ta = TestAccept(o, io1, "certauth(CA=%s/clientcert.pem),ssl(key=%s/key.pem,cert=%s/cert.pem),tcp,3023" % (keydir, keydir, keydir), do_test, do_close = False)
cn = ta.io2.control(0, True, gensio.GENSIO_CONTROL_GET_PEER_CERT_NAME,
                    "-1,CN");
i = cn.index(',')
cn2 = cn[i+1:]
i = cn2.index(',')
if cn2[0:i] != "CN":
    raise Exception(
        "Invalid object name, expected %s, got %s" % ("CN", cn2[0:i]))
if cn2[i+1:] != "gensio.org":
    raise Exception(
        "Invalid common name in certificate, expected %s, got %s" %
        ("gensio.org", cn2[i+1:]))
username = ta.io2.control(0, True, gensio.GENSIO_CONTROL_USERNAME, None)
if username != "testuser":
    raise Exception(
        "Invalid username, expected %s, got %s" % ("testuser", username))
service = ta.io2.control(0, True, gensio.GENSIO_CONTROL_SERVICE, None)
if service != "myservice":
    raise Exception(
        "Invalid service, expected %s, got %s" % ("myservice", service))
ta.close()

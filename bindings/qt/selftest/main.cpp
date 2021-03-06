/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <QDebug>
#include "qczmq.h"

int main(int argc, char **argv)
{
    bool verbose;
    if (argc == 2 && streq (argv [1], "-v"))
        verbose = true;
    else
        verbose = false;

    qDebug() << "Running qczmq selftests...\n";

    QZactor::test (verbose);
    QZdir::test (verbose);
    QZdirPatch::test (verbose);
    QZfile::test (verbose);
    QZframe::test (verbose);
    QZhashx::test (verbose);
    QZiflist::test (verbose);
    QZloop::test (verbose);
    QZmsg::test (verbose);
    QZpoller::test (verbose);
    QZsock::test (verbose);
    QZstr::test (verbose);
    QZtrie::test (verbose);
    QZuuid::test (verbose);
    QZhash::test (verbose);
    QZlist::test (verbose);

    qDebug() << "Tests passed OK\n";
    return 0;
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

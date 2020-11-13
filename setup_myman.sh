#! /bin/bash
sudo apt-get install libncurses5-dev groff make gcc
wget http://downloads.sourceforge.net/project/myman/myman-cvs/myman-cvs-2009-10-30/myman-wip-2009-10-30.tar.gz
tar -xzf myman-wip-2009-10-30.tar.gz
cd myman-wip-2009-10-30
sudo bash configure
make
./myman

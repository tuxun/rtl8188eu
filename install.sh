#for https://codeload.github.com/lwfinger/rtl8188eu/zip/master
#from  https://askubuntu.com/questions/377470/tp-link-wn725n-unable-to-get-drivers-to-work-with-13-04-after-upgrade-worked-o

cd rtl8188eu-master
make
sudo make install
sudo modprobe 8188eu


cmd_/home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video/.install := bash scripts/headers_install.sh /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-3.14.79/include/uapi/video edid.h sisfb.h uvesafb.h; bash scripts/headers_install.sh /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-3.14.79/include/video ; bash scripts/headers_install.sh /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-3.14.79/include/generated/uapi/video ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video/$$F; done; touch /home/lintel/PandoraBox-MT7620/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-1.0.x/linux-dev//include/video/.install
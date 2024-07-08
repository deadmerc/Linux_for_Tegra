 #!/bin/bash

apt-get update
apt install -y nvidia-jetpack pulseaudio-module-bluetooth
systemctl disabled nvgetty.service
apt-get clean
rm /etc/apt/apt.conf


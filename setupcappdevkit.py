#!/usr/bin/python3
""" Copyright© 2023-2024 LinuxUsersLinuxMint
CAppDevKit Tüm Hakları GPL(Genel Kamu Lisansı) altında korunmaktadır.
CAppDevKit All Rights Reserved under the GPL(General Public License).
Bu Yazılımın Bir Kopyası GİTHUB da yayınlanmaktadır Görüntülemek için: https://github.com/LinuxUsersLinuxMint/LinuxUsersLinuxMint
A Copy of This Software is published on GITHUB To view: https://github.com/LinuxUsersLinuxMint/LinuxUsersLinuxMint """

import os
from pyappdevkit import *

yes_no=str(input('Are you sure you want to install CAppDevKit? (Y / N / Uninstall): '))

if yes_no=="N" or yes_no=="n" or yes_no=="No" or yes_no=="no" or yes_no=="NO":
    exit_program_dialog("exit...")
elif yes_no=="Y" or yes_no=="y" or yes_no=="Yes" or yes_no=="yes" or yes_no=="YES":
    print("Installing CAppDevKit...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step 1/3...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: setup_create_dir.sh step 1/3... (Create Folder)")
    time(3)
    os.system("./setup_create_dir.sh")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step completed...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step 2/3...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: setup_copy_files.sh step 2/3... (Copy Files)")
    time(3)
    os.system("./setup_copy_files.sh")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step completed...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step 3/3...")
    time(3)
    print("[CAppDevKit_Setup_Environment]: setup_folder_copy.sh step 3/3... (Copy Folder)")
    time(3)
    os.system("./setup_folder_copy.sh")
    time(3)
    print("[CAppDevKit_Setup_Environment]: CAppDevKit installation step completed...")
    exit()
elif yes_no=="Uninstall" or yes_no=="uninstall" or yes_no=="U" or yes_no=="u":
    print("Uninstall CAppDevKit...")
    time(3)
    os.system("./uninstall_cappdevkit.sh")
    time(3)
    exit()
else:
    error_msg("Invalid CAppSE (CAppDevKit Setup Environment) Argument...")
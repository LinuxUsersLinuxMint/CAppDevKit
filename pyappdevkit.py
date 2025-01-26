#!/usr/bin/python3
""" Copyright© 2023-2025 LinuxUsersLinuxMint
PyAppDevKit Tüm Hakları GPL(Genel Kamu Lisansı) altında korunmaktadır.
PyAppDevKit All Rights Reserved under the GPL(General Public License).
Bu Yazılımın Bir Kopyası GİTHUB da yayınlanmaktadır Görüntülemek için: https://github.com/LinuxUsersLinuxMint/PyAppDevKit
A Copy of This Software is published on GITHUB To view: https://github.com/LinuxUsersLinuxMint/PyAppDevKit"""

def time(number):
    while number > 0:
        number -= 1
        for _ in range(100000000):
            pass

def error_msg(error_dialog):
    print(error_dialog)

def exit_program_dialog_time(exit_dialog_msg,userTime):
    print(exit_dialog_msg)
    time(userTime)
    exit()

def exit_program_time(userTime):
    time(userTime)
    exit()

def exit_program_dialog(exit_dialog_msg):
    print(exit_dialog_msg)
    exit()
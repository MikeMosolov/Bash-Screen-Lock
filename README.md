Puth the compiled executable to your Path folder. Then make alias entry to bashrc, surrounding the binary file with set +m and set -m. This way Ctrl z and Ctrl c won't mess with the program
e.g., alias loc="set +m && your binary file && set -m".
Restart the bash and fire the alias. If the password was inserted correctly, the backlight turns on after some mouse or keyboard event.

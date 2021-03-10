```shell
# list boards
arduino-cli board list

# To list all available board installed
arduino-cli board listall

# To create a new sketch
arduino-cli new sketch

# To update arduino local cache
arduino-cli core update-index

# TO install a new board
arduino-cli core install arduino:avr

# To compile an ino file
arduino-cli compile -b arduino-avr:uno ./dir-of-ino-project

# To upload an ino
arduino-cli upload -p /dev/ttyACM0 -b arduino:avr:mega ./dir-of-ino-project

# To search a library
arduino-cli lib search LibraryName

# To install a library
arduino-cli lib install LibraryName

# To communicate with the Serial Monitor

# By specifying the port and the baudrate
stty -F /dev/ttyACM0 raw 9600
# And then get the output
cat /dev/ttyACM0

# And to write in the serial port:
echo "working..." > /dev/ttyACM0

# TO attach a specificboard to a sketch
# So that no need to specify it each time
arduino-cli board attach board:name
```

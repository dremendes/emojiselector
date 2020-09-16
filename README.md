![Screenshot](https://raw.githubusercontent.com/fullynotanalien/emojiselector/master/emoji-selector-screenshot.png)

# Why a desktop Emoji Selector?

PC/notebook users often prefer the web, desktop versions of popular mobile chat applications. As emojis became part of our communications, those users often see themselves browsing websites only to get emojis they want to use in conversations. 

Emoji Selector is a small GTK application that copies emojis to your clipboard so you don't have to look them up on the internet.
It also sorts your emojis by frequency of use so they ones you often use appear first.

This software as currently is is not well suited for public use as it is not complete.
There are linux and windows (64 bits) binaries in this repo if you want to use it anyways.

# TODO
   1. Persist emojis frequencies-of-use data
   2. Store and persist user created emoji sequences
      Add buttons for space and line-break to allow for nice emoji sequences
   3. Full Text Search by emoji description and tags
   4. Import / Export user created emoji sequences
   5. Make it fast and < 500k on disk (it heights 1.3Mb currently and it is slow. I don't think > 1Mb is justified for a program like this)

# Compiling from source on Linux and Windows (with MSYS2 MinGW 64bits)

``$ gcc `pkg-config --cflags gtk+-3.0` -o emojiSelector emojiSelector.c `pkg-config --libs gtk+-3.0` ``

# Running (on Linux)
`$ ./emojiSelector`

# Running (on Windows)
`>emojiSelector.exe`



![Screenshot](https://raw.githubusercontent.com/fullynotanalien/emojiselector/master/emoji-selector-screenshot.png)

# Why a desktop Emoji Selector?

PC/notebook users often prefer web-versions of popular chat applications built for mobile devices. As emojis became part of our communications, those users often see themselves browsing websites only to get the emojis they need to better express. 

Emoji Selector is a small GTK application that copies emojis to your clipboard so you don't have to look them up on the internet.
It also sorts your emojis by frequency of use so they ones you often use appear first.

This software as currently is is not well suited for public use as it is not complete. For now it only features a handful of emojis I need most to talk to my girlfriend

# TODO
   1. Persist emojis frequencies-of-use data
   2. Store and persist user created emoji sequences
      Add buttons for space and line-break to allow for nice emoji sequences
   3. Full Text Search by emoji description and tags
   4. Import / Export user created emoji sequences

# Compiling from source

``$ gcc `pkg-config --cflags gtk+-3.0` -o emojiSelector emojiSelector.c `pkg-config --libs gtk+-3.0` ``

# Running
`$ ./emojiSelector`



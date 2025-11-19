# <div align="center"> Network Messenger </div>

A small C++ program that lets multiple users chat with each other through the terminal. One part of the project runs as a server and listens for incoming connections. The other part runs as a client and lets users join the chat and send messages. Everything is done through text in the terminal, which keeps the focus on learning networking and core C++ concepts.

The app uses TCP sockets and a lightweight message format. Each client has two threads running concurrently. One thread sends user input to the server, and the other thread listens for incoming messages. The server receives messages from any connected client and sends them out to all other users. This makes the program feel like a small chat room.

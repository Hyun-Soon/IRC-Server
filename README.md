# 🌐 IRC Server Project

Welcome to the **IRC Server Project**! This project is a custom implementation of an IRC (Internet Relay Chat) server, designed to provide real-time communication through channels and direct messages.

## 🚀 Features
- **I/O Multiplexing**: Used kqueue.

- **Channel Management**: Create, join, and leave channels.
- **Private Messaging**: Send direct messages to other users.
- **User Authentication**: Secure login with username and password.
- **Moderation Tools**: Kick, ban users, and manage channels effectively.

## 💻 Installation

Follow these steps to set up and run the IRC server on your local machine:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/Hyun-Soon/IRC-Server.git
    cd IRC-Server
    ```

2. **Build the project**:
    ```bash
    make
    ```

3. **Run the server**:
    ```bash
    ./ircserv <port> <password>
    ```

## 🛠️ Usage

Once the server is running, clients can connect to it using an IRC client.

### Example of Connecting with an IRC Client:
- Connect with nc : `nc -c <serverip> <port>`

If you connect this way, you should register userinfo using command PASS, USER, NICK (Check IRC Protocol)
  
- Connect with IRC Client (e.g., irssi) :
```
./irssi
connect -nocap <ip> <port> <password>
```

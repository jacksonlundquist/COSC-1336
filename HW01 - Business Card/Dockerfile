# Dockerfile template from https://devblogs.microsoft.com/cppblog/c-development-with-docker-containers-in-visual-studio-code/

FROM docker/whalesay:latest
LABEL Name=businesscard Version=0.0.1
RUN apt-get -y update && apt-get install -y fortunes
CMD ["sh", "-c", "/usr/games/fortune -a | cowsay"]

# Get the GCC preinstalled image from Docker Hub
FROM gcc:4.9

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . C:\Users\jackl\Documents\GitHub\COSC-1336\businesscard

# Specify the working directory
WORKDIR C:\Users\jackl\Documents\GitHub\COSC-1336\businesscard

# Use GCC to compile the source file
RUN g++ -o buscard businesscard.cpp

# Run the program output from the previous step
CMD ["./buscard"]
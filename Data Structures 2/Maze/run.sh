javac -cp "lib/JSGE-Latest/JSGE-v1.6.1-bin.jar" -d bin src/Maze/Main.java
java -Djava.library.path=lib/jinput-2.0.10-natives-all -cp "bin:lib/JSGE-Latest/JSGE-v1.6.1-bin.jar:lib/*" Maze.Main

# javac -cp "lib/*" -d bin src/Sorting/Main.java
# java -Djava.library.path=lib/jinput-2.0.10-natives-all -cp "bin:lib/*" Sorting.Main

